`include "param_def.v"

package reg_pkg;
    class reg_trans;
        rand bit[7:0] addr;
        rand bit[1:0] cmd;
        rand bit[31:0] data;
        bit rsp;

        constraint cstr {
            soft cmd inside {`WRITE, `READ, `IDLE};
            soft addr inside {`SLVO_RW_ADDR, `SLV1_RW_ADDR, `SLV2_RW_ADDR,
            `SLV0_R_ADDR, `SLV1_R_ADDR, `SLV2_R_ADDR};
            addr[7:4] == 0 && cmd == `WRITE -> soft data[31:6] == 0;
            soft addr[7:5] == 0;
            addr[4] == 1 -> soft cmd == `READ;
        }
        function reg_trans clone();
            reg_trans c = new();
            c.addr = this.addr;
            c.cmd = this.cmd;
            c.data = this.data;
            c.rsp = this.rsp;
            return c;
        endfunction

        function string sprint();
            string s;
            s = {s, $sformatf("=============================\n")};
            s = {s, $sformatf("reg_trans object content is as below: \n")};
            s = {s, $sformatf("addr = %2x: \n", this.addr)};
            s = {s, $sformatf("cmd = %2b: \n", this.cmd)};
            s = {s, $sformatf("data = %8x: \n", this.data)};
            s = {s, $sformatf("rsp = %0d: \n", this.rsp)};
            s = {s, $sformatf("=============================\n")};
            return s;
        endfunction

    endclass

    class reg_driver;
        local string name;
        local virtual reg_intf intf;
        mailbox #(reg_trans) req_mb;
        mailbox #(reg_trans) rsp_mb;

        function new(string name = "reg_driver");
            this.name = name;
        endfunction

        function void set_interface(virtual reg_intf intf);
            if (!intf)
                $error("interface handle is NULL, please check if target interface has benn intantiated");
            else
                this.intf = intf;
        endfunction

        task run();
            fork
                this.do_drive();
                this.do_reset();
            join
        endtask

        task do_reset();
            forever begin
                @(negedge intf.rstn);
                
            end
        endtask

        task do_drive();
            chnl_trans req, rsp;
            @(posedge intf.rstn);
            forever begin
                this.req_mb.get(req);
                this.chnl_write(req);
                rsp = req.clone();
                rsp.rsp = 1;
                this.rsp_mb.put(rsp);
            end
        endtask
    endclass

    class reg_generator;
    endclass

    class reg_monitor;
    endclass

    class reg_agent;
    endclass

endpackage