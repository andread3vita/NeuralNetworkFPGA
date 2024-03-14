// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s_HH_
#define _softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "NN_final_mul_mul_18s_18s_26_3_1.h"
#include "softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s_exp_table1.h"
#include "softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s_invert_table2.h"

namespace ap_rtl {

struct softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<16> > data_0_V_read;
    sc_in< sc_lv<16> > data_1_V_read;
    sc_in< sc_lv<16> > data_2_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;


    // Module declarations
    softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s(sc_module_name name);
    SC_HAS_PROCESS(softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s);

    ~softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s();

    sc_trace_file* mVcdFile;

    softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s_exp_table1* exp_table1_U;
    softmax_stable_ap_fixed_ap_fixed_16_2_5_3_0_softmax_config10_s_invert_table2* invert_table2_U;
    NN_final_mul_mul_18s_18s_26_3_1<1,3,18,18,26>* NN_final_mul_mul_18s_18s_26_3_1_U62;
    NN_final_mul_mul_18s_18s_26_3_1<1,3,18,18,26>* NN_final_mul_mul_18s_18s_26_3_1_U63;
    NN_final_mul_mul_18s_18s_26_3_1<1,3,18,18,26>* NN_final_mul_mul_18s_18s_26_3_1_U64;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter10;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > exp_table1_address0;
    sc_signal< sc_logic > exp_table1_ce0;
    sc_signal< sc_lv<18> > exp_table1_q0;
    sc_signal< sc_lv<10> > exp_table1_address1;
    sc_signal< sc_logic > exp_table1_ce1;
    sc_signal< sc_lv<18> > exp_table1_q1;
    sc_signal< sc_lv<10> > exp_table1_address2;
    sc_signal< sc_logic > exp_table1_ce2;
    sc_signal< sc_lv<18> > exp_table1_q2;
    sc_signal< sc_lv<10> > invert_table2_address0;
    sc_signal< sc_logic > invert_table2_ce0;
    sc_signal< sc_lv<18> > invert_table2_q0;
    sc_signal< sc_lv<16> > data_2_V_read_1_reg_528;
    sc_signal< sc_lv<16> > data_2_V_read_1_reg_528_pp0_iter1_reg;
    sc_signal< sc_lv<16> > data_1_V_read_1_reg_535;
    sc_signal< sc_lv<16> > data_1_V_read_1_reg_535_pp0_iter1_reg;
    sc_signal< sc_lv<16> > data_0_V_read_1_reg_541;
    sc_signal< sc_lv<16> > data_0_V_read_1_reg_541_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln1496_fu_122_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_reg_547;
    sc_signal< sc_lv<16> > x_max_V_fu_138_p3;
    sc_signal< sc_lv<16> > x_max_V_reg_552;
    sc_signal< sc_lv<10> > y_V_fu_339_p3;
    sc_signal< sc_lv<10> > y_V_reg_557;
    sc_signal< sc_lv<10> > y_V_1_fu_373_p3;
    sc_signal< sc_lv<10> > y_V_1_reg_562;
    sc_signal< sc_lv<10> > y_V_2_fu_407_p3;
    sc_signal< sc_lv<10> > y_V_2_reg_567;
    sc_signal< sc_lv<18> > exp_res_0_V_reg_587;
    sc_signal< sc_lv<18> > exp_res_0_V_reg_587_pp0_iter5_reg;
    sc_signal< sc_lv<18> > exp_res_0_V_reg_587_pp0_iter6_reg;
    sc_signal< sc_lv<18> > exp_res_0_V_reg_587_pp0_iter7_reg;
    sc_signal< sc_lv<18> > exp_res_1_V_reg_593;
    sc_signal< sc_lv<18> > exp_res_1_V_reg_593_pp0_iter5_reg;
    sc_signal< sc_lv<18> > exp_res_1_V_reg_593_pp0_iter6_reg;
    sc_signal< sc_lv<18> > exp_res_1_V_reg_593_pp0_iter7_reg;
    sc_signal< sc_lv<18> > exp_res_2_V_reg_599;
    sc_signal< sc_lv<18> > exp_res_2_V_reg_599_pp0_iter5_reg;
    sc_signal< sc_lv<18> > exp_res_2_V_reg_599_pp0_iter6_reg;
    sc_signal< sc_lv<18> > exp_res_2_V_reg_599_pp0_iter7_reg;
    sc_signal< sc_lv<10> > y_V_3_reg_605;
    sc_signal< sc_lv<18> > inv_exp_sum_V_reg_615;
    sc_signal< sc_lv<26> > sext_ln1116_fu_450_p1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<64> > zext_ln255_fu_415_p1;
    sc_signal< sc_lv<64> > zext_ln255_1_fu_419_p1;
    sc_signal< sc_lv<64> > zext_ln255_2_fu_423_p1;
    sc_signal< sc_lv<64> > zext_ln265_fu_446_p1;
    sc_signal< sc_lv<16> > icmp_ln1496_fu_122_p0;
    sc_signal< sc_lv<16> > icmp_ln1496_fu_122_p1;
    sc_signal< sc_lv<16> > select_ln65_fu_128_p3;
    sc_signal< sc_lv<1> > icmp_ln1496_1_fu_133_p2;
    sc_signal< sc_lv<17> > sext_ln703_fu_145_p1;
    sc_signal< sc_lv<17> > sext_ln703_1_fu_148_p1;
    sc_signal< sc_lv<17> > sub_ln1193_fu_151_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_165_p3;
    sc_signal< sc_lv<1> > tmp_fu_157_p3;
    sc_signal< sc_lv<1> > xor_ln786_fu_173_p2;
    sc_signal< sc_lv<1> > xor_ln340_fu_191_p2;
    sc_signal< sc_lv<17> > sext_ln703_2_fu_203_p1;
    sc_signal< sc_lv<17> > sub_ln1193_1_fu_206_p2;
    sc_signal< sc_lv<1> > tmp_6_fu_220_p3;
    sc_signal< sc_lv<1> > tmp_4_fu_212_p3;
    sc_signal< sc_lv<1> > xor_ln786_1_fu_228_p2;
    sc_signal< sc_lv<1> > xor_ln340_1_fu_246_p2;
    sc_signal< sc_lv<17> > sext_ln703_3_fu_258_p1;
    sc_signal< sc_lv<17> > sub_ln1193_2_fu_261_p2;
    sc_signal< sc_lv<1> > tmp_8_fu_275_p3;
    sc_signal< sc_lv<1> > tmp_7_fu_267_p3;
    sc_signal< sc_lv<1> > xor_ln786_2_fu_283_p2;
    sc_signal< sc_lv<1> > xor_ln340_2_fu_301_p2;
    sc_signal< sc_lv<1> > xor_ln340_3_fu_185_p2;
    sc_signal< sc_lv<10> > tmp_1_fu_313_p4;
    sc_signal< sc_lv<1> > and_ln786_fu_179_p2;
    sc_signal< sc_lv<1> > or_ln340_fu_197_p2;
    sc_signal< sc_lv<10> > select_ln340_fu_323_p3;
    sc_signal< sc_lv<10> > select_ln388_fu_331_p3;
    sc_signal< sc_lv<1> > xor_ln340_4_fu_240_p2;
    sc_signal< sc_lv<10> > tmp_3_fu_347_p4;
    sc_signal< sc_lv<1> > and_ln786_1_fu_234_p2;
    sc_signal< sc_lv<1> > or_ln340_1_fu_252_p2;
    sc_signal< sc_lv<10> > select_ln340_2_fu_357_p3;
    sc_signal< sc_lv<10> > select_ln388_1_fu_365_p3;
    sc_signal< sc_lv<1> > xor_ln340_5_fu_295_p2;
    sc_signal< sc_lv<10> > tmp_5_fu_381_p4;
    sc_signal< sc_lv<1> > and_ln786_2_fu_289_p2;
    sc_signal< sc_lv<1> > or_ln340_2_fu_307_p2;
    sc_signal< sc_lv<10> > select_ln340_4_fu_391_p3;
    sc_signal< sc_lv<10> > select_ln388_2_fu_399_p3;
    sc_signal< sc_lv<18> > add_ln703_fu_427_p2;
    sc_signal< sc_lv<18> > exp_sum_V_fu_431_p2;
    sc_signal< sc_lv<26> > grp_fu_507_p2;
    sc_signal< sc_lv<26> > grp_fu_514_p2;
    sc_signal< sc_lv<26> > grp_fu_521_p2;
    sc_signal< sc_lv<18> > grp_fu_507_p1;
    sc_signal< sc_lv<18> > grp_fu_514_p1;
    sc_signal< sc_lv<18> > grp_fu_521_p1;
    sc_signal< sc_logic > grp_fu_507_ce;
    sc_signal< sc_logic > grp_fu_514_ce;
    sc_signal< sc_logic > grp_fu_521_ce;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to9;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<10> ap_const_lv10_1FF;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln703_fu_427_p2();
    void thread_and_ln786_1_fu_234_p2();
    void thread_and_ln786_2_fu_289_p2();
    void thread_and_ln786_fu_179_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter9();
    void thread_ap_block_state11_pp0_stage0_iter10();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage0_iter4();
    void thread_ap_block_state6_pp0_stage0_iter5();
    void thread_ap_block_state7_pp0_stage0_iter6();
    void thread_ap_block_state8_pp0_stage0_iter7();
    void thread_ap_block_state9_pp0_stage0_iter8();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to9();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_exp_sum_V_fu_431_p2();
    void thread_exp_table1_address0();
    void thread_exp_table1_address1();
    void thread_exp_table1_address2();
    void thread_exp_table1_ce0();
    void thread_exp_table1_ce1();
    void thread_exp_table1_ce2();
    void thread_grp_fu_507_ce();
    void thread_grp_fu_507_p1();
    void thread_grp_fu_514_ce();
    void thread_grp_fu_514_p1();
    void thread_grp_fu_521_ce();
    void thread_grp_fu_521_p1();
    void thread_icmp_ln1496_1_fu_133_p2();
    void thread_icmp_ln1496_fu_122_p0();
    void thread_icmp_ln1496_fu_122_p1();
    void thread_icmp_ln1496_fu_122_p2();
    void thread_invert_table2_address0();
    void thread_invert_table2_ce0();
    void thread_or_ln340_1_fu_252_p2();
    void thread_or_ln340_2_fu_307_p2();
    void thread_or_ln340_fu_197_p2();
    void thread_select_ln340_2_fu_357_p3();
    void thread_select_ln340_4_fu_391_p3();
    void thread_select_ln340_fu_323_p3();
    void thread_select_ln388_1_fu_365_p3();
    void thread_select_ln388_2_fu_399_p3();
    void thread_select_ln388_fu_331_p3();
    void thread_select_ln65_fu_128_p3();
    void thread_sext_ln1116_fu_450_p1();
    void thread_sext_ln703_1_fu_148_p1();
    void thread_sext_ln703_2_fu_203_p1();
    void thread_sext_ln703_3_fu_258_p1();
    void thread_sext_ln703_fu_145_p1();
    void thread_sub_ln1193_1_fu_206_p2();
    void thread_sub_ln1193_2_fu_261_p2();
    void thread_sub_ln1193_fu_151_p2();
    void thread_tmp_1_fu_313_p4();
    void thread_tmp_2_fu_165_p3();
    void thread_tmp_3_fu_347_p4();
    void thread_tmp_4_fu_212_p3();
    void thread_tmp_5_fu_381_p4();
    void thread_tmp_6_fu_220_p3();
    void thread_tmp_7_fu_267_p3();
    void thread_tmp_8_fu_275_p3();
    void thread_tmp_fu_157_p3();
    void thread_x_max_V_fu_138_p3();
    void thread_xor_ln340_1_fu_246_p2();
    void thread_xor_ln340_2_fu_301_p2();
    void thread_xor_ln340_3_fu_185_p2();
    void thread_xor_ln340_4_fu_240_p2();
    void thread_xor_ln340_5_fu_295_p2();
    void thread_xor_ln340_fu_191_p2();
    void thread_xor_ln786_1_fu_228_p2();
    void thread_xor_ln786_2_fu_283_p2();
    void thread_xor_ln786_fu_173_p2();
    void thread_y_V_1_fu_373_p3();
    void thread_y_V_2_fu_407_p3();
    void thread_y_V_fu_339_p3();
    void thread_zext_ln255_1_fu_419_p1();
    void thread_zext_ln255_2_fu_423_p1();
    void thread_zext_ln255_fu_415_p1();
    void thread_zext_ln265_fu_446_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
