`ifndef RKV_MC_ENV_SV
`define RKV_MC_ENV_SV

class rkv_mc_env extends uvm_component;
    `uvm_component_utils(rkv_mc_env);

    //  Group: Configuration Object(s)

    //  Var: config_obj
    config_obj_t config_obj;


    //  Group: Components


    //  Group: Variables


    //  Group: Functions

    //  Constructor: new
    function new(string name = "rkv_mc_env", uvm_component parent);
        super.new(name, parent);
    endfunction: new


endclass: rkv_mc_env

`endif RKV_MC_ENV_SV