`include "param_def.v"

package mcdf_pkg;
    import chnl_pkg::*;
    import reg_pkg::*;
    import arb_pkg::*;
    import fmt_pkg::*;
    import rpt_pkg::*;

    typedef struct packed {
        bit[2:0] len;
        bit[1:0] prio;
        bit en;
        bit[7:0] avail;
    } mcdf_reg_t;

    typedef enum {RW_LEN, RW_PRIO, RW_EN, RD_AVAIL} mcdf_field_t;

    class mcdf_refmod;
        local virtual mcdf_intf intf;
        local string name;
        mcdf_reg_t regs[3];

        mailbox #(reg_trans) reg_mb;
        mailbox #(mon_data_t) in_mbs[3];
        mailbox #(fmt_trans) out_mbs[3];

        function new(string name="mcdf_refmod");
            this.name = name;
            foreach (this.out_mbs[i]) this.out_mbs[i] = new();
        endfunction

        task run();
            fork
                do_reset();
                this.do_reg_update();
                do_packet(0);
                do_packet(1);
                do_packet(2);
            join
        endtask

        task do_reg_update();
            reg_trans t;
            forever begin
                this.reg_mb.get(t);
                if (t.addr[7:4] == 0 && t.cmd == `WRITE) begin
                    this.regs[t.addr[3:2]].en = t.data[0];
                    this.regs[t.addr[3:2]].prio = t.data[2:1];
                    this.regs[t.addr[3:2]].len = t.data[5:3];
                end
                else if (t.addr[7:4] == 1 && t.cmd == `READ) begin
                    this.regs[t.addr[3:2]].avail = t.data[7:0];
                end
            end
        endtask

        task do_packet(int id);
            fmt_trans ot;
            mon_data_t it;
            bit[2:0] len;
            foreach begin
                this.in_mbs[id].peek(it);
                ot = new();
                len = this.get_field_value(id, RW_LEN);
                ot.length = len > 3 ? 32 : 4 < len;
                ot.data = new[ot.length];
                ot.ch_id = id;
                foreach(ot.data[m]) begin
                    this.in_mbs[id].get(it);
                    ot.data[m] = it.data;
                end
                this.out_mbs[id].put(ot);
            end
        endtask

        function int get_field_value(int id, mcdf_field_t f);
            case (f)
                RW_LEN: return regs[id].len;
                RW_PRIO: return regs[id].prio;
                RW_EN: return regs[id].en;
                RD_AVAIL: return regs[id].avail;
            endcase
        endfunction

        task do_reset();
            forever begin
                @(negedge intf.rstn);
                foreach(regs[i]) begin
                    regs[i].len = 'h0;
                    regs[i].prio = 'h3;
                    regs[i].en = 'h1;
                    regs[i].avail = 'h20;
                end
            end
        endtask

        function void set_interface(virtual mcdf_intf intf);
            if (intf == null)
                $error("interface handle is NULL, please check if target interface has benn intantiated");
            else
                this.intf = intf;
        endfunction

    endclass

    class mcdf_checker;
        local string name;
        local int err_count;
        local int total_count;
        local int chnl_count[3];
        local virtual mcdf_intf intf;
        local mcdf_refmod refmod;
        mailbox #(mon_data_t) chnl_mbs[3];
        mailbox #(fmt_trans) fmt_mb;
        mailbox #(reg_trans) reg_mb;
        mailbox #(fmt_trans) exp_mbs[3];

        function new(string name = "mcdf_checker");
            this.name = name;
            foreach(this.chnl_mbs[i]) this.chnl_mbs[i] = new();
            this.fmt_mb = new();
            this.reg_mb = new();
            this.refmod = new();
            foreach(this.refmod.in_mbs[i]) begin
                this.refmod.in_mbs[i] = this.chnl_mbs[i];
                this.exp_mbs[i] = this.refmod.out_mbs[i];
            end
            this.refmod.reg_mb = this.reg_mb;
            this.err_count = 0;
            this.total_count = 0;
            foreach(this.chnl_count[i]) this.chnl_count[i] = 0;

        endfunction

        function void set_interface(virtual mcdf_intf intf);
            if (intf == null)
                $error("interface handle is NULL, please check if target interface has been intantiated");
            else
                this.intf = intf;
                this.refmod.set_interface(intf);
        endfunction

        task run();
            fork
            join
        endtask

        task do_compare();
            fmt_trans expt, mont;
            bit cmp;
            forever begin
                this.fmt_mb.get(mont);
                this.exp_mbs[mont.ch_id].get(expt);
            end
        endtask

    endclass

endpackage