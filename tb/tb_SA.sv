`timescale 1ns/1ps

module tb_SA;
    localparam int WIDTH = 8;
    localparam int ACC   = 32;
    localparam int N     = 2;

    logic rst_n;
    logic clk;
    logic en;  
    logic signed [WIDTH-1:0] a_in [N][N]; 
    logic signed [WIDTH-1:0] b_in [N][N];
    logic signed [ACC-1:0]   acc_out [N][N];  

    SA #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) dut (
        .clk       (clk),
        .rst_n     (rst_n),
        .en        (en),
        .a_in      (a_in),
        .b_in      (b_in),
        .acc_out   (acc_out)
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

        @(posedge clk); 

        a_in [0] = 3;
        a_in [1] = 4;
        b_in [0] = 5;
        b_in [1] = 6;
        en = 1; 

        repeat (4) begin 
            @(posedge clk);
            $display("t=%0t ns | acc_out_00=0%0d | acc_out_01=0%0d", $time, acc_out[0][0], acc_out[0][1]);
            $display("t=%0t ns | acc_out_10=0%0d | acc_out_11=0%0d", $time, acc_out[1][0], acc_out[1][1]); 
        end
    
        en = 0; 
        @(posedge clk);
            $display("FINAL: t=%0t ns | acc_out_00=0%0d | acc_out_01=0%0d", $time, acc_out[0][0], acc_out[0][1]);
            $display("FINAL: t=%0t ns | acc_out_10=0%0d | acc_out_11=0%0d", $time, acc_out[1][0], acc_out[1][1]); 

        #50;
        $finish;
    end

endmodule
