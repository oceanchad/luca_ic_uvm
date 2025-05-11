/**
    SystemVerilog for Verification
*/

module tb_sfv;
    /* Q3 */
    bit[11:0] my_array[4];

    initial begin
        my_array = {12'h012, 12'h345, 12'h678, 12'h8AB};
        for (int i = 0; i < $size(my_array); i++)
            $display("%h", my_array[i]);
        foreach(my_array[i])
            $display("%h",my_array[i]);
    end

    /* Q4 */
    logic my_array1 [5][31];

    initial begin
        my_array1[4][30] = 1'b1; // legal
        my_array1[29][4] = 1'b1; // illegal
        my_array1[4] = 32'b1; // illegal
    end
endmodule