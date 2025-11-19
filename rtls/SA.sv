module systolic_array #(
    parameter int N     = 2,   // we'll test small first
    parameter int WIDTH = 8,
    parameter int ACC   = 32
) (
    input  logic                        clk,
    input  logic                        rst_n,
    input  logic                        en,

    // Left-edge inputs: one A value per row
    input  logic signed [WIDTH-1:0]     a_in [N],

    // Top-edge inputs: one B value per column
    input  logic signed [WIDTH-1:0]     b_in [N],

    // Outputs: each PE's accumulator (C matrix elements)
    output logic signed [ACC-1:0]       c_out [N][N]
);
    // your implementation here
endmodule
