`timescale 1ns/1ps

module tb_SA;
    localparam int WIDTH = 8;
    localparam int ACC   = 32;
    localparam int N     = 2;

    logic rst_n;
    logic clk;
    logic en;  
    logic signed [WIDTH-1:0] a_in [N]; 
    logic signed [WIDTH-1:0] b_in [N];
    logic signed [ACC-1:0]   acc_out [N][N];  

    // Matrices
    logic signed [WIDTH-1:0] A_in   [N][N]; 
    logic signed [WIDTH-1:0] B_in   [N][N];
    logic signed [ACC-1:0]   ACC_ref[N][N];  

    SA #(
        .WIDTH(WIDTH),
        .ACC  (ACC),
        .N    (N)
    ) dut (
        .clk    (clk),
        .rst_n  (rst_n),
        .en     (en),
        .a_in   (a_in),
        .b_in   (b_in),
        .acc_out(acc_out)
    );

    // clock
    initial clk = 0;
    always #5 clk <= ~clk;

    integer i, j, k, t;
    integer k_idx;
    integer T_TOTAL;

    initial begin
        // init + reset
        rst_n = 0;
        en    = 0;

        for (i = 0; i < N; i++) begin 
            a_in[i] = '0;
            b_in[i] = '0;
        end 

        // A = [1 2; 3 4]
        A_in[0][0] = 1; A_in[0][1] = 2; 
        A_in[1][0] = 3; A_in[1][1] = 4; 

        // B = [5 6; 7 8]
        B_in[0][0] = 5; B_in[0][1] = 6; 
        B_in[1][0] = 7; B_in[1][1] = 8;

        // ACC_ref = A * B
        for (i = 0; i < N; i++) begin
            for (j = 0; j < N; j++) begin
                ACC_ref[i][j] = '0;
                for (k = 0; k < N; k++) begin
                    ACC_ref[i][j] += A_in[i][k] * B_in[k][j];             
                end 
            end 
        end

        // Reset phase
        repeat (3) @(posedge clk);
        rst_n = 1;

        // systolic schedule with skew
        // enough cycles: N (k) + max(i+j) + extra drain
        T_TOTAL = 6; // good for N=2

        for (t = 0; t < T_TOTAL; t++) begin 
            // drive A_in with row skew: k = t - i
            for (i = 0; i < N; i++) begin
                k_idx = t - i;
                if (k_idx >= 0 && k_idx < N)
                    a_in[i] = A_in[i][k_idx];
                else
                    a_in[i] = '0;
            end 

            // drive B_in with column skew: k = t - j
            for (j = 0; j < N; j++) begin
                k_idx = t - j;
                if (k_idx >= 0 && k_idx < N)
                    b_in[j] = B_in[k_idx][j];
                else
                    b_in[j] = '0;
            end 

            en = 1;
            @(posedge clk);
        end 

        // stop feeding, drain
        en = 0; 
        for (i = 0; i < N; i++) begin 
            a_in[i] = '0;
            b_in[i] = '0;
        end   

        repeat (4) @(posedge clk);

        $display("Final acc_out vs ACC_ref");
        for (i = 0; i < N; i++) begin
            for (j = 0; j < N; j++) begin
                $display("C[%0d][%0d]: acc_out=%0d vs ACC_ref=%0d",
                         i, j, acc_out[i][j], ACC_ref[i][j]);
            end 
        end        

        #20;
        $finish; 
    end

endmodule
