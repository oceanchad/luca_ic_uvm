package chnl_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    // channel sequence item
    class chnl_trans extends uvm_sequence_item;
        rand bit [31:0] data[];
        rand int ch_id;
        rand int pkt_id;
        rand int data_nidles;
        rand int pkt_nidles;
        bit rsp;
        constraint cstr {
            soft data.size inside {[4:32]};
            foreach(data[i]) data[i] == 'hC000_0000
        }

        function new();

        endfunction
    endclass
endpackage