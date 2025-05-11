module Rand(
);

    class trans;
        rand bit [1:0] cmd = WR;
        rand logic [7:0] cmd_addr;
        rand bit [31:0] cmd_data_w;
        bit [31:0] cmd_data_r;
        constraint c1 {cmd inside {IDLE, RD, WR};};
        constraint c2 {cmd_addr inside {'h0, 'h4, 'h8, 'h10, 'h14, 'h18};};
        constraint c3 {cmd_data_w[31:6] == 0;};
        function void print();
            $display("cmd = 'h%0x", cmd);
            $display("cmd_addr = 'h%0x", cmd_addr);
            $display("cmd_data_w = 'h%0x", cmd_data_w);
            $display("cmd_data_r = 'h%0x", cmd_data_r);
        endfunction
    endclass

endmodule