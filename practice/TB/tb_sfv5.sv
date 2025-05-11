class PrintUtilities;
    function void print_4(input string name, input [3:0] val_4bits);
        $display("%t: %s = %h", $time, name, val_4bits);
    endfunction

    function void print_8(input string name, input [7:0] val_8bits);
        $display("%t: %s = %h", $time, name, val_8bits);
    endfunction
endclass

class MemTrans;
    static logic [3:0] last_address;
    rand bit [7:0] data_in;
    rand bit [3:0] address;
    PrintUtilities prints;

    function new(logic [7:0] data_init = 0, logic [3:0] address_init = 0);
        data_in = data_init;
        address = address_init;
        MemTrans::last_address = address;
        prints = new();
    endfunction

    function void print();
        $display("Data_in = 0x%0h, address = 0x%0h", data_in, address);
    endfunction

    static function void print_last_address;
        $display("last_address is %h", last_address);
    endfunction

    function void print_all;
        prints.print_8("data_in", data_in);
        prints.print_4("address", address);
    endfunction

endclass

program automatic test;
    import 
endprogram

module tb_sfv;

    MemTrans mt, mt1;
    initial begin
        mt = new(.address_init(2));
        $display("last_address is %h", MemTrans::last_address);
        MemTrans::print_last_address();
        mt.print();
        mt.print_all();
        mt1 = new(.data_init(3), .address_init(4));
        mt1.print();
        mt1.print_all();
        mt.address = 4'hF;
        mt.print();
        mt1 = null;
    end
endmodule