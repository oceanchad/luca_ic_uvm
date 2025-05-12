`ifndef RKV_MC_CONFIG_SV
`define RKV_MC_CONFIG_SV

class rkv_mc_config extends uvm_object;
    svt_ahb_system_configuration ahb_sys_cfg;

    virtual rkv_mc_if vif;
    mc_reg_model_block rgm;

    //----------------------------------
    // Design Register Configurations
    //----------------------------------
    bit reg_is_set_burst_access = 1;
    rkv_mc_burst_length_enum reg_burst_length = BLEN1;

    //----------------------------------
    // Events
    //----------------------------------
    uvm_event mc_cmd_active_e;

endclass

`endif RKV_MC_CONFIG_SV