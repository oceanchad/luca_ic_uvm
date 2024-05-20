package fmt_pkg;
    import rpt_pkg::*;
    typedef enum { SHORT_FIFO, MED_FIFO, LONG_FIFO, ULTRA_FIFO } fmt_fifo_t;
    typedef enum { LOW_WIDTH, MED_WIDTH, HIGH_WIDTH, ULTRA_WIDTH  } fmt_bandwidth_t;

    class fmt_trans;
        rand fmt_fifo_t fifo;
        rand fmt_bandwidth_t bandwidth;
        bit [9:0] length;
        bit [31:0] data[];
        bit [1:0] ch_id;
        bit rsp;
        constraint cstr{
            soft fifo == MED_FIFO;
            soft bandwidth == MED_WIDTH;
        };

        function fmt_trans clone();
            fmt_trans c = new();
            c.fifo = this.fifo;
            c.bandwidth = this.bandwidth;
            c.length = this.length;
            c.data = this.data;
            c.ch_id = this.ch_id;
            c.rsp = this.rsp;
            return c
        endfunction

        function string sprint();
            string s;
            s = {s, $sformatf("=============================\n")};
            s = {s, $sformatf("fmt_trans object content is as below: \n")};
            s = {s, $sformatf("fifo = %2x: \n", this.fifo)};
            s = {s, $sformatf("bandwidth = %2b: \n", this.bandwidth)};
            s = {s, $sformatf("length = %8x: \n", this.length)};
            foreach(data[i]) s = {s, $sformatf("data[%0d] = %8x\n", i, this.data[i])};
            s = {s, $sformatf("ch_id = %0d: \n", this.ch_id)};
            s = {s, $sformatf("rsp = %0d: \n", this.rsp)};
            s = {s, $sformatf("=============================\n")};
            return s;
        endfunction

        function bit compare(fmt_trans t);
            string s;
            compare = 1;
            s = "\n===========================\n";
            
        endfunction

    endclass
endpackage