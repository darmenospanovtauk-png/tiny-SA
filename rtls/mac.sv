//MAC module signed 8x8 | 32 bit Accumulator
`timescale 1ns/1ps

module mac #(
    parameter WIDTH = 8,  
    parameter ACC = 32
) (
    input  logic rst_n,
    input  logic clk,
    input  logic en,  
    input  logic signed [WIDTH-1:0] a, 
    input  logic signed [WIDTH-1:0] b,
    output logic signed [ACC-1:0]   acc_out  
);

    always_ff @(posedge clk) begin : mac_logic
        if (!rst_n) begin
            acc_out <= '0; 
    end else if (en) begin 
            acc_out <= acc_out + a * b; 
    end 
    end

endmodule
