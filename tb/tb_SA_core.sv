`timescale 1ns/1ps

module tb_SA_core;

  localparam int N = 3;
  localparam int WIDTH = 8;
  localparam int ACC = 32;

  logic clk, rst_n, start, done;

  logic signed [WIDTH-1:0] A_mem[N][N], B_mem[N][N];
  logic signed [ACC-1:0]   C_out[N][N];

  logic signed [WIDTH-1:0] A_in [N][N];
  logic signed [WIDTH-1:0] B_in [N][N];
  logic signed [ACC-1:0]   ACC_ref[N][N];

  SA_core #(
    .N(N),
    .WIDTH(WIDTH),
    .ACC(ACC)
  ) dut (
    .clk   (clk),
    .rst_n (rst_n),
    .start (start),
    .done  (done),
    .A_mem (A_mem),
    .B_mem (B_mem),
    .C_out (C_out)
  );

  initial clk = 0;
  always #5 clk <= ~clk;

  integer i, j, k;

  initial begin
    rst_n = 0;
    start = 0;

    // Init memories
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++) begin
        A_mem[i][j] = '0;
        B_mem[i][j] = '0;
      end

    // A matrix
    A_in[0][0] = 1; A_in[0][1] = 2; A_in[0][2] = 2;
    A_in[1][0] = 3; A_in[1][1] = 4; A_in[1][2] = 4;
    A_in[2][0] = 3; A_in[2][1] = 4; A_in[2][2] = 4;

    // B matrix
    B_in[0][0] = 5; B_in[0][1] = 6; B_in[0][2] = 6;
    B_in[1][0] = 7; B_in[1][1] = 8; B_in[1][2] = 8;
    B_in[2][0] = 7; B_in[2][1] = 8; B_in[2][2] = 8;

    // Reference ACC = A * B
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++) begin
        ACC_ref[i][j] = '0;
        for (k = 0; k < N; k++)
          ACC_ref[i][j] += A_in[i][k] * B_in[k][j];
      end

    // Reset
    repeat (3) @(posedge clk);
    rst_n = 1;
    // Load matrices
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++) begin
        A_mem[i][j] = A_in[i][j];
        B_mem[i][j] = B_in[i][j];
      end


    @(posedge clk);
    start = 1;
    @(posedge clk);
    start = 0;


    // Wait for done
    wait(done);

    // Clear memories
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++) begin
        A_mem[i][j] = '0;
        B_mem[i][j] = '0;
      end

    // Display results
    $display("Final acc_out vs ACC_ref:");
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++)
        $display("C[%0d][%0d]: acc_out=%0d  ACC_ref=%0d",
                 i, j, C_out[i][j], ACC_ref[i][j]);

    #20;
    $finish;
  end

endmodule
