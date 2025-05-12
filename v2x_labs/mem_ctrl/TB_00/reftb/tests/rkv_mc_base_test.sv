`ifndef RKV_MC_BASE_TEST_SV
`define RKV_MC_BASE_TEST_SV

virtual class rkv_mc_base_test extends uvm_test;

    rkv_mc_config cfg;
    rkc_mc_env env;
    mc_reg_model_block rgm;

    function new(string name = "rkv_mc_base_test", uvm_component parent);
        super.new(name, parent);
    endfunction

    function build_phase(uvm_phase phase);
        super.build_phase(phase);
        cfg = rkv_mc_config::type_id::create("cfg");

        rgm = mc_reg_model_block::type_id::create("rgm")
        rgm.build();

        uvm_config_db#(mc_reg_model_block)::set(this, "env", "rgm", rgm);
        
    endfunction

endclass


`endif RKV_MC_BASE_TEST_SV