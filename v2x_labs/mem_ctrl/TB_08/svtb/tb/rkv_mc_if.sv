interface rkv_mc_if;
    import uvm_pkg::*;
    `include "uvm_macros.svh"
    import rkv_mc_pkg::*;

    clocking cb_mem @(posedge clk);
        default input #1ps output #1ps;

        input mc_dqm;
        input mc_we;
        input mc_cas;
        input mc_ras;
        input mc_cke;
        input mc_cs;
        input mc_ba;
        input mc_addr;
        input mc_dq;
        input mc_dqp;
        input mc_cs0;
        input mc_cs1;
        input mc_a10;
        input mc_cmd_comb;
    endclocking
endinterface