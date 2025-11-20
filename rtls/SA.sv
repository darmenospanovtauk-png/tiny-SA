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

    pe #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) pe_00 
    (
        .rst_n  (rst_n),
        .clk    (clk),
        .en     (en), 
        .a_in   (a_in [0]), 
        .b_in   (b_in [0]),
        .a_out  (a_pipe [0][0]), 
        .b_out  (b_pipe [0][0]),
        .acc_out(acc_out [0][0])
    );  

    pe #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) pe_01 
    (
        .rst_n  (rst_n),
        .clk    (clk),
        .en     (en), 
        .a_in   (a_pipe [0][0]), 
        .b_in   (b_in [1]),
        .a_out  (a_pipe [0][1]), 
        .b_out  (b_pipe [0][1]),
        .acc_out(acc_out [0][1])
    );  

    pe #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) pe_10 
    (
        .rst_n  (rst_n),
        .clk    (clk),
        .en     (en), 
        .a_in   (a_in [1]), 
        .b_in   (b_pipe [0][0]),
        .a_out  (a_pipe [1][0]), 
        .b_out  (b_pipe [1][0]),
        .acc_out(acc_out [1][0])
    );  

    pe #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) pe_11 
    (
        .rst_n  (rst_n),
        .clk    (clk),
        .en     (en), 
        .a_in   (a_pipe [1][0]), 
        .b_in   (a_pipe [0][1]),
        .a_out  (a_pipe [1][1]), 
        .b_out  (b_pipe [1][1]),
        .acc_out(acc_out [1][1])
    );   

endmodule
