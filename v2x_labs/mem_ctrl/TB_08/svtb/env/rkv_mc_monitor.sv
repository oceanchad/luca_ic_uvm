`ifndef RKV_MC_MONITOR_SV
`define RKV_MC_MONITOR_SV


class rkv_mc_monitor extends uvm_monitor;

    rkv_mc_command_enum cur_cmd;
    bit [ 1:0] cur_ba;
    bit [10:0] cur_ra;
    bit [ 7:0] cur_ca;
    bit [ 1:0] id;

    // events declared
    uvm_event mc_cmd_active_e;
    uvm_event mc_cmd_write_e;
    uvm_event mc_cmd_read_e;
    uvm_event mc_cmd_refresh_e;
    uvm_event mc_pwr_down_e;
    uvm_event mc_pwr_up_e;

    protected uvm_event_pool _ep;

    rkv_mc_config cfg;
    virtual rkv_mc_if vif;

    uvm_analysis_port #(rkv_mc_transaction) item_observed_port;

    `uvm_component_utils(rkv_mc_monitor);

    //  Constructor: new
    function new(string name = "rkv_mc_monitor", uvm_component parent);
        super.new(name, parent);
        item_observed_port = new("item_observed_port", this);
    endfunction: new

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(rkv_mc_config)::get(this, "", "cfg", cfg)) begin
            `uvm_fatal("GETCFG", "cannot get config object from config DB")
        end
        if (!uvm_config_db#(int)::get(this, "", "id", id)) begin
            `uvm_fatal("GETCFG", "cannot get id from config DB")
        end
        vif = cfg.vif;

        // Local event pool and events creation
        _ep = new("_ep");
        mc_cmd_active_e = _ep.get("mc_cmd_active_e");
        mc_cmd_write_e = _ep.get("mc_cmd_write_e");
        mc_cmd_read_e = _ep.get("mc_cmd_read_e");
        mc_cmd_refresh_e = _ep.get("mc_cmd_refresh_e");
        mc_pwr_down_e = _ep.get("mc_pwr_down_e");
        mc_pwr_up_e = _ep.get("mc_pwr_up_e");

        if (id == 0) begin // event valid only for SDRAM0
            cfg.mc_cmd_active_e = mc_cmd_active_e;
            cfg.mc_cmd_write_e = mc_cmd_write_e;
            cfg.mc_cmd_read_e = mc_cmd_read_e;
            cfg.mc_cmd_refresh_e = mc_cmd_refresh_e;
            cfg.mc_pwr_down_e = mc_pwr_down_e;
            cfg.mc_pwr_up_e = mc_pwr_up_e;
        end
    endfunction

    task run_phase(uvm_phase phase);
        super.run_phase(phase);
        fork
            mon_command();
        join_none
    endtask

    virtual task mon_command();
        logic [3:0] cmd_comb;
        forever begin
            @(vif.cb_mem.mc_cmd_comb[id]);
            cmd_comb = vif.cb_mem.mc_cmd_comb[id];
            casex(cmd_comb)
                'b1XXX : begin
                    if(cmd_comb[3] == 1'b1) cur_cmd = MC_CMD_NOP;
                end
                'b0111 : cur_cmd = MC_CMD_NOP;
                'b0011 : begin
                    cur_cmd = MC_CMD_ACT;
                    mc_cmd_active_e.trigger();
                end
                'b0101 : begin
                    cur_cmd = MC_CMD_RD;
                    mc_cmd_read_e.trigger();
                end
                'b0100 : begin
                    cur_md = MC_CMD_WR;
                    mc_cmd_write_e.trigger();
                end
                'b0110 : cur_cmd = MC_CMD_BT;
                'b0010 : cur_cmd = MC_CMD_PC;
                'b0001 : begin
                    cur_cmd = MC_CMD_ARFR;
                    mc_cmd_refresh_e.trigger();
                end
                'b0000 : cur_cmd = MC_CMD_LMR;
                default : begin
                    cur_cmd = MC_CMD_UNDEF;
                    `uvm_info("MCMON", $sformatf("command [%b] cannot be parsed with Commands Truth Table", cmd_comb), UVM_DEBUG)
                end
            endcase
            if (cur_cmd != MC_CMD_UNDEF) begin
                `uvm_info("MCMON", $sformatf("SDRAM[%0d] monitored a command %s", id, cur_cmd), UVM_MEDIUM)
                vif.mon_cmd <= cur_cmd;
            end
        end
    endtask

endclass: rkv_mc_monitor

virtual task mon_data();
    rkv_mc_transaction tr;
    int unsigned blen;
    bit is_burst_terminated = 0;
    int unsigned bt_counter = 0;
    logic [31:0] auxd [];
    logic [3:0] auxp [];

    forever begin
        @(vif.cb_mem iff (cur_cmd inside {MC_CMD_WR, MC_CMD_RD}));
        #1ps; // wait for cur_ba/cur_ra/cur_ca updated from listen_events()
        is_burst_terminated = 0;
        bt_counter = 0;
        tr = rkv_mc_transaction::type_id::create("tr", this);
        blen = cfg.get_burst_length();
        tr.data = new[blen];
        tr.parity = new[blen];
        tr.memid = id;
        tr.ba = cur_ba;
        tr.ra = cur_ra;
        tr.ca = cur_ca;
        tr.cmd = cur_cmd;
        tr.xact_type = cur_cmd == MC_CMD_WR ? rkv_mc_transaction::MC_WRITE : rkv_mc_transaction::MC_READ;
        tr.burst_type = cfg.reg_burst_type;
        tr.burst_length = cfg.reg_burst_length;
    end
endtask


`endif RKV_MC_MONITOR_SV