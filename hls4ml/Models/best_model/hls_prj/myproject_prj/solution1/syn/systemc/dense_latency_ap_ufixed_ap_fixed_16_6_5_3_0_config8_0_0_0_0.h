// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config8_0_0_0_0_HH_
#define _dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config8_0_0_0_0_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config8_0_0_0_0 : public sc_module {
    // Port declarations 24
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<5> > data_0_V_read;
    sc_in< sc_lv<5> > data_1_V_read;
    sc_in< sc_lv<5> > data_2_V_read;
    sc_in< sc_lv<5> > data_3_V_read;
    sc_in< sc_lv<5> > data_4_V_read;
    sc_in< sc_lv<5> > data_5_V_read;
    sc_in< sc_lv<5> > data_7_V_read;
    sc_in< sc_lv<5> > data_9_V_read;
    sc_in< sc_lv<5> > data_10_V_read;
    sc_in< sc_lv<5> > data_11_V_read;
    sc_in< sc_lv<5> > data_12_V_read;
    sc_in< sc_lv<5> > data_13_V_read;
    sc_in< sc_lv<5> > data_14_V_read;
    sc_in< sc_lv<5> > data_15_V_read;
    sc_in< sc_lv<5> > data_16_V_read;
    sc_in< sc_lv<5> > data_17_V_read;
    sc_in< sc_lv<5> > data_18_V_read;
    sc_in< sc_lv<5> > data_19_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config8_0_0_0_0(sc_module_name name);
    SC_HAS_PROCESS(dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config8_0_0_0_0);

    ~dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config8_0_0_0_0();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<10> > mul_ln728_fu_217_p2;
    sc_signal< sc_lv<10> > mul_ln728_reg_350;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > mul_ln1118_fu_203_p2;
    sc_signal< sc_lv<10> > mul_ln1118_reg_474;
    sc_signal< sc_lv<5> > data_15_V_read_2_reg_1601;
    sc_signal< sc_lv<5> > data_12_V_read_2_reg_1607;
    sc_signal< sc_lv<5> > data_4_V_read_3_reg_1612;
    sc_signal< sc_lv<5> > data_2_V_read_3_reg_1618;
    sc_signal< sc_lv<5> > data_1_V_read_3_reg_1624;
    sc_signal< sc_lv<5> > data_0_V_read_3_reg_1631;
    sc_signal< sc_lv<8> > sub_ln1118_fu_495_p2;
    sc_signal< sc_lv<8> > sub_ln1118_reg_1636;
    sc_signal< sc_lv<10> > sub_ln1118_5_fu_581_p2;
    sc_signal< sc_lv<10> > sub_ln1118_5_reg_1641;
    sc_signal< sc_lv<9> > sub_ln1118_19_fu_692_p2;
    sc_signal< sc_lv<9> > sub_ln1118_19_reg_1646;
    sc_signal< sc_lv<9> > sub_ln1118_8_fu_710_p2;
    sc_signal< sc_lv<9> > sub_ln1118_8_reg_1651;
    sc_signal< sc_lv<9> > sub_ln1118_9_fu_732_p2;
    sc_signal< sc_lv<9> > sub_ln1118_9_reg_1656;
    sc_signal< sc_lv<10> > sub_ln1118_12_fu_836_p2;
    sc_signal< sc_lv<10> > sub_ln1118_12_reg_1661;
    sc_signal< sc_lv<8> > sub_ln1118_13_fu_854_p2;
    sc_signal< sc_lv<8> > sub_ln1118_13_reg_1666;
    sc_signal< sc_lv<9> > add_ln1118_2_fu_876_p2;
    sc_signal< sc_lv<9> > add_ln1118_2_reg_1671;
    sc_signal< sc_lv<8> > shl_ln728_16_fu_898_p3;
    sc_signal< sc_lv<8> > shl_ln728_16_reg_1676;
    sc_signal< sc_lv<9> > sub_ln1118_15_fu_922_p2;
    sc_signal< sc_lv<9> > sub_ln1118_15_reg_1681;
    sc_signal< sc_lv<8> > sub_ln1118_16_fu_928_p2;
    sc_signal< sc_lv<8> > sub_ln1118_16_reg_1686;
    sc_signal< sc_lv<9> > sub_ln1118_20_fu_954_p2;
    sc_signal< sc_lv<9> > sub_ln1118_20_reg_1691;
    sc_signal< sc_lv<8> > add_ln1118_3_fu_972_p2;
    sc_signal< sc_lv<8> > add_ln1118_3_reg_1696;
    sc_signal< sc_lv<10> > add_ln703_2_fu_1004_p2;
    sc_signal< sc_lv<10> > add_ln703_2_reg_1701;
    sc_signal< sc_lv<11> > add_ln703_5_fu_1010_p2;
    sc_signal< sc_lv<11> > add_ln703_5_reg_1706;
    sc_signal< sc_lv<11> > add_ln703_5_reg_1706_pp0_iter1_reg;
    sc_signal< sc_lv<10> > add_ln703_15_fu_1016_p2;
    sc_signal< sc_lv<10> > add_ln703_15_reg_1711;
    sc_signal< sc_lv<10> > add_ln703_18_fu_1022_p2;
    sc_signal< sc_lv<10> > add_ln703_18_reg_1716;
    sc_signal< sc_lv<12> > add_ln703_20_fu_1028_p2;
    sc_signal< sc_lv<12> > add_ln703_20_reg_1721;
    sc_signal< sc_lv<10> > add_ln703_fu_1349_p2;
    sc_signal< sc_lv<10> > add_ln703_reg_1726;
    sc_signal< sc_lv<12> > add_ln703_3_fu_1358_p2;
    sc_signal< sc_lv<12> > add_ln703_3_reg_1731;
    sc_signal< sc_lv<10> > add_ln703_8_fu_1370_p2;
    sc_signal< sc_lv<10> > add_ln703_8_reg_1736;
    sc_signal< sc_lv<12> > add_ln703_11_fu_1376_p2;
    sc_signal< sc_lv<12> > add_ln703_11_reg_1741;
    sc_signal< sc_lv<11> > add_ln703_12_fu_1382_p2;
    sc_signal< sc_lv<11> > add_ln703_12_reg_1746;
    sc_signal< sc_lv<11> > add_ln703_16_fu_1397_p2;
    sc_signal< sc_lv<11> > add_ln703_16_reg_1751;
    sc_signal< sc_lv<14> > add_ln703_22_fu_1429_p2;
    sc_signal< sc_lv<14> > add_ln703_22_reg_1756;
    sc_signal< sc_lv<12> > add_ln703_24_fu_1441_p2;
    sc_signal< sc_lv<12> > add_ln703_24_reg_1761;
    sc_signal< sc_lv<13> > add_ln703_27_fu_1467_p2;
    sc_signal< sc_lv<13> > add_ln703_27_reg_1766;
    sc_signal< sc_lv<13> > add_ln703_4_fu_1491_p2;
    sc_signal< sc_lv<13> > add_ln703_4_reg_1771;
    sc_signal< sc_lv<12> > add_ln703_9_fu_1509_p2;
    sc_signal< sc_lv<12> > add_ln703_9_reg_1776;
    sc_signal< sc_lv<14> > acc_1_V_fu_1530_p2;
    sc_signal< sc_lv<14> > acc_1_V_reg_1781;
    sc_signal< sc_lv<15> > acc_2_V_fu_1555_p2;
    sc_signal< sc_lv<15> > acc_2_V_reg_1786;
    sc_signal< sc_lv<5> > mul_ln1118_fu_203_p0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<5> > mul_ln728_fu_217_p0;
    sc_signal< sc_lv<7> > shl_ln_fu_483_p3;
    sc_signal< sc_lv<8> > zext_ln1118_1_fu_491_p1;
    sc_signal< sc_lv<8> > zext_ln1118_fu_479_p1;
    sc_signal< sc_lv<7> > tmp_2_fu_505_p3;
    sc_signal< sc_lv<8> > zext_ln1118_2_fu_501_p1;
    sc_signal< sc_lv<8> > zext_ln1118_6_fu_513_p1;
    sc_signal< sc_lv<8> > sub_ln1118_18_fu_517_p2;
    sc_signal< sc_lv<9> > shl_ln728_4_fu_523_p3;
    sc_signal< sc_lv<9> > shl_ln728_6_fu_535_p3;
    sc_signal< sc_lv<8> > shl_ln1118_8_fu_547_p3;
    sc_signal< sc_lv<9> > zext_ln1118_9_fu_555_p1;
    sc_signal< sc_lv<9> > sub_ln1118_4_fu_559_p2;
    sc_signal< sc_lv<6> > shl_ln1118_9_fu_569_p3;
    sc_signal< sc_lv<10> > sext_ln1118_fu_565_p1;
    sc_signal< sc_lv<10> > zext_ln1118_10_fu_577_p1;
    sc_signal< sc_lv<8> > shl_ln728_9_fu_587_p3;
    sc_signal< sc_lv<8> > shl_ln1118_2_fu_603_p3;
    sc_signal< sc_lv<9> > zext_ln1118_14_fu_611_p1;
    sc_signal< sc_lv<9> > zext_ln1118_13_fu_599_p1;
    sc_signal< sc_lv<9> > add_ln1118_fu_615_p2;
    sc_signal< sc_lv<7> > shl_ln1118_3_fu_638_p3;
    sc_signal< sc_lv<8> > zext_ln1118_16_fu_646_p1;
    sc_signal< sc_lv<8> > zext_ln1118_15_fu_634_p1;
    sc_signal< sc_lv<8> > sub_ln1118_7_fu_650_p2;
    sc_signal< sc_lv<9> > tmp_5_fu_656_p3;
    sc_signal< sc_lv<11> > sext_ln728_13_fu_664_p1;
    sc_signal< sc_lv<8> > shl_ln728_1_fu_676_p3;
    sc_signal< sc_lv<9> > zext_ln1118_17_fu_672_p1;
    sc_signal< sc_lv<9> > zext_ln1118_18_fu_688_p1;
    sc_signal< sc_lv<8> > shl_ln1118_10_fu_698_p3;
    sc_signal< sc_lv<9> > zext_ln1118_19_fu_706_p1;
    sc_signal< sc_lv<8> > shl_ln1118_11_fu_720_p3;
    sc_signal< sc_lv<9> > zext_ln1118_21_fu_728_p1;
    sc_signal< sc_lv<9> > zext_ln1118_20_fu_716_p1;
    sc_signal< sc_lv<8> > shl_ln1118_12_fu_738_p3;
    sc_signal< sc_lv<6> > shl_ln1118_13_fu_750_p3;
    sc_signal< sc_lv<9> > zext_ln1118_23_fu_758_p1;
    sc_signal< sc_lv<9> > zext_ln1118_22_fu_746_p1;
    sc_signal< sc_lv<9> > sub_ln1118_10_fu_762_p2;
    sc_signal< sc_lv<10> > shl_ln728_10_fu_768_p3;
    sc_signal< sc_lv<8> > shl_ln1118_14_fu_784_p3;
    sc_signal< sc_lv<9> > zext_ln1118_25_fu_792_p1;
    sc_signal< sc_lv<9> > zext_ln1118_24_fu_780_p1;
    sc_signal< sc_lv<9> > add_ln1118_1_fu_796_p2;
    sc_signal< sc_lv<10> > shl_ln728_11_fu_802_p3;
    sc_signal< sc_lv<9> > sub_ln1118_11_fu_814_p2;
    sc_signal< sc_lv<6> > shl_ln1118_15_fu_824_p3;
    sc_signal< sc_lv<10> > sext_ln1118_3_fu_820_p1;
    sc_signal< sc_lv<10> > zext_ln1118_26_fu_832_p1;
    sc_signal< sc_lv<7> > shl_ln1118_4_fu_842_p3;
    sc_signal< sc_lv<8> > zext_ln1118_28_fu_850_p1;
    sc_signal< sc_lv<8> > shl_ln1118_16_fu_864_p3;
    sc_signal< sc_lv<9> > zext_ln1118_30_fu_872_p1;
    sc_signal< sc_lv<9> > zext_ln1118_29_fu_860_p1;
    sc_signal< sc_lv<7> > shl_ln1118_5_fu_886_p3;
    sc_signal< sc_lv<6> > shl_ln1118_17_fu_910_p3;
    sc_signal< sc_lv<9> > zext_ln1118_34_fu_918_p1;
    sc_signal< sc_lv<9> > zext_ln1118_33_fu_906_p1;
    sc_signal< sc_lv<8> > zext_ln1118_32_fu_894_p1;
    sc_signal< sc_lv<8> > zext_ln1118_31_fu_882_p1;
    sc_signal< sc_lv<8> > tmp_9_fu_942_p3;
    sc_signal< sc_lv<9> > zext_ln1118_36_fu_938_p1;
    sc_signal< sc_lv<9> > zext_ln1118_37_fu_950_p1;
    sc_signal< sc_lv<7> > shl_ln1118_18_fu_960_p3;
    sc_signal< sc_lv<8> > zext_ln1118_38_fu_968_p1;
    sc_signal< sc_lv<8> > zext_ln1118_35_fu_934_p1;
    sc_signal< sc_lv<8> > shl_ln1118_19_fu_978_p3;
    sc_signal< sc_lv<9> > zext_ln1118_39_fu_986_p1;
    sc_signal< sc_lv<9> > sub_ln1118_17_fu_990_p2;
    sc_signal< sc_lv<10> > shl_ln728_s_fu_621_p3;
    sc_signal< sc_lv<10> > zext_ln728_9_fu_684_p1;
    sc_signal< sc_lv<11> > sext_ln728_5_fu_776_p1;
    sc_signal< sc_lv<11> > zext_ln728_11_fu_810_p1;
    sc_signal< sc_lv<10> > shl_ln728_20_fu_996_p3;
    sc_signal< sc_lv<10> > sext_ln728_fu_531_p1;
    sc_signal< sc_lv<10> > zext_ln728_4_fu_543_p1;
    sc_signal< sc_lv<12> > zext_ln728_6_fu_595_p1;
    sc_signal< sc_lv<12> > zext_ln728_8_fu_668_p1;
    sc_signal< sc_lv<8> > shl_ln1_fu_1034_p3;
    sc_signal< sc_lv<9> > tmp_fu_1045_p3;
    sc_signal< sc_lv<11> > sext_ln728_9_fu_1052_p1;
    sc_signal< sc_lv<8> > shl_ln1118_1_fu_1063_p3;
    sc_signal< sc_lv<6> > shl_ln1118_6_fu_1074_p3;
    sc_signal< sc_lv<9> > zext_ln1118_5_fu_1081_p1;
    sc_signal< sc_lv<9> > zext_ln1118_4_fu_1070_p1;
    sc_signal< sc_lv<9> > sub_ln1118_1_fu_1085_p2;
    sc_signal< sc_lv<9> > zext_ln1118_3_fu_1060_p1;
    sc_signal< sc_lv<9> > sub_ln1118_2_fu_1099_p2;
    sc_signal< sc_lv<10> > tmp_1_fu_1105_p3;
    sc_signal< sc_lv<11> > sext_ln728_10_fu_1113_p1;
    sc_signal< sc_lv<8> > shl_ln1118_7_fu_1124_p3;
    sc_signal< sc_lv<9> > zext_ln1118_8_fu_1131_p1;
    sc_signal< sc_lv<9> > zext_ln1118_7_fu_1121_p1;
    sc_signal< sc_lv<9> > sub_ln1118_3_fu_1135_p2;
    sc_signal< sc_lv<10> > tmp_3_fu_1141_p3;
    sc_signal< sc_lv<11> > sext_ln728_11_fu_1149_p1;
    sc_signal< sc_lv<11> > shl_ln728_7_fu_1157_p3;
    sc_signal< sc_lv<8> > shl_ln1118_s_fu_1171_p3;
    sc_signal< sc_lv<9> > zext_ln1118_12_fu_1178_p1;
    sc_signal< sc_lv<9> > zext_ln1118_11_fu_1168_p1;
    sc_signal< sc_lv<9> > sub_ln1118_6_fu_1182_p2;
    sc_signal< sc_lv<10> > tmp_4_fu_1188_p3;
    sc_signal< sc_lv<11> > sext_ln728_12_fu_1196_p1;
    sc_signal< sc_lv<10> > shl_ln728_3_fu_1208_p3;
    sc_signal< sc_lv<10> > shl_ln728_5_fu_1219_p3;
    sc_signal< sc_lv<10> > tmp_7_fu_1234_p3;
    sc_signal< sc_lv<11> > sext_ln728_14_fu_1241_p1;
    sc_signal< sc_lv<11> > shl_ln728_12_fu_1249_p3;
    sc_signal< sc_lv<8> > shl_ln728_13_fu_1263_p3;
    sc_signal< sc_lv<9> > sext_ln1118_4_fu_1274_p1;
    sc_signal< sc_lv<9> > zext_ln1118_27_fu_1260_p1;
    sc_signal< sc_lv<9> > sub_ln1118_14_fu_1277_p2;
    sc_signal< sc_lv<10> > shl_ln728_14_fu_1283_p3;
    sc_signal< sc_lv<10> > shl_ln728_15_fu_1295_p3;
    sc_signal< sc_lv<10> > shl_ln728_17_fu_1309_p3;
    sc_signal< sc_lv<9> > tmp_8_fu_1320_p3;
    sc_signal< sc_lv<11> > sext_ln728_15_fu_1327_p1;
    sc_signal< sc_lv<10> > shl_ln728_2_fu_1091_p3;
    sc_signal< sc_lv<10> > zext_ln728_fu_1041_p1;
    sc_signal< sc_lv<12> > zext_ln703_fu_1355_p1;
    sc_signal< sc_lv<12> > zext_ln728_5_fu_1200_p1;
    sc_signal< sc_lv<10> > zext_ln728_14_fu_1306_p1;
    sc_signal< sc_lv<10> > shl_ln728_18_fu_1335_p3;
    sc_signal< sc_lv<10> > add_ln703_7_fu_1364_p2;
    sc_signal< sc_lv<10> > zext_ln728_12_fu_1270_p1;
    sc_signal< sc_lv<12> > zext_ln728_2_fu_1117_p1;
    sc_signal< sc_lv<12> > zext_ln728_3_fu_1153_p1;
    sc_signal< sc_lv<11> > zext_ln728_7_fu_1204_p1;
    sc_signal< sc_lv<11> > sext_ln728_7_fu_1291_p1;
    sc_signal< sc_lv<11> > zext_ln728_13_fu_1302_p1;
    sc_signal< sc_lv<11> > sext_ln728_8_fu_1316_p1;
    sc_signal< sc_lv<11> > sext_ln703_10_fu_1394_p1;
    sc_signal< sc_lv<11> > add_ln703_14_fu_1388_p2;
    sc_signal< sc_lv<13> > sext_ln703_13_fu_1403_p1;
    sc_signal< sc_lv<13> > zext_ln728_1_fu_1056_p1;
    sc_signal< sc_lv<13> > add_ln703_19_fu_1406_p2;
    sc_signal< sc_lv<13> > zext_ln703_3_fu_1416_p1;
    sc_signal< sc_lv<13> > sext_ln728_1_fu_1164_p1;
    sc_signal< sc_lv<13> > add_ln703_21_fu_1419_p2;
    sc_signal< sc_lv<14> > sext_ln703_15_fu_1425_p1;
    sc_signal< sc_lv<14> > sext_ln703_14_fu_1412_p1;
    sc_signal< sc_lv<12> > sext_ln728_3_fu_1226_p1;
    sc_signal< sc_lv<12> > zext_ln728_10_fu_1245_p1;
    sc_signal< sc_lv<12> > add_ln703_23_fu_1435_p2;
    sc_signal< sc_lv<12> > sext_ln728_2_fu_1215_p1;
    sc_signal< sc_lv<12> > sext_ln728_6_fu_1256_p1;
    sc_signal< sc_lv<12> > zext_ln728_15_fu_1331_p1;
    sc_signal< sc_lv<12> > add_ln703_25_fu_1447_p2;
    sc_signal< sc_lv<9> > shl_ln728_19_fu_1342_p3;
    sc_signal< sc_lv<9> > add_ln703_26_fu_1457_p2;
    sc_signal< sc_lv<13> > sext_ln703_19_fu_1463_p1;
    sc_signal< sc_lv<13> > sext_ln703_18_fu_1453_p1;
    sc_signal< sc_lv<11> > shl_ln728_8_fu_1473_p3;
    sc_signal< sc_lv<13> > zext_ln703_1_fu_1488_p1;
    sc_signal< sc_lv<13> > sext_ln703_fu_1485_p1;
    sc_signal< sc_lv<12> > sext_ln703_5_fu_1497_p1;
    sc_signal< sc_lv<12> > sext_ln728_4_fu_1481_p1;
    sc_signal< sc_lv<12> > sext_ln703_6_fu_1506_p1;
    sc_signal< sc_lv<12> > add_ln703_6_fu_1500_p2;
    sc_signal< sc_lv<14> > sext_ln703_9_fu_1518_p1;
    sc_signal< sc_lv<14> > zext_ln703_2_fu_1515_p1;
    sc_signal< sc_lv<14> > sext_ln703_11_fu_1527_p1;
    sc_signal< sc_lv<14> > add_ln703_13_fu_1521_p2;
    sc_signal< sc_lv<14> > sext_ln703_20_fu_1542_p1;
    sc_signal< sc_lv<14> > sext_ln703_17_fu_1539_p1;
    sc_signal< sc_lv<14> > add_ln703_28_fu_1545_p2;
    sc_signal< sc_lv<15> > sext_ln703_21_fu_1551_p1;
    sc_signal< sc_lv<15> > sext_ln703_16_fu_1536_p1;
    sc_signal< sc_lv<14> > sext_ln703_7_fu_1564_p1;
    sc_signal< sc_lv<14> > sext_ln703_4_fu_1561_p1;
    sc_signal< sc_lv<14> > add_ln703_10_fu_1567_p2;
    sc_signal< sc_lv<16> > sext_ln703_8_fu_1573_p1;
    sc_signal< sc_lv<16> > sext_ln703_12_fu_1577_p1;
    sc_signal< sc_lv<16> > sext_ln703_22_fu_1580_p1;
    sc_signal< sc_logic > ap_ce_reg;
    sc_signal< sc_lv<5> > data_0_V_read_int_reg;
    sc_signal< sc_lv<5> > data_1_V_read_int_reg;
    sc_signal< sc_lv<5> > data_2_V_read_int_reg;
    sc_signal< sc_lv<5> > data_3_V_read_int_reg;
    sc_signal< sc_lv<5> > data_4_V_read_int_reg;
    sc_signal< sc_lv<5> > data_5_V_read_int_reg;
    sc_signal< sc_lv<5> > data_7_V_read_int_reg;
    sc_signal< sc_lv<5> > data_9_V_read_int_reg;
    sc_signal< sc_lv<5> > data_10_V_read_int_reg;
    sc_signal< sc_lv<5> > data_11_V_read_int_reg;
    sc_signal< sc_lv<5> > data_12_V_read_int_reg;
    sc_signal< sc_lv<5> > data_13_V_read_int_reg;
    sc_signal< sc_lv<5> > data_14_V_read_int_reg;
    sc_signal< sc_lv<5> > data_15_V_read_int_reg;
    sc_signal< sc_lv<5> > data_16_V_read_int_reg;
    sc_signal< sc_lv<5> > data_17_V_read_int_reg;
    sc_signal< sc_lv<5> > data_18_V_read_int_reg;
    sc_signal< sc_lv<5> > data_19_V_read_int_reg;
    sc_signal< sc_lv<16> > ap_return_0_int_reg;
    sc_signal< sc_lv<16> > ap_return_1_int_reg;
    sc_signal< sc_lv<16> > ap_return_2_int_reg;
    sc_signal< sc_lv<10> > mul_ln1118_fu_203_p00;
    sc_signal< sc_lv<10> > mul_ln728_fu_217_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<10> ap_const_lv10_3F5;
    static const sc_lv<10> ap_const_lv10_16;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<10> ap_const_lv10_80;
    static const sc_lv<9> ap_const_lv9_180;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_1_V_fu_1530_p2();
    void thread_acc_2_V_fu_1555_p2();
    void thread_add_ln1118_1_fu_796_p2();
    void thread_add_ln1118_2_fu_876_p2();
    void thread_add_ln1118_3_fu_972_p2();
    void thread_add_ln1118_fu_615_p2();
    void thread_add_ln703_10_fu_1567_p2();
    void thread_add_ln703_11_fu_1376_p2();
    void thread_add_ln703_12_fu_1382_p2();
    void thread_add_ln703_13_fu_1521_p2();
    void thread_add_ln703_14_fu_1388_p2();
    void thread_add_ln703_15_fu_1016_p2();
    void thread_add_ln703_16_fu_1397_p2();
    void thread_add_ln703_18_fu_1022_p2();
    void thread_add_ln703_19_fu_1406_p2();
    void thread_add_ln703_20_fu_1028_p2();
    void thread_add_ln703_21_fu_1419_p2();
    void thread_add_ln703_22_fu_1429_p2();
    void thread_add_ln703_23_fu_1435_p2();
    void thread_add_ln703_24_fu_1441_p2();
    void thread_add_ln703_25_fu_1447_p2();
    void thread_add_ln703_26_fu_1457_p2();
    void thread_add_ln703_27_fu_1467_p2();
    void thread_add_ln703_28_fu_1545_p2();
    void thread_add_ln703_2_fu_1004_p2();
    void thread_add_ln703_3_fu_1358_p2();
    void thread_add_ln703_4_fu_1491_p2();
    void thread_add_ln703_5_fu_1010_p2();
    void thread_add_ln703_6_fu_1500_p2();
    void thread_add_ln703_7_fu_1364_p2();
    void thread_add_ln703_8_fu_1370_p2();
    void thread_add_ln703_9_fu_1509_p2();
    void thread_add_ln703_fu_1349_p2();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_mul_ln1118_fu_203_p0();
    void thread_mul_ln1118_fu_203_p00();
    void thread_mul_ln1118_fu_203_p2();
    void thread_mul_ln728_fu_217_p0();
    void thread_mul_ln728_fu_217_p00();
    void thread_mul_ln728_fu_217_p2();
    void thread_sext_ln1118_3_fu_820_p1();
    void thread_sext_ln1118_4_fu_1274_p1();
    void thread_sext_ln1118_fu_565_p1();
    void thread_sext_ln703_10_fu_1394_p1();
    void thread_sext_ln703_11_fu_1527_p1();
    void thread_sext_ln703_12_fu_1577_p1();
    void thread_sext_ln703_13_fu_1403_p1();
    void thread_sext_ln703_14_fu_1412_p1();
    void thread_sext_ln703_15_fu_1425_p1();
    void thread_sext_ln703_16_fu_1536_p1();
    void thread_sext_ln703_17_fu_1539_p1();
    void thread_sext_ln703_18_fu_1453_p1();
    void thread_sext_ln703_19_fu_1463_p1();
    void thread_sext_ln703_20_fu_1542_p1();
    void thread_sext_ln703_21_fu_1551_p1();
    void thread_sext_ln703_22_fu_1580_p1();
    void thread_sext_ln703_4_fu_1561_p1();
    void thread_sext_ln703_5_fu_1497_p1();
    void thread_sext_ln703_6_fu_1506_p1();
    void thread_sext_ln703_7_fu_1564_p1();
    void thread_sext_ln703_8_fu_1573_p1();
    void thread_sext_ln703_9_fu_1518_p1();
    void thread_sext_ln703_fu_1485_p1();
    void thread_sext_ln728_10_fu_1113_p1();
    void thread_sext_ln728_11_fu_1149_p1();
    void thread_sext_ln728_12_fu_1196_p1();
    void thread_sext_ln728_13_fu_664_p1();
    void thread_sext_ln728_14_fu_1241_p1();
    void thread_sext_ln728_15_fu_1327_p1();
    void thread_sext_ln728_1_fu_1164_p1();
    void thread_sext_ln728_2_fu_1215_p1();
    void thread_sext_ln728_3_fu_1226_p1();
    void thread_sext_ln728_4_fu_1481_p1();
    void thread_sext_ln728_5_fu_776_p1();
    void thread_sext_ln728_6_fu_1256_p1();
    void thread_sext_ln728_7_fu_1291_p1();
    void thread_sext_ln728_8_fu_1316_p1();
    void thread_sext_ln728_9_fu_1052_p1();
    void thread_sext_ln728_fu_531_p1();
    void thread_shl_ln1118_10_fu_698_p3();
    void thread_shl_ln1118_11_fu_720_p3();
    void thread_shl_ln1118_12_fu_738_p3();
    void thread_shl_ln1118_13_fu_750_p3();
    void thread_shl_ln1118_14_fu_784_p3();
    void thread_shl_ln1118_15_fu_824_p3();
    void thread_shl_ln1118_16_fu_864_p3();
    void thread_shl_ln1118_17_fu_910_p3();
    void thread_shl_ln1118_18_fu_960_p3();
    void thread_shl_ln1118_19_fu_978_p3();
    void thread_shl_ln1118_1_fu_1063_p3();
    void thread_shl_ln1118_2_fu_603_p3();
    void thread_shl_ln1118_3_fu_638_p3();
    void thread_shl_ln1118_4_fu_842_p3();
    void thread_shl_ln1118_5_fu_886_p3();
    void thread_shl_ln1118_6_fu_1074_p3();
    void thread_shl_ln1118_7_fu_1124_p3();
    void thread_shl_ln1118_8_fu_547_p3();
    void thread_shl_ln1118_9_fu_569_p3();
    void thread_shl_ln1118_s_fu_1171_p3();
    void thread_shl_ln1_fu_1034_p3();
    void thread_shl_ln728_10_fu_768_p3();
    void thread_shl_ln728_11_fu_802_p3();
    void thread_shl_ln728_12_fu_1249_p3();
    void thread_shl_ln728_13_fu_1263_p3();
    void thread_shl_ln728_14_fu_1283_p3();
    void thread_shl_ln728_15_fu_1295_p3();
    void thread_shl_ln728_16_fu_898_p3();
    void thread_shl_ln728_17_fu_1309_p3();
    void thread_shl_ln728_18_fu_1335_p3();
    void thread_shl_ln728_19_fu_1342_p3();
    void thread_shl_ln728_1_fu_676_p3();
    void thread_shl_ln728_20_fu_996_p3();
    void thread_shl_ln728_2_fu_1091_p3();
    void thread_shl_ln728_3_fu_1208_p3();
    void thread_shl_ln728_4_fu_523_p3();
    void thread_shl_ln728_5_fu_1219_p3();
    void thread_shl_ln728_6_fu_535_p3();
    void thread_shl_ln728_7_fu_1157_p3();
    void thread_shl_ln728_8_fu_1473_p3();
    void thread_shl_ln728_9_fu_587_p3();
    void thread_shl_ln728_s_fu_621_p3();
    void thread_shl_ln_fu_483_p3();
    void thread_sub_ln1118_10_fu_762_p2();
    void thread_sub_ln1118_11_fu_814_p2();
    void thread_sub_ln1118_12_fu_836_p2();
    void thread_sub_ln1118_13_fu_854_p2();
    void thread_sub_ln1118_14_fu_1277_p2();
    void thread_sub_ln1118_15_fu_922_p2();
    void thread_sub_ln1118_16_fu_928_p2();
    void thread_sub_ln1118_17_fu_990_p2();
    void thread_sub_ln1118_18_fu_517_p2();
    void thread_sub_ln1118_19_fu_692_p2();
    void thread_sub_ln1118_1_fu_1085_p2();
    void thread_sub_ln1118_20_fu_954_p2();
    void thread_sub_ln1118_2_fu_1099_p2();
    void thread_sub_ln1118_3_fu_1135_p2();
    void thread_sub_ln1118_4_fu_559_p2();
    void thread_sub_ln1118_5_fu_581_p2();
    void thread_sub_ln1118_6_fu_1182_p2();
    void thread_sub_ln1118_7_fu_650_p2();
    void thread_sub_ln1118_8_fu_710_p2();
    void thread_sub_ln1118_9_fu_732_p2();
    void thread_sub_ln1118_fu_495_p2();
    void thread_tmp_1_fu_1105_p3();
    void thread_tmp_2_fu_505_p3();
    void thread_tmp_3_fu_1141_p3();
    void thread_tmp_4_fu_1188_p3();
    void thread_tmp_5_fu_656_p3();
    void thread_tmp_7_fu_1234_p3();
    void thread_tmp_8_fu_1320_p3();
    void thread_tmp_9_fu_942_p3();
    void thread_tmp_fu_1045_p3();
    void thread_zext_ln1118_10_fu_577_p1();
    void thread_zext_ln1118_11_fu_1168_p1();
    void thread_zext_ln1118_12_fu_1178_p1();
    void thread_zext_ln1118_13_fu_599_p1();
    void thread_zext_ln1118_14_fu_611_p1();
    void thread_zext_ln1118_15_fu_634_p1();
    void thread_zext_ln1118_16_fu_646_p1();
    void thread_zext_ln1118_17_fu_672_p1();
    void thread_zext_ln1118_18_fu_688_p1();
    void thread_zext_ln1118_19_fu_706_p1();
    void thread_zext_ln1118_1_fu_491_p1();
    void thread_zext_ln1118_20_fu_716_p1();
    void thread_zext_ln1118_21_fu_728_p1();
    void thread_zext_ln1118_22_fu_746_p1();
    void thread_zext_ln1118_23_fu_758_p1();
    void thread_zext_ln1118_24_fu_780_p1();
    void thread_zext_ln1118_25_fu_792_p1();
    void thread_zext_ln1118_26_fu_832_p1();
    void thread_zext_ln1118_27_fu_1260_p1();
    void thread_zext_ln1118_28_fu_850_p1();
    void thread_zext_ln1118_29_fu_860_p1();
    void thread_zext_ln1118_2_fu_501_p1();
    void thread_zext_ln1118_30_fu_872_p1();
    void thread_zext_ln1118_31_fu_882_p1();
    void thread_zext_ln1118_32_fu_894_p1();
    void thread_zext_ln1118_33_fu_906_p1();
    void thread_zext_ln1118_34_fu_918_p1();
    void thread_zext_ln1118_35_fu_934_p1();
    void thread_zext_ln1118_36_fu_938_p1();
    void thread_zext_ln1118_37_fu_950_p1();
    void thread_zext_ln1118_38_fu_968_p1();
    void thread_zext_ln1118_39_fu_986_p1();
    void thread_zext_ln1118_3_fu_1060_p1();
    void thread_zext_ln1118_4_fu_1070_p1();
    void thread_zext_ln1118_5_fu_1081_p1();
    void thread_zext_ln1118_6_fu_513_p1();
    void thread_zext_ln1118_7_fu_1121_p1();
    void thread_zext_ln1118_8_fu_1131_p1();
    void thread_zext_ln1118_9_fu_555_p1();
    void thread_zext_ln1118_fu_479_p1();
    void thread_zext_ln703_1_fu_1488_p1();
    void thread_zext_ln703_2_fu_1515_p1();
    void thread_zext_ln703_3_fu_1416_p1();
    void thread_zext_ln703_fu_1355_p1();
    void thread_zext_ln728_10_fu_1245_p1();
    void thread_zext_ln728_11_fu_810_p1();
    void thread_zext_ln728_12_fu_1270_p1();
    void thread_zext_ln728_13_fu_1302_p1();
    void thread_zext_ln728_14_fu_1306_p1();
    void thread_zext_ln728_15_fu_1331_p1();
    void thread_zext_ln728_1_fu_1056_p1();
    void thread_zext_ln728_2_fu_1117_p1();
    void thread_zext_ln728_3_fu_1153_p1();
    void thread_zext_ln728_4_fu_543_p1();
    void thread_zext_ln728_5_fu_1200_p1();
    void thread_zext_ln728_6_fu_595_p1();
    void thread_zext_ln728_7_fu_1204_p1();
    void thread_zext_ln728_8_fu_668_p1();
    void thread_zext_ln728_9_fu_684_p1();
    void thread_zext_ln728_fu_1041_p1();
};

}

using namespace ap_rtl;

#endif