`timescale 1ns/1ps

module tb_mac;
    parameter WIDTH = 8;  
    parameter ACC = 32;

    //testbecnh signals
    logic rst_n;
    logic clk;
    logic en; 
    logic signed [WIDTH-1:0] a; 
    logic signed [WIDTH-1:0] b;
    logic signed [ACC-1:0]   acc_out;

    //connection to mac - DUT
    mac #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) dut 
    (
        .rst_n(rst_n),
        .clk(clk),
        .en(en), 
        .a(a), 
        .b(b),
        .acc_out(acc_out)
    );
   
    //clokck generator
    initial clk = 0;
    always #5 clk <= ~clk; 

    //Stimulus
    initial begin 
        rst_n = 0;
        en    = 0; 
        a = 0; 
        b = 0; 
        
        repeat (3) @(posedge clk); 
        rst_n = 1; 

        @(posedge clk); 
        a  = 3;
        b  = 4;
        en = 1; 

        repeat (4) begin 
            @(posedge clk);
            $display("t=%0t ns acc_out=0%0d", $time, acc_out); 
        end
    
        en = 0; 
        @(posedge clk);
        $display("After en=0, t=%0t ns acc_out=0%0d (hold last value)", $time, acc_out);

        #20;
        $finish;     
    end 


endmodule 
