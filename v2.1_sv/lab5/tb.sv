`timescale 1ns/1ps

interface chnl_intf(input clk, input rstn);
    logic [31:0] ch_data;
    logic        ch_valid;
    logic        ch_ready;
    clocking drv_ck @(posedge clk);
        default input #1ns output #1ns;
        output ch_data, ch_valid;
        input ch_ready;
    endclocking
    clocking mon_ck @(posedge clk);
        default input #1ns output #1ns;
        input ch_data, ch_valid, ch_ready;
    endclocking
endinterface

interface reg_intf(input clk, input rstn);

endinterface

interface arb_intf(input clk, input rstn);

endinterface

interface fmt_intf(input clk, input rstn);

endinterface

interface mcdf_intf(input clk, input rstn);

endinterface

module tb;
    logic   clk;
    logic   rstn;

    mcdf dut(
        .clk_i
    );

endmodule