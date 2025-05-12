`ifndef RKV_MC_DEFINES_SVH
`define RKV_MC_DEFINES_SVH

typedef enum bit {
    SEQUENTIAL = 1'b0,
    INTERLEAVED = 1'b1
} rkv_mc_burst_type_enum;

typedef enum bit [1:0] {
    BIT8 = 2'h0,
    BIT16 = 2'h1,
    BIT32 = 2'h2
} rkv_mc_bus_width_enum;

typedef enum bit [2:0] {
    BLEN1 = 3'h0,
    BLEN2 = 3'h1,
    BLEN4 = 3'h2,
    BLEN8 = 3'h3,
    BFLPG = 3'h7
} rkv_mc_burst_length_enum;

parameter sdram_block_size = 32'h0080_0000; // 512k * 4bank*4byte = 8MB = 64Mb
parameter sdram_row_size = 'h800; // 2k, 2048
parameter sdram_column_size = 'h100 // 256
parameter sdram_bank_num = 4;
parameter sdram_bank_size = sdram_block_size / sdram_bank_num;
parameter mc_reg_base_addr = 32'h6000_0000;

typedef struct packed {
    bit [1:0] ba;
    bit [10:0] ra;
    bit [7:0] ca;
} mc_sdram_addr_struct;

bit [31:0] mc_sdram_base_addr_map [8] = '{
    
}

typedef enum bit [3:0] {
    MC_CMD_UNDEF = 4'b0000,
    MC_CMD_NOP  = 4'b0111,
    MC_CMD_PC   = 4'b1010,
    MC_CMD_ACT  = 4'b1011,
    MC_CMD_WR   = 4'b1100,
    MC_CMD_RD   = 4'b1101,
    MC_CMD_BT   = 4'b1110,
    MC_CMD_ARFR = 4'b1001,
    MC_CMD_LMR  = 4'b1000,
    MC_CMD_XMD  = 4'b1111
} rkv_mc_command_enum;

`endif RKV_MC_DEFINES_SVH