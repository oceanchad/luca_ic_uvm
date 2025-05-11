module tb_udc;
    reg clock, areset;
    wire [7:0] data;

    UpDownCounter dut(clock, areset, data);

    initial begin
        clock = 0;
        forever #5 clock = ~clock;
    end

    initial begin
        areset = 0;
        #10 areset = 1;

        #600 $finish();
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb1);
    end

    initial begin
        $monitor("At time %t, data = %d", $time, data);
    end
endmodule