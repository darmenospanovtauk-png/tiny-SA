//PE array 
//simple MAC
`timescale 1ns/1ps
module pe #(
    parameter int WIDTH = 8,
    parameter int ACC   = 32
) (
    input  logic                     clk,
    input  logic                     rst_n,
    input  logic                     en,

    // Inputs from left / top
    input  logic signed [WIDTH-1:0]  a_in,
    input  logic signed [WIDTH-1:0]  b_in,

    // Outputs to right / bottom
    output logic signed [WIDTH-1:0]  a_out,
    output logic signed [WIDTH-1:0]  b_out,

    // Accumulated output (this PE's C[i,j])
    output logic signed [ACC-1:0]    acc_out
);
    
    //Connection | in --> out
    always_ff @(posedge clk) begin : frw_a_b
        if (!rst_n) begin
            a_out <= '0;
            b_out <= '0;
    end else begin 
            a_out <= a_in;
            b_out <= b_in;      
    end 
    end

    //connection to MAC
    mac #(
        .WIDTH(WIDTH),
        .ACC(ACC)
    ) mac_0 
    (
        .rst_n(rst_n),
        .clk(clk),
        .en(en), 
        .a(a_in), 
        .b(b_in),
        .acc_out(acc_out)
    );

endmodule
