module MulAddTree(
    input [3:0] mul_a, mul_b,
    output [7:0] mul_out
);

    wire [7:0] stored0, stored1, stored2, stored3;
    wire [7:0] add01, add23;
    assign stored3 = mul_b[3] ? {1'b0, mul_a, 3'b0} : 8'b0;
    assign stored2 = mul_b[2] ? {2'b0, mul_a, 2'b0} : 8'b0;
    assign stored1 = mul_b[1] ? {3'b0, mul_a, 1'b0} : 8'b0;
    assign stored0 = mul_b[0] ? {4'b0, mul_a} : 8'b0;

    assign add01 = stored1 + stored0;
    assign add23 = stored3 + stored2;
    assign mul_out = add01 + add23;
endmodule