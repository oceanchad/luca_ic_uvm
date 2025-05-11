`ifndef APB_TRANSFER_SV
`define APB_TRANSFER_SV

typedef enum { IDLE, WRITE, READ } apb_trans_kind;

class apb_transfer extends uvm_sequence_item;
    rand bit [31:0] addr;
    rand bit [31:0] data;
    rand apb_trans_kind trans_kind;
    rand int idle_cycles;

    constraint cstr {
        soft idle_cycles == 1;
    };

    `uvm_object_utils_begin(apb_transfer)
        `uvm_field_enum (apb_trans_kind, trans_kind, UVM_ALL_ON)
        `uvm_field_int (addr, UVM_ALL_ON)
        `uvm_field_int (data, UVM_ALL_ON)
        `uvm_field_int (idle_cycles, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "apb_transfer_inst");
        super.new(name);
    endfunction : new

endclass : apb_transfer

`endif