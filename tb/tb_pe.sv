`timescale 1ns/1ps

module tb_pe;
    localparam int WIDTH = 8;
    localparam int ACC   = 32;

    logic clk;
    logic rst_n;
    logic en;
    logic signed [WIDTH-1:0] a_in, b_in;
    logic signed [WIDTH-1:0] a_out, b_out;
    logic signed [ACC-1:0]   acc_out;

    pe #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) dut (
        .clk    (clk),
        .rst_n  (rst_n),
        .en     (en),
        .a_in   (a_in),
        .b_in   (b_in),
        .a_out  (a_out),
        .b_out  (b_out),
        .acc_out(acc_out)
    );

    // clock
    initial clk = 0;
    always #5 clk <= ~clk;

    initial begin
        // 1) init + reset
        rst_n = 0;
        en    = 0;
        a_in  = 0;
        b_in  = 0;

        repeat (3) @(posedge clk);
        rst_n = 1;

        // 2) your stimulus here:
        //    - set a_in = 3, b_in = 4, en = 1
        //    - run a few cycles, print acc_out, a_out, b_out every cycle
        //    - then set en = 0 and show that acc_out holds

        // Example display pattern:
        // $display("t=%0t ns a_in=%0d b_in=%0d a_out=%0d b_out=%0d acc_out=%0d",
        //          $time, a_in, b_in, a_out, b_out, acc_out);

        // 3) finish

        @(posedge clk); 
        a_in  = 3;
        b_in  = 4;
        en = 1; 

        repeat (4) begin 
            @(posedge clk);
            $display("t=%0t ns acc_out=0%0d", $time, acc_out); 
            $display("t=%0t ns | a_out=0%0d | b_out=0%0d", $time, a_out, b_out); 
        end
    
        en = 0; 
        @(posedge clk);
        $display("After en=0, t=%0t ns acc_out=0%0d (hold last value)", $time, acc_out);
        $display("After en=0, t=%0t ns a_out=0%0d | b_out=0%0d", $time, a_out, b_out);

        #50;
        $finish;
    end

endmodule
