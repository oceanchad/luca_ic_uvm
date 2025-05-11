module tb_mat;
    reg [3:0] mult_a;
    reg [3:0] mult_b;
    wire [7:0] mult_out;

    MulAddTree U1(
        .mul_a(mult_a),
        .mul_b(mult_b),
        .mul_out(mult_out)
    );

    initial begin
        mult_a = 0; mult_b = 0;
        repeat(9)
        begin
            #20 mult_a = mult_a + 1;
            mult_b = mult_b + 1;
        end
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb1);
    end

endmodule