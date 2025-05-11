module UpDownCounter(
    input clock,
    input areset,
    output reg [7:0] data
);
    reg direction;
    always@(posedge clock or negedge areset) begin
        if (!areset) begin
            data <= 8'd0;
            direction <= 1;
        end else if (direction) begin
            if (data == 8'd32)
                direction <= 0;
            else
                data <= data + 1;
        end else begin
            if (data == 8'd0)
                direction <= 1;
            else
                data <= data - 1;
        end
    end
endmodule