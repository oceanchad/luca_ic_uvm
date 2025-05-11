class Exercise1;
    rand bit[7:0] data;
    rand bit[3:0] address;

    constraint c {
        address inside {[3:4]};
    }

    function void display();
        $display ("Address : 0x%0h Data : 0x%0h", address, data);
    endfunction
endclass

class Exercise2;
    rand bit[7:0] data;
    rand bit[3:0] address;

    constraint c {
        data == 5;
    }
    constraint addr_dist {
        address dist{0:=10, [1:14]:/80, 15:=10};
    }
    function void display();
        $display ("Address : 0x%0h Data : 0x%0h", address, data);
    endfunction
endclass


module tb_sfv;
    Exercise1 e1;
    Exercise1 e2;
    initial begin
        // $display("randomize begin");
        e1 = new();
        e2 = new();
        void'(e1.randomize());
        void'(e2.randomize());
        e1.display();
        e2.display();
    end
endmodule