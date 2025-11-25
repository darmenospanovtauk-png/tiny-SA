`timescale 1ns/1ps

module tb_SA_core;

  localparam int N = 2;
  localparam int WIDTH = 8;
  localparam int ACC = 32;
  localparam int NUM_TESTS = 10;

  logic clk, rst_n, start, done;

  logic signed [WIDTH-1:0] A_mem[N][N], B_mem[N][N];
  logic signed [ACC-1:0]   C_out[N][N];

  logic signed [WIDTH-1:0] A_in [N][N];
  logic signed [WIDTH-1:0] B_in [N][N];
  logic signed [ACC-1:0]   ACC_ref[N][N];
  
logic signed [WIDTH-1:0] tmp_A_in;
logic signed [WIDTH-1:0] tmp_B_in;
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

  integer i, j, k, test;
  bit mismatch; 

    // Reference ACC = A * B
    task automatic compute_ref_acc(); 
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++) begin
        ACC_ref[i][j] = '0;
        for (k = 0; k < N; k++)
          ACC_ref[i][j] += A_in[i][k] * B_in[k][j];
      end
    endtask


//start of the initial begin 
  initial begin
    rst_n = 0;
    start = 0;

    // Init memories
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++) begin
        A_mem[i][j] = '0;
        B_mem[i][j] = '0;
      end 

    // Reset
    repeat (3) @(posedge clk);
    rst_n = 1;


    for (test = 0; test <NUM_TESTS; test++) begin
    // Load matrix - random 
    @(posedge clk);
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++) begin
        tmp_A_in = WIDTH'($urandom_range(-4, 4));
        tmp_B_in = WIDTH'($urandom_range(-4, 4));
        A_in[i][j] = tmp_A_in[WIDTH-1:0];
        B_in[i][j] = tmp_B_in[WIDTH-1:0];
      end

    //load data to ref_model 
    compute_ref_acc(); 

    //load data to 
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
    
    repeat (2*N) @(posedge clk);
    mismatch = 0; 
    // Display results

    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++) begin 
        if (C_out[i][j] !== ACC_ref[i][j]) begin
        mismatch = 1; 
      end 
      end 

      if (mismatch) begin 
        $display("Test failed"); 
        //$finish;
      end else begin
        $display("Test passed");
      end
    

  end

     $display("All tests are passed"); 
    #20;
    $finish;
  end
endmodule
