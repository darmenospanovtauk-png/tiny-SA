//MAC module signed 8x8 | 32 bit Accumulator
`timescale 1ns/1ps

module SA #(
    parameter WIDTH = 8,  
    parameter ACC   = 32,
    parameter N     = 2
) (
    input  logic rst_n,
    input  logic clk,
    input  logic en,  
    input  logic signed [WIDTH-1:0] a_in [N], 
    input  logic signed [WIDTH-1:0] b_in [N],
    output logic signed [ACC-1:0]   acc_out [N][N]  
);
                                     /* verilator lint_off UNUSEDSIGNAL */
    logic signed [WIDTH-1:0] a_pipe [N][N];
    logic signed [WIDTH-1:0] b_pipe [N][N];  

    genvar i, j;
    generate
        for (i=0; i<N; i++) begin : ROW
            for (j=0; j<N; j++) begin : COL

        logic signed [WIDTH-1:0] pe_a;
        logic signed [WIDTH-1:0] pe_b;  

        //A 
        if (j==0) begin : a_0
            assign pe_a = a_in[i];
        end else begin  : a_n
            assign pe_a = a_pipe[i][j-1]; 
            end 

        //B
        if (i==0) begin : b_0
            assign pe_b = b_in[j];
        end else begin   : b_n
            assign pe_b = b_pipe[i-1][j]; 
            end 

    pe #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) pe_ij 
    (
        .rst_n  (rst_n),
        .clk    (clk),
        .en     (en), 
        .a_in   (pe_a), 
        .b_in   (pe_b),
        .a_out  (a_pipe [i][j]), 
        .b_out  (b_pipe [i][j]),
        .acc_out(acc_out [i][j])
    );  

            end 
        end 
    endgenerate
endmodule
