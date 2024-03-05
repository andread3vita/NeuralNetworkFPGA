// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ap_ce,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input   ap_ce;
input  [15:0] data_0_V_read;
input  [15:0] data_1_V_read;
input  [15:0] data_2_V_read;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;
output  [15:0] ap_return_2;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg    ap_enable_reg_pp0_iter8;
reg    ap_enable_reg_pp0_iter9;
reg    ap_enable_reg_pp0_iter10;
reg    ap_idle_pp0;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_state6_pp0_stage0_iter5;
wire    ap_block_state7_pp0_stage0_iter6;
wire    ap_block_state8_pp0_stage0_iter7;
wire    ap_block_state9_pp0_stage0_iter8;
wire    ap_block_state10_pp0_stage0_iter9;
wire    ap_block_state11_pp0_stage0_iter10;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] exp_table1_address0;
reg    exp_table1_ce0;
wire   [17:0] exp_table1_q0;
wire   [9:0] exp_table1_address1;
reg    exp_table1_ce1;
wire   [17:0] exp_table1_q1;
wire   [9:0] exp_table1_address2;
reg    exp_table1_ce2;
wire   [17:0] exp_table1_q2;
wire   [9:0] invert_table2_address0;
reg    invert_table2_ce0;
wire   [17:0] invert_table2_q0;
reg  signed [15:0] data_2_V_read_1_reg_528;
reg  signed [15:0] data_2_V_read_1_reg_528_pp0_iter1_reg;
reg  signed [15:0] data_1_V_read_1_reg_535;
reg  signed [15:0] data_1_V_read_1_reg_535_pp0_iter1_reg;
reg  signed [15:0] data_0_V_read_1_reg_541;
reg  signed [15:0] data_0_V_read_1_reg_541_pp0_iter1_reg;
wire   [0:0] icmp_ln1496_fu_122_p2;
reg   [0:0] icmp_ln1496_reg_547;
wire   [15:0] x_max_V_fu_138_p3;
reg   [15:0] x_max_V_reg_552;
wire   [9:0] y_V_fu_339_p3;
reg   [9:0] y_V_reg_557;
wire   [9:0] y_V_1_fu_373_p3;
reg   [9:0] y_V_1_reg_562;
wire   [9:0] y_V_2_fu_407_p3;
reg   [9:0] y_V_2_reg_567;
reg  signed [17:0] exp_res_0_V_reg_587;
reg  signed [17:0] exp_res_0_V_reg_587_pp0_iter5_reg;
reg  signed [17:0] exp_res_0_V_reg_587_pp0_iter6_reg;
reg  signed [17:0] exp_res_0_V_reg_587_pp0_iter7_reg;
reg  signed [17:0] exp_res_1_V_reg_593;
reg  signed [17:0] exp_res_1_V_reg_593_pp0_iter5_reg;
reg  signed [17:0] exp_res_1_V_reg_593_pp0_iter6_reg;
reg  signed [17:0] exp_res_1_V_reg_593_pp0_iter7_reg;
reg  signed [17:0] exp_res_2_V_reg_599;
reg  signed [17:0] exp_res_2_V_reg_599_pp0_iter5_reg;
reg  signed [17:0] exp_res_2_V_reg_599_pp0_iter6_reg;
reg  signed [17:0] exp_res_2_V_reg_599_pp0_iter7_reg;
reg   [9:0] y_V_3_reg_605;
reg   [17:0] inv_exp_sum_V_reg_615;
wire  signed [25:0] sext_ln1116_fu_450_p1;
reg    ap_block_pp0_stage0_subdone;
wire   [63:0] zext_ln255_fu_415_p1;
wire   [63:0] zext_ln255_1_fu_419_p1;
wire   [63:0] zext_ln255_2_fu_423_p1;
wire   [63:0] zext_ln265_fu_446_p1;
wire  signed [15:0] icmp_ln1496_fu_122_p0;
wire  signed [15:0] icmp_ln1496_fu_122_p1;
wire   [15:0] select_ln65_fu_128_p3;
wire   [0:0] icmp_ln1496_1_fu_133_p2;
wire  signed [16:0] sext_ln703_fu_145_p1;
wire  signed [16:0] sext_ln703_1_fu_148_p1;
wire   [16:0] sub_ln1193_fu_151_p2;
wire   [0:0] tmp_2_fu_165_p3;
wire   [0:0] tmp_fu_157_p3;
wire   [0:0] xor_ln786_fu_173_p2;
wire   [0:0] xor_ln340_fu_191_p2;
wire  signed [16:0] sext_ln703_2_fu_203_p1;
wire   [16:0] sub_ln1193_1_fu_206_p2;
wire   [0:0] tmp_6_fu_220_p3;
wire   [0:0] tmp_4_fu_212_p3;
wire   [0:0] xor_ln786_1_fu_228_p2;
wire   [0:0] xor_ln340_1_fu_246_p2;
wire  signed [16:0] sext_ln703_3_fu_258_p1;
wire   [16:0] sub_ln1193_2_fu_261_p2;
wire   [0:0] tmp_8_fu_275_p3;
wire   [0:0] tmp_7_fu_267_p3;
wire   [0:0] xor_ln786_2_fu_283_p2;
wire   [0:0] xor_ln340_2_fu_301_p2;
wire   [0:0] xor_ln340_3_fu_185_p2;
wire   [9:0] tmp_1_fu_313_p4;
wire   [0:0] and_ln786_fu_179_p2;
wire   [0:0] or_ln340_fu_197_p2;
wire   [9:0] select_ln340_fu_323_p3;
wire   [9:0] select_ln388_fu_331_p3;
wire   [0:0] xor_ln340_4_fu_240_p2;
wire   [9:0] tmp_3_fu_347_p4;
wire   [0:0] and_ln786_1_fu_234_p2;
wire   [0:0] or_ln340_1_fu_252_p2;
wire   [9:0] select_ln340_2_fu_357_p3;
wire   [9:0] select_ln388_1_fu_365_p3;
wire   [0:0] xor_ln340_5_fu_295_p2;
wire   [9:0] tmp_5_fu_381_p4;
wire   [0:0] and_ln786_2_fu_289_p2;
wire   [0:0] or_ln340_2_fu_307_p2;
wire   [9:0] select_ln340_4_fu_391_p3;
wire   [9:0] select_ln388_2_fu_399_p3;
wire   [17:0] add_ln703_fu_427_p2;
wire   [17:0] exp_sum_V_fu_431_p2;
wire  signed [25:0] grp_fu_507_p2;
wire  signed [25:0] grp_fu_514_p2;
wire  signed [25:0] grp_fu_521_p2;
wire  signed [17:0] grp_fu_507_p1;
wire  signed [17:0] grp_fu_514_p1;
wire  signed [17:0] grp_fu_521_p1;
reg    grp_fu_507_ce;
reg    grp_fu_514_ce;
reg    grp_fu_521_ce;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to9;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter9 = 1'b0;
#0 ap_enable_reg_pp0_iter10 = 1'b0;
end

softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s_exp_table1 #(
    .DataWidth( 18 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
exp_table1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(exp_table1_address0),
    .ce0(exp_table1_ce0),
    .q0(exp_table1_q0),
    .address1(exp_table1_address1),
    .ce1(exp_table1_ce1),
    .q1(exp_table1_q1),
    .address2(exp_table1_address2),
    .ce2(exp_table1_ce2),
    .q2(exp_table1_q2)
);

softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s_invert_table2 #(
    .DataWidth( 18 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
invert_table2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(invert_table2_address0),
    .ce0(invert_table2_ce0),
    .q0(invert_table2_q0)
);

NN_final_mul_mul_18s_18s_26_3_1 #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 26 ))
NN_final_mul_mul_18s_18s_26_3_1_U62(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(exp_res_0_V_reg_587_pp0_iter7_reg),
    .din1(grp_fu_507_p1),
    .ce(grp_fu_507_ce),
    .dout(grp_fu_507_p2)
);

NN_final_mul_mul_18s_18s_26_3_1 #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 26 ))
NN_final_mul_mul_18s_18s_26_3_1_U63(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(exp_res_1_V_reg_593_pp0_iter7_reg),
    .din1(grp_fu_514_p1),
    .ce(grp_fu_514_ce),
    .dout(grp_fu_514_p2)
);

NN_final_mul_mul_18s_18s_26_3_1 #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 26 ))
NN_final_mul_mul_18s_18s_26_3_1_U64(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(exp_res_2_V_reg_599_pp0_iter7_reg),
    .din1(grp_fu_521_p1),
    .ce(grp_fu_521_ce),
    .dout(grp_fu_521_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter10 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter10 <= ap_enable_reg_pp0_iter9;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter9 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_0_V_read_1_reg_541 <= data_0_V_read;
        data_0_V_read_1_reg_541_pp0_iter1_reg <= data_0_V_read_1_reg_541;
        data_1_V_read_1_reg_535 <= data_1_V_read;
        data_1_V_read_1_reg_535_pp0_iter1_reg <= data_1_V_read_1_reg_535;
        data_2_V_read_1_reg_528 <= data_2_V_read;
        data_2_V_read_1_reg_528_pp0_iter1_reg <= data_2_V_read_1_reg_528;
        icmp_ln1496_reg_547 <= icmp_ln1496_fu_122_p2;
        x_max_V_reg_552 <= x_max_V_fu_138_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        exp_res_0_V_reg_587 <= exp_table1_q0;
        exp_res_1_V_reg_593 <= exp_table1_q1;
        exp_res_2_V_reg_599 <= exp_table1_q2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exp_res_0_V_reg_587_pp0_iter5_reg <= exp_res_0_V_reg_587;
        exp_res_0_V_reg_587_pp0_iter6_reg <= exp_res_0_V_reg_587_pp0_iter5_reg;
        exp_res_0_V_reg_587_pp0_iter7_reg <= exp_res_0_V_reg_587_pp0_iter6_reg;
        exp_res_1_V_reg_593_pp0_iter5_reg <= exp_res_1_V_reg_593;
        exp_res_1_V_reg_593_pp0_iter6_reg <= exp_res_1_V_reg_593_pp0_iter5_reg;
        exp_res_1_V_reg_593_pp0_iter7_reg <= exp_res_1_V_reg_593_pp0_iter6_reg;
        exp_res_2_V_reg_599_pp0_iter5_reg <= exp_res_2_V_reg_599;
        exp_res_2_V_reg_599_pp0_iter6_reg <= exp_res_2_V_reg_599_pp0_iter5_reg;
        exp_res_2_V_reg_599_pp0_iter7_reg <= exp_res_2_V_reg_599_pp0_iter6_reg;
        inv_exp_sum_V_reg_615 <= invert_table2_q0;
        y_V_1_reg_562 <= y_V_1_fu_373_p3;
        y_V_2_reg_567 <= y_V_2_fu_407_p3;
        y_V_3_reg_605 <= {{exp_sum_V_fu_431_p2[17:8]}};
        y_V_reg_557 <= y_V_fu_339_p3;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter10 == 1'b1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter10 == 1'b0) & (ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to9 = 1'b1;
    end else begin
        ap_idle_pp0_0to9 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to9 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        exp_table1_ce0 = 1'b1;
    end else begin
        exp_table1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        exp_table1_ce1 = 1'b1;
    end else begin
        exp_table1_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        exp_table1_ce2 = 1'b1;
    end else begin
        exp_table1_ce2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_ce) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_507_ce = 1'b1;
    end else begin
        grp_fu_507_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_ce) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_514_ce = 1'b1;
    end else begin
        grp_fu_514_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_ce) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_521_ce = 1'b1;
    end else begin
        grp_fu_521_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter6 == 1'b1))) begin
        invert_table2_ce0 = 1'b1;
    end else begin
        invert_table2_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln703_fu_427_p2 = ($signed(exp_res_2_V_reg_599) + $signed(exp_res_1_V_reg_593));

assign and_ln786_1_fu_234_p2 = (xor_ln786_1_fu_228_p2 & tmp_4_fu_212_p3);

assign and_ln786_2_fu_289_p2 = (xor_ln786_2_fu_283_p2 & tmp_7_fu_267_p3);

assign and_ln786_fu_179_p2 = (xor_ln786_fu_173_p2 & tmp_fu_157_p3);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_start == 1'b0) & (ap_start == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((1'b0 == ap_ce) | ((ap_start == 1'b0) & (ap_start == 1'b1)));
end

assign ap_block_state10_pp0_stage0_iter9 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter10 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = (ap_start == 1'b0);
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

assign ap_return_0 = {{grp_fu_507_p2[25:10]}};

assign ap_return_1 = {{grp_fu_514_p2[25:10]}};

assign ap_return_2 = {{grp_fu_521_p2[25:10]}};

assign exp_sum_V_fu_431_p2 = ($signed(exp_res_0_V_reg_587) + $signed(add_ln703_fu_427_p2));

assign exp_table1_address0 = zext_ln255_fu_415_p1;

assign exp_table1_address1 = zext_ln255_1_fu_419_p1;

assign exp_table1_address2 = zext_ln255_2_fu_423_p1;

assign grp_fu_507_p1 = sext_ln1116_fu_450_p1;

assign grp_fu_514_p1 = sext_ln1116_fu_450_p1;

assign grp_fu_521_p1 = sext_ln1116_fu_450_p1;

assign icmp_ln1496_1_fu_133_p2 = (($signed(select_ln65_fu_128_p3) < $signed(data_2_V_read_1_reg_528)) ? 1'b1 : 1'b0);

assign icmp_ln1496_fu_122_p0 = data_0_V_read;

assign icmp_ln1496_fu_122_p1 = data_1_V_read;

assign icmp_ln1496_fu_122_p2 = (($signed(icmp_ln1496_fu_122_p0) < $signed(icmp_ln1496_fu_122_p1)) ? 1'b1 : 1'b0);

assign invert_table2_address0 = zext_ln265_fu_446_p1;

assign or_ln340_1_fu_252_p2 = (xor_ln340_1_fu_246_p2 | tmp_6_fu_220_p3);

assign or_ln340_2_fu_307_p2 = (xor_ln340_2_fu_301_p2 | tmp_8_fu_275_p3);

assign or_ln340_fu_197_p2 = (xor_ln340_fu_191_p2 | tmp_2_fu_165_p3);

assign select_ln340_2_fu_357_p3 = ((xor_ln340_4_fu_240_p2[0:0] === 1'b1) ? 10'd511 : tmp_3_fu_347_p4);

assign select_ln340_4_fu_391_p3 = ((xor_ln340_5_fu_295_p2[0:0] === 1'b1) ? 10'd511 : tmp_5_fu_381_p4);

assign select_ln340_fu_323_p3 = ((xor_ln340_3_fu_185_p2[0:0] === 1'b1) ? 10'd511 : tmp_1_fu_313_p4);

assign select_ln388_1_fu_365_p3 = ((and_ln786_1_fu_234_p2[0:0] === 1'b1) ? 10'd512 : tmp_3_fu_347_p4);

assign select_ln388_2_fu_399_p3 = ((and_ln786_2_fu_289_p2[0:0] === 1'b1) ? 10'd512 : tmp_5_fu_381_p4);

assign select_ln388_fu_331_p3 = ((and_ln786_fu_179_p2[0:0] === 1'b1) ? 10'd512 : tmp_1_fu_313_p4);

assign select_ln65_fu_128_p3 = ((icmp_ln1496_reg_547[0:0] === 1'b1) ? data_1_V_read_1_reg_535 : data_0_V_read_1_reg_541);

assign sext_ln1116_fu_450_p1 = $signed(inv_exp_sum_V_reg_615);

assign sext_ln703_1_fu_148_p1 = $signed(x_max_V_reg_552);

assign sext_ln703_2_fu_203_p1 = data_1_V_read_1_reg_535_pp0_iter1_reg;

assign sext_ln703_3_fu_258_p1 = data_2_V_read_1_reg_528_pp0_iter1_reg;

assign sext_ln703_fu_145_p1 = data_0_V_read_1_reg_541_pp0_iter1_reg;

assign sub_ln1193_1_fu_206_p2 = ($signed(sext_ln703_2_fu_203_p1) - $signed(sext_ln703_1_fu_148_p1));

assign sub_ln1193_2_fu_261_p2 = ($signed(sext_ln703_3_fu_258_p1) - $signed(sext_ln703_1_fu_148_p1));

assign sub_ln1193_fu_151_p2 = ($signed(sext_ln703_fu_145_p1) - $signed(sext_ln703_1_fu_148_p1));

assign tmp_1_fu_313_p4 = {{sub_ln1193_fu_151_p2[15:6]}};

assign tmp_2_fu_165_p3 = sub_ln1193_fu_151_p2[32'd15];

assign tmp_3_fu_347_p4 = {{sub_ln1193_1_fu_206_p2[15:6]}};

assign tmp_4_fu_212_p3 = sub_ln1193_1_fu_206_p2[32'd16];

assign tmp_5_fu_381_p4 = {{sub_ln1193_2_fu_261_p2[15:6]}};

assign tmp_6_fu_220_p3 = sub_ln1193_1_fu_206_p2[32'd15];

assign tmp_7_fu_267_p3 = sub_ln1193_2_fu_261_p2[32'd16];

assign tmp_8_fu_275_p3 = sub_ln1193_2_fu_261_p2[32'd15];

assign tmp_fu_157_p3 = sub_ln1193_fu_151_p2[32'd16];

assign x_max_V_fu_138_p3 = ((icmp_ln1496_1_fu_133_p2[0:0] === 1'b1) ? data_2_V_read_1_reg_528 : select_ln65_fu_128_p3);

assign xor_ln340_1_fu_246_p2 = (tmp_4_fu_212_p3 ^ 1'd1);

assign xor_ln340_2_fu_301_p2 = (tmp_7_fu_267_p3 ^ 1'd1);

assign xor_ln340_3_fu_185_p2 = (tmp_fu_157_p3 ^ tmp_2_fu_165_p3);

assign xor_ln340_4_fu_240_p2 = (tmp_6_fu_220_p3 ^ tmp_4_fu_212_p3);

assign xor_ln340_5_fu_295_p2 = (tmp_8_fu_275_p3 ^ tmp_7_fu_267_p3);

assign xor_ln340_fu_191_p2 = (tmp_fu_157_p3 ^ 1'd1);

assign xor_ln786_1_fu_228_p2 = (tmp_6_fu_220_p3 ^ 1'd1);

assign xor_ln786_2_fu_283_p2 = (tmp_8_fu_275_p3 ^ 1'd1);

assign xor_ln786_fu_173_p2 = (tmp_2_fu_165_p3 ^ 1'd1);

assign y_V_1_fu_373_p3 = ((or_ln340_1_fu_252_p2[0:0] === 1'b1) ? select_ln340_2_fu_357_p3 : select_ln388_1_fu_365_p3);

assign y_V_2_fu_407_p3 = ((or_ln340_2_fu_307_p2[0:0] === 1'b1) ? select_ln340_4_fu_391_p3 : select_ln388_2_fu_399_p3);

assign y_V_fu_339_p3 = ((or_ln340_fu_197_p2[0:0] === 1'b1) ? select_ln340_fu_323_p3 : select_ln388_fu_331_p3);

assign zext_ln255_1_fu_419_p1 = y_V_1_reg_562;

assign zext_ln255_2_fu_423_p1 = y_V_2_reg_567;

assign zext_ln255_fu_415_p1 = y_V_reg_557;

assign zext_ln265_fu_446_p1 = y_V_3_reg_605;

endmodule //softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s