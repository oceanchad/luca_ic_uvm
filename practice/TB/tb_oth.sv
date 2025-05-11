module tb_oth;
    struct packed {byte red, green, blue;} c[];

    enum {R, G, B} color;
    typedef enum {INIT, DECODE=2,IDLE} fsmtype_e;
    fsmtype_e test_e;
    test_e = test_e.first;

    initial begin
        // test_e = DECODE;
        $display("Red %d, Green %d, Blue %d", test_e, G, B);
        c = new[100];
        // foreach(c[i])
        //     c[i] = $random % 100;

        // First sort by red component
        // c.sort with (item.red);
        // $display("\nAfter sorting by red:");
        // foreach(c[i])
        //     $display("Index %0d: {red: %0d, green: %0d, blue: %0d}",
        //             i, c[i].red, c[i].green, c[i].blue);

        // // Then sort by green and blue components
        // c.sort(x) with ({x.green, x.blue});
        // $display("\nAfter sorting by green and blue:");
        // foreach(c[i])
        //     $display("Index %0d: {red: %0d, green: %0d, blue: %0d}",
        //             i, c[i].red, c[i].green, c[i].blue);
    end
    initial begin
        // $monitor("[%0t] my_byte = 'd%0d  (0x%0h)", $time, my_byte, my_byte);
    end
endmodule