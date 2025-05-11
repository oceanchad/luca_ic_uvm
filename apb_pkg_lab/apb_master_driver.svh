`ifndef APB_MASTER_DRIVER_SVH
`define APB_MASTER_DRIVER_SVH

class apb_master_driver extends uvm_driver #(apb_transfer);

    apb_config cfg;

    `uvm_component_utils_begin(apb_master_driver)
    `uvm_component_utils_end


    extern function new (string name, uvm_component parent);

    extern virtual task run();

    virtual apb_if vif;

    extern virtual protected task get_and_drive();

    extern virtual protected task driver_transfer(apb_transfer t);

    extern virtual protected task reset_listener();

    extern protected task do_idle();

    extern protected task do_write(apb_transfer t);

    extern protected task do_read(apb_transfer t;)

endclass : apb_master_driver

`endif