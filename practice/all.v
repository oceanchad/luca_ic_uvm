



module mul_addtree_2_stage(
    input clk, clr,
    input [3:0] mul_a, mul_b,
    output reg [7:0] mul_out
);

    wire [7:0] stored0, stored1, stored2, stored3;
    reg [7:0] add01, add23;
    assign stored3 = mul_b[3] ? {1'b0, mul_a, 3'b0} : 8'b0;
    assign stored2 = mul_b[2] ? {2'b0, mul_a, 2'b0} : 8'b0;
    assign stored1 = mul_b[1] ? {3'b0, mul_a, 1'b0} : 8'b0;
    assign stored0 = mul_b[0] ? {4'b0, mul_a} : 8'b0;

    always@(posedge clk or negedge clr) begin
        if (!clr) begin
            add01 <= 8'b0000_0000;
            add23 <= 8'b0000_0000;
            mul_out <= 8'b0000_0000;
        end else begin
            add01 <= stored3 + stored2;
            add23 <= stored1 + stored0;
            mul_out <= add01 + add23;
        end
    end

endmodule

module mul_addtree_2_stage_tb;
    reg clk, clr;
    reg [3:0] mult_a;
    reg [3:0] mult_b;
    wire [7:0] mult_out;

    mul_addtree_2_stage U1(
        .mul_a(mult_a),
        .mul_b(mult_b),
        .mul_out(mult_out),
        .clk(clk),
        .clr(clr)
    );

    initial begin
        clk = 0;
        clr = 0;
        mult_a = 1;
        mult_b = 1;
        #5 clr = 1;
    end

    always #10 clk = ~clk;

    initial begin
        repeat(5)
        begin
            #20 mult_a = mult_a + 1;
            mult_b = mult_b + 1;
        end
        #110 $finish();
    end

    initial begin
        $dumpfile("dump.vcd"); $dumpvars;
    end

endmodule

/* read, write same channel */
module ram_single(
    input clk,
    input [2:0] addm,
    input cs_n,
    input we_n,
    input [7:0] din,
    output reg [7:0] dout
);
    reg [7:0] raml [7:0];
    always@(posedge clk) begin
        if (cs_n)
            dout <= 8'bzzzz_zzzz;
        else begin
            if (we_n) // read
                dout <= raml[addm];
            else // write
                raml[addm] <= din;
        end
    end
endmodule

module ram_single_tb;
    reg clk, we_n, cs_n;
    reg [2:0] addm;
    reg [7:0] din;
    wire [7:0] dout;
    ram_single U1(
        .clk(clk),
        .addm(addm),
        .cs_n(cs_n),
        .we_n(we_n),
        .din(din),
        .dout(dout)
    );
    initial begin
        clk = 0;
        addm = 0;
        cs_n = 1;
        we_n = 0;
        din = 0;
        #5 cs_n = 0;
        #315 we_n = 1;
    end

    always #10 clk = ~clk;

    initial begin
        repeat(7) begin
            #40 addm = addm + 1;
            din = din + 1;
        end
        #40
        repeat(7)
            #40 addm = addm - 1;
        #1000 $finish();
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;
    end


endmodule

/* read, write invidual channel */
module ram_dual(
    output reg [7:0] q_out, // out data
    input [7:0] d_in,       // in data
    input [2:0] addr_in,    // write data address
    input [2:0] addr_out,   // read data address
    input we,               // write data control signal
    input rd,               // read data control signal
    input clk1,             // write data clock signal
    input clk2              // read data clock signal
);
    reg [7:0] mem[7:0];
    always@(posedge clk1) begin
        if (we)
            mem[addr_in] <= d_in;
    end

    always@(posedge clk2) begin
        if (rd)
            q_out <= mem[addr_out];
    end

endmodule

module ram_dual_tb;
    reg clk1, clk2, we, rd;
    reg [2:0] addr_in;
    reg [2:0] addr_out;
    reg [7:0] d_in;
    wire[7:0] q_out;

    ram_dual(
        .q_out(q_out),
        .addr_in(addr_in),
        .addr_out(addr_out),
        .d_in(d_in),
        .we(we),
        .rd(rd),
        .clk1(clk1),
        .clk2(clk2)
    );

    initial begin
        clk1 = 0;
        clk2 = 0;
        we = 1;
        rd = 0;
        addr_in = 0;
        addr_out = 0;
        d_in = 0;
        #320 we = 0;
        rd = 1;
    end

    always begin
        #10 clk1 = ~clk1;
        clk2 = ~clk2;
    end

    initial begin
        repeat(7) begin
            #40 addr_in = addr_in + 1;
            d_in = d_in + 1;
        end
        #40
        repeat(7) begin
            #40 addr_out = addr_out + 1;
        end
        #50 $finish();
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;
    end


endmodule

module rom(
    input clk, cs_n,
    input [2:0] addm,
    output reg [7:0] dout
);
    reg [7:0] rom [7:0];
    initial begin
        rom[0] = 8'b0000_0000;
        rom[1] = 8'b0000_0001;
        rom[2] = 8'b0000_0010;
        rom[3] = 8'b0000_0011;
        rom[4] = 8'b0000_0100;
        rom[5] = 8'b0000_0101;
        rom[6] = 8'b0000_0110;
        rom[7] = 8'b0000_0111;
    end
    always@(posedge clk) begin
        if (cs_n) dout <= 8'bzzzz_zzzz;
        else
            dout <= rom[addm];
    end

endmodule

module rom_tb;
    reg clk, cs_n;
    reg [2:0] addm;
    wire [7:0] dout;

    rom U1(
        .dout(dout),
        .clk(clk),
        .addm(addm),
        .cs_n(cs_n)
    );

    initial begin
        clk = 0;
        addm = 0;
        cs_n = 0;
    end

    always #10 clk = ~clk;
    initial begin
        repeat(7) begin
            #20 addm = addm + 1;
        end
        #10 $finish();
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;
    end
endmodule

module FIFO_buffer(
    input clk, rst,
    input wr_to_stack, rd_from_stack,
    input [7:0] data_in,
    output [7:0] data_out
);
    wire[2:0] addr_in, addr_out;

    FIFO_control U1(
        .stack_full(stack_full),
        .stack_empty(stack_empty),
        .write_to_stack(wr_to_stack),
        .write_ptr(addr_in),
        .read_ptr(addr_out),
        .read_from_stack(rd_from_stack),
        .clk(clk),
        .rst(rst)
    );

    ram_dual U2(
        .q_out(data_out),
        .addr_in(addr_in),
        .addr_out(addr_out),
        .d_in(data_in),
        .we(wr_to_stack),
        .rd(rd_from_stack),
        .clk1(clk),
        .clk2(clk)
    );

endmodule

module FIFO_control(
    write_ptr,
    read_ptr,
    stack_full,
    stack_empty,
    write_to_stack,
    read_from_stack,
    clk,
    rst
);
    parameter stack_width = 8;
    parameter stack_height = 8;
    parameter stack_ptr_width = 3;

    output stack_full;
    output stack_empty;
    output reg [stack_ptr_width - 1 : 0] read_ptr;
    output reg [stack_ptr_width - 1 : 0] write_ptr;

    input write_to_stack;
    input read_from_stack;
    input clk;
    input rst;

    reg [stack_ptr_width : 0] ptr_gap;
    reg [stack_width - 1 : 0] Data_out;
    reg [stack_width - 1 : 0] stack[stack_height - 1 : 0];

    assign stack_full = (ptr_gap == stack_height);
    assign stack_empty = (ptr_gap == 0);

    always@(posedge clk or posedge rst)
    begin
        if (rst) begin
            Data_out <= 0;
            read_ptr <= 0;
            write_ptr <= 0;
            ptr_gap <= 0;
        end else if (write_to_stack && (!stack_full) && (!read_from_stack)) begin
            write_ptr <= write_ptr + 1;
            ptr_gap <= ptr_gap + 1;
        end else if (!write_to_stack && (!stack_empty) && (read_from_stack)) begin
            read_ptr <= read_ptr + 1;
            ptr_gap <= ptr_gap - 1;
        end else if (write_to_stack && stack_empty && read_from_stack) begin
            write_ptr <= write_ptr + 1;
            ptr_gap <= ptr_gap + 1;
        end else if (write_to_stack && stack_full && read_from_stack) begin
            read_ptr <= read_ptr + 1;
            ptr_gap <= ptr_gap - 1;
        end else if (write_to_stack && read_from_stack && (!stack_full && (!stack_empty))) begin
            read_ptr <= read_ptr + 1;
            write_ptr <= write_ptr + 1;
        end
    end

endmodule

module FIFO_tb;
    reg clk, rst;
    reg [7:0] Data_in;
    reg write_to_stack, read_from_stack;
    wire [7:0] Data_out;

    FIFO_buffer U1(
        .clk(clk),
        .rst(rst),
        .wr_to_stack(write_to_stack),
        .rd_from_stack(read_from_stack),
        .data_in(Data_in),
        .data_out(Data_out)
    );

    initial begin
        clk = 0; rst = 1; Data_in = 0; write_to_stack = 1; read_from_stack = 0;
        #5 rst = 0;
        #155 write_to_stack = 0;
        read_from_stack = 1;
    end
    always #10 clk = ~clk;
    initial begin
        repeat(7)
        #20 Data_in = Data_in + 1;
    end
endmodule

module div2_wo_counter(
    input clk,
    input rst_n,
    output reg o_clk
);
    always@(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o_clk <= 0;
        else
            o_clk <= ~o_clk;
    end
endmodule

module div2_v2 (
  input clk,
  input rst_n,
  output reg o_clk
);

  reg cnt;

  always@(posedge clk or negedge rst_n) begin
    if (!rst_n)
      cnt <= 0;
    else if (cnt == 1)
      cnt <= 0;
    else
      cnt <= cnt + 1;
  end

  always@(posedge clk or negedge rst_n) begin
    if (!rst_n)
      o_clk <= 0;
    else if (cnt < 1)
      o_clk = 0;
    else
      o_clk = 1;
  end

endmodule

module div2_v4 (
  input clk,
  input rst_n,
  output reg o_clk
);

  reg [1:0] cnt;

  always@(posedge clk or negedge rst_n) begin
    if (!rst_n)
      cnt <= 0;
    else if (cnt == 3)
      cnt <= 0;
    else
      cnt <= cnt + 1;
  end

  always@(posedge clk or negedge rst_n) begin
    if (!rst_n)
      o_clk <= 0;
    else if (cnt < 2)
      o_clk = 0;
    else
      o_clk = 1;
  end

endmodule

module div3(
  input clk,
  input rst_n,
  output reg o_clk
);
  reg [1:0] cnt_p;
  reg [1:0] cnt_n;
  reg clk_p;
  reg clk_n;

  assign o_clk = clk_p | clk_n;

  always@(negedge clk or negedge rst_n) begin
    if (!rst_n)
      cnt_n <= 0;
    else if (cnt_n == 2)
      cnt_n <= 0;
    else
      cnt_n <= cnt_n + 1;
  end

  always@(negedge clk or negedge rst_n) begin
    if (!rst_n)
      clk_n <= 1;
    else if (cnt_n < 1)
      clk_n = 1;
    else
      clk_n = 0;
  end


  always@(posedge clk or negedge rst_n) begin
    if (!rst_n)
      cnt_p <= 0;
    else if (cnt_p == 2)
      cnt_p <= 0;
    else
      cnt_p <= cnt_p + 1;
  end

  always@(posedge clk or negedge rst_n) begin
    if (!rst_n)
      clk_p <= 1;
    else if (cnt_p < 1)
      clk_p = 1;
    else
      clk_p = 0;
  end

endmodule

module div2_wo_counter_tb;
    reg clk;
    reg rst_n;
    wire o_clk;

    div2_wo_counter dut(
        clk,
        rst_n,
        o_clk
    );

    initial begin
        clk = 1'b1;
        rst_n = 1'b0;
        #5 rst_n = 1'b1;
        #200 $finish();
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;
    end

    always #10 clk = ~clk;
endmodule