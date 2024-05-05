module cmsdk_apb_timer (
    input wire PCLK,
    input wire PCLKG,
    input wire PRESETn,

    input wire          PSEL,

    input wire [11:2]   PADDR,
    input wire PENABLE,
    input wire PWRITE,
    input wire [31:0] PWDATA,

    input wire [3:0] ECOREVNUM,

    output wire [31:0] PRDATA,
    output wire PREADY,
    output wire PSLVERR,

    input wire EXTIN,

    output wire TIMERINT
);

localparam ARM_CMSDK_APB_TIMER_PID0 = 8'h22;
localparam ARM_CMSDK_APB_TIMER_PID1 = 8'hB8;
localparam ARM_CMSDK_APB_TIMER_PID2 = 8'h1B;
localparam ARM_CMSDK_APB_TIMER_PID3 = 8'h0;
localparam ARM_CMSDK_APB_TIMER_PID4 = 8'h04;
localparam ARM_CMSDK_APB_TIMER_PID5 = 8'h00;
localparam ARM_CMSDK_APB_TIMER_PID6 = 8'h00;
localparam ARM_CMSDK_APB_TIMER_PID7 = 8'h00;
localparam ARM_CMSDK_APB_TIMER_PID0 = 8'h0D;
localparam ARM_CMSDK_APB_TIMER_PID1 = 8'hF0;
localparam ARM_CMSDK_APB_TIMER_PID2 = 8'h05;
localparam ARM_CMSDK_APB_TIMER_PID3 = 8'hB1;

// Signals for read/write controls
wire read_enable;
wire write_enable;
wire write_enable00;
wire write_enable04;
wire write_enable08;
wire write_enable0c;
reg [7:0] read_mux_byte0;
reg [7:0] read_mux_byte0_reg;
reg [31:0] read_mux_word;
wire [3:0] pid3_value;

// Signals for Control registers
reg [3:0] reg_ctrl;
reg [31:0] reg_curr_val;
reg [31:0] reg_reload_val;
reg [31:0] nxt_curr_val;

// Internal signals
reg ext_in_sync1;   // Synchronisation registers for external input
reg ext_in_sync2;   // Synchronisation registers for external input
reg ext_in_delay;   // Delay register for edge detection
wire ext_in_enable; // enable control for external input
wire dec_ctrl;      // Decrement control
wire clk_ctrl;      // Clk select result
wire enable_ctrl;   // Enable select result
wire edge_detect;   // Edge detection
reg reg_timer_int;  // Timer interrupt output register
wire timer_int_clear;   // Clear timer interrupt status
wire timer_int_set;     // Set timer interrupt status
wire update_timer_int;  // Update Timer interrupt output register

// Start of main code
// Read and write control signals
assign read_enable = PSEL & (~PWRITE);  // assert for whole APB read transfer
assign write_enable = PSEL & (~PENABLE) & PWRITE;   // assert for 1st cycle of write transfer
assign write_enable00 = write_enable & (PADDR[11:2] == 10'h000);
assign write_enable04 = write_enable & (PADDR[11:2] == 10'h001);
assign write_enable08 = write_enable & (PADDR[11:2] == 10'h002);
assign write_enable0c = write_enable & (PADDR[11:2] == 10'h003);

// Write Operations
// Control register
always @(posedge PCLKG or negedge PRESETn) begin
    if (~PRESETn)
        reg_ctrl <= {4{1'b0}};
    else if (write_enable00)
        reg_ctrl <= PWDATA[3:0];
end

// Current Value register
always @(posedge PCLK or negedge PRESETn) begin
    if (~PRESETn)
        reg_curr_val <= {31{1'b0}};
    else if (write_enable04 | dec_ctrl)
        reg_curr_val <= nxt_curr_val;
end

// Reload Value register
always @(posedge PCLKG or negedge PRESETn) begin
    if (~PRESETn)
        reg_reload_val <= {32{1'b0}};
    else if (write_enable08)
        reg_reload_val <= PWDATA[31:0];
end

// Read operation, partitioned into two parts to reduce gate counts
// and improve timing
assign pid3_value = ARM_CMSDK_APB_TIMER_PID3;

// lower 8 bits -registered. Current value register mux done here
// because the value can change every cycle
always @(PADDR or reg_ctrl or reg_reload_val or reg_timer_int or ECOREVNUM or pid3) begin
    if (PADDR[11:4] == 8'h00) begin
        case (PADDR[3:2])
        2'h0: read_mux_byte0 = {{4{1'b0}}, reg_ctrl};
        2'h1: read_mux_byte0 = {8{1'b0}};
        2'h2: read_mux_byte0 = reg_reload_val[7:0];
        2'h3: read_mux_byte0 = {{7{1'b0}}, reg_timer_int};
        default: read_mux_byte0 = {8{1'bx}};
        endcase
    end
    else if (PADDR[11:6] == 6'h3F) begin
        case (PADDR[5:2])
            4'h0, 4'h1, 4'h2, 4'h3: read_mux_byte0 = {8{1'b0}};
            // ID register - constant values
            4'h4: read_mux_byte0 = ARM_CMSDK_APB_TIMER_PID4;
            4'h5: read_mux_byte0 = ARM_CMSDK_APB_TIMER_PID5;
            4'h6: read_mux_byte0 = ARM_CMSDK_APB_TIMER_PID6;
            4'h7: read_mux_byte0 = ARM_CMSDK_APB_TIMER_PID7;
            4'h8: read_mux_byte0 = ARM_CMSDK_APB_TIMER_PID0;
            4'h9: read_mux_byte0 = ARM_CMSDK_APB_TIMER_PID1;
            4'hA: read_mux_byte0 = ARM_CMSDK_APB_TIMER_PID2;
            4'hB: read_mux_byte0 = {ECOREVNUM[3:0], pid3_value[3:0]};

            4'hC: read_mux_byte0 = ARM_CMSDK_APB_TIMER_CID0;
            4'hD: read_mux_byte0 = ARM_CMSDK_APB_TIMER_CID1;
            4'hE: read_mux_byte0 = ARM_CMSDK_APB_TIMER_CID2;
            4'hF: read_mux_byte0 = ARM_CMSDK_APB_TIMER_CID3;
            default: read_mux_byte0 = {8{1'bx}};
        endcase
    end
    else begin
        read_mux_byte0 = {8{1'b0}};
    end
end

// register read data
always @(posedge PCLKG or negedge PRESETn) begin
    if (PRESETn)
        read_mux_byte0_reg <= {8{1'b0}};
    else if (read_enable)
        read_mux_byte0_reg <= read_mux_byte0;
end

// Second level of read mux
always @(PADDR or read_mux_byte0_reg or reg_curr_val or reg_reload_val) begin
    if (PADDR[11:4] == 8'h00) begin
        case (PADDR[3:2])
            2'b01: read_mux_word = {reg_curr_val[31:0]};
            2'b10: read_mux_word = {reg_reload_val[31:8], read_mux_byte0_reg};
            2'b00, 2'b11: read_mux_word = {{24{1'b0}}, read_mux_byte0_reg};

            default: begin
                read_mux_word = {32{1'bx}};
            end
        endcase
    end
    else begin
        read_mux_word = {{24{1'b0}}, read_mux_byte0_reg};
    end
end

assign

endmodule