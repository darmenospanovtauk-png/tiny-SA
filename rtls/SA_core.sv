`timescale 1ns/1ps

module SA_core #(
    parameter WIDTH = 8,  
    parameter ACC   = 32,
    parameter N     = 3
) (
    input  logic rst_n,
    input  logic clk,
    input  logic start,  
    input  logic signed [WIDTH-1:0] A_mem [N][N], 
    input  logic signed [WIDTH-1:0] B_mem [N][N],
    output logic signed [ACC-1:0]   C_out [N][N], 
    output logic                    done  
);

    logic signed [WIDTH-1:0] a_in [N]; //needs init
    logic signed [WIDTH-1:0] b_in [N]; //needs init
    logic                    en;       //needs init

    localparam int T_FEED = 2*N-1;
    localparam int T_DRAIN = N;

    int i, j;

    SA #(
        .WIDTH(WIDTH),
        .ACC(ACC), 
        .N(N)
    ) SA_pure 
    (
        .rst_n  (rst_n),
        .clk    (clk),
        .en     (en), 
        .a_in   (a_in), 
        .b_in   (b_in),
        .acc_out(C_out)
    );  

    typedef enum logic [1:0] {
        IDLE,
        FEED,
        DRAIN
    } state_t;
    state_t state, next_state; //needs init

    always_ff @(posedge clk ) begin 
        if (!rst_n) begin
            state <= IDLE; 
        end else begin 
            state <= next_state; 
        end 
    end 

    int t, drain_t; 

    //time total counter
    always_ff @(posedge clk) begin 
        if (!rst_n) begin
            t <= '0;
         end else begin
        if ((state == IDLE) && (next_state == FEED)) begin
            t <= '0; 
        end else if (state == FEED) begin 
            t <= t + 1'b1; 
        end 
        end
    end 
    
    //DRAIN counter
    always_ff @(posedge clk) begin // <= 
        if (!rst_n) begin
            drain_t <= '0;
         end else begin
        if ((state == FEED) && (next_state == DRAIN)) begin
            drain_t <= '0; 
        end else if (state == DRAIN) begin 
            drain_t <= drain_t + 1'b1; 
        end 
        end
    end 

    always_comb begin // = 
        //initialisation 
        next_state = state; 
        en   = 1'b0;
        done = 1'b0;

        for (i=0; i<N; i++) begin
            a_in[i] = '0;
            b_in[i] = '0;
        end 

        case(state)
    IDLE: begin
        if(start) begin 
            next_state = FEED; 
        end 
    end 

    FEED: begin//for and if combination
        en   = 1'b1;

        for (i=0; i<N; i++) begin //but advanced
             int k_idx = t - i; 
            if (k_idx >= 0 && k_idx < N) begin 
                a_in[i] = A_mem[i][k_idx];
            end else begin 
                a_in[i] = '0;
            end 
        end
    

        for (j=0; j<N; j++) begin //but advanced
             int k_idx = t - j; 
            if (k_idx >= 0 && k_idx < N) begin 
                b_in[j] = B_mem[k_idx][j];
            end else begin 
                b_in[j] = '0;
            end 
        end

        if (t == T_FEED-1) begin 
            next_state = DRAIN; 
        end 
    end
    DRAIN: begin 
        en   = 1'b1;
        if (drain_t == T_DRAIN-1) begin 
            next_state = IDLE; 
            done = 1'b1;
        end 
    end

    default: begin
        next_state = IDLE;
        end

    endcase
    end
endmodule
