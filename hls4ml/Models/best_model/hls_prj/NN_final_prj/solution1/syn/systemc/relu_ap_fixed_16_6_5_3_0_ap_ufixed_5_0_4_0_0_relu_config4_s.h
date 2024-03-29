// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_ap_fixed_16_6_5_3_0_ap_ufixed_5_0_4_0_0_relu_config4_s_HH_
#define _relu_ap_fixed_16_6_5_3_0_ap_ufixed_5_0_4_0_0_relu_config4_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu_ap_fixed_16_6_5_3_0_ap_ufixed_5_0_4_0_0_relu_config4_s : public sc_module {
    // Port declarations 29
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > data_1_V_read;
    sc_in< sc_lv<16> > data_5_V_read;
    sc_in< sc_lv<16> > data_6_V_read;
    sc_in< sc_lv<16> > data_7_V_read;
    sc_in< sc_lv<16> > data_8_V_read;
    sc_in< sc_lv<16> > data_9_V_read;
    sc_in< sc_lv<16> > data_11_V_read;
    sc_in< sc_lv<16> > data_12_V_read;
    sc_in< sc_lv<16> > data_13_V_read;
    sc_in< sc_lv<16> > data_14_V_read;
    sc_in< sc_lv<16> > data_15_V_read;
    sc_in< sc_lv<16> > data_16_V_read;
    sc_in< sc_lv<16> > data_18_V_read;
    sc_in< sc_lv<16> > data_19_V_read;
    sc_out< sc_lv<5> > ap_return_0;
    sc_out< sc_lv<5> > ap_return_1;
    sc_out< sc_lv<5> > ap_return_2;
    sc_out< sc_lv<5> > ap_return_3;
    sc_out< sc_lv<5> > ap_return_4;
    sc_out< sc_lv<5> > ap_return_5;
    sc_out< sc_lv<5> > ap_return_6;
    sc_out< sc_lv<5> > ap_return_7;
    sc_out< sc_lv<5> > ap_return_8;
    sc_out< sc_lv<5> > ap_return_9;
    sc_out< sc_lv<5> > ap_return_10;
    sc_out< sc_lv<5> > ap_return_11;
    sc_out< sc_lv<5> > ap_return_12;
    sc_out< sc_lv<5> > ap_return_13;


    // Module declarations
    relu_ap_fixed_16_6_5_3_0_ap_ufixed_5_0_4_0_0_relu_config4_s(sc_module_name name);
    SC_HAS_PROCESS(relu_ap_fixed_16_6_5_3_0_ap_ufixed_5_0_4_0_0_relu_config4_s);

    ~relu_ap_fixed_16_6_5_3_0_ap_ufixed_5_0_4_0_0_relu_config4_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<4> > trunc_ln718_fu_182_p1;
    sc_signal< sc_lv<1> > icmp_ln718_fu_186_p2;
    sc_signal< sc_lv<1> > tmp_fu_174_p3;
    sc_signal< sc_lv<1> > tmp_73_fu_206_p3;
    sc_signal< sc_lv<1> > or_ln412_fu_200_p2;
    sc_signal< sc_lv<1> > and_ln415_1_fu_214_p2;
    sc_signal< sc_lv<5> > trunc_ln_fu_164_p4;
    sc_signal< sc_lv<5> > zext_ln415_fu_220_p1;
    sc_signal< sc_lv<5> > add_ln415_fu_224_p2;
    sc_signal< sc_lv<1> > tmp_74_fu_230_p3;
    sc_signal< sc_lv<1> > tmp_72_fu_192_p3;
    sc_signal< sc_lv<1> > xor_ln416_fu_238_p2;
    sc_signal< sc_lv<6> > p_Result_16_1_fu_250_p4;
    sc_signal< sc_lv<1> > and_ln416_fu_244_p2;
    sc_signal< sc_lv<1> > icmp_ln879_fu_260_p2;
    sc_signal< sc_lv<1> > icmp_ln768_fu_266_p2;
    sc_signal< sc_lv<1> > select_ln777_fu_272_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_1_fu_158_p2;
    sc_signal< sc_lv<5> > select_ln340_1_fu_280_p3;
    sc_signal< sc_lv<4> > trunc_ln718_16_fu_320_p1;
    sc_signal< sc_lv<1> > icmp_ln718_16_fu_324_p2;
    sc_signal< sc_lv<1> > tmp_75_fu_312_p3;
    sc_signal< sc_lv<1> > tmp_77_fu_344_p3;
    sc_signal< sc_lv<1> > or_ln412_16_fu_338_p2;
    sc_signal< sc_lv<1> > and_ln415_5_fu_352_p2;
    sc_signal< sc_lv<5> > trunc_ln708_s_fu_302_p4;
    sc_signal< sc_lv<5> > zext_ln415_16_fu_358_p1;
    sc_signal< sc_lv<5> > add_ln415_16_fu_362_p2;
    sc_signal< sc_lv<1> > tmp_78_fu_368_p3;
    sc_signal< sc_lv<1> > tmp_76_fu_330_p3;
    sc_signal< sc_lv<1> > xor_ln416_16_fu_376_p2;
    sc_signal< sc_lv<6> > p_Result_16_5_fu_388_p4;
    sc_signal< sc_lv<1> > and_ln416_16_fu_382_p2;
    sc_signal< sc_lv<1> > icmp_ln879_16_fu_398_p2;
    sc_signal< sc_lv<1> > icmp_ln768_16_fu_404_p2;
    sc_signal< sc_lv<1> > select_ln777_16_fu_410_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_5_fu_296_p2;
    sc_signal< sc_lv<5> > select_ln340_5_fu_418_p3;
    sc_signal< sc_lv<4> > trunc_ln718_17_fu_458_p1;
    sc_signal< sc_lv<1> > icmp_ln718_17_fu_462_p2;
    sc_signal< sc_lv<1> > tmp_79_fu_450_p3;
    sc_signal< sc_lv<1> > tmp_81_fu_482_p3;
    sc_signal< sc_lv<1> > or_ln412_17_fu_476_p2;
    sc_signal< sc_lv<1> > and_ln415_6_fu_490_p2;
    sc_signal< sc_lv<5> > trunc_ln708_15_fu_440_p4;
    sc_signal< sc_lv<5> > zext_ln415_17_fu_496_p1;
    sc_signal< sc_lv<5> > add_ln415_17_fu_500_p2;
    sc_signal< sc_lv<1> > tmp_82_fu_506_p3;
    sc_signal< sc_lv<1> > tmp_80_fu_468_p3;
    sc_signal< sc_lv<1> > xor_ln416_17_fu_514_p2;
    sc_signal< sc_lv<6> > p_Result_16_6_fu_526_p4;
    sc_signal< sc_lv<1> > and_ln416_17_fu_520_p2;
    sc_signal< sc_lv<1> > icmp_ln879_17_fu_536_p2;
    sc_signal< sc_lv<1> > icmp_ln768_17_fu_542_p2;
    sc_signal< sc_lv<1> > select_ln777_17_fu_548_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_6_fu_434_p2;
    sc_signal< sc_lv<5> > select_ln340_6_fu_556_p3;
    sc_signal< sc_lv<4> > trunc_ln718_18_fu_596_p1;
    sc_signal< sc_lv<1> > icmp_ln718_18_fu_600_p2;
    sc_signal< sc_lv<1> > tmp_83_fu_588_p3;
    sc_signal< sc_lv<1> > tmp_85_fu_620_p3;
    sc_signal< sc_lv<1> > or_ln412_18_fu_614_p2;
    sc_signal< sc_lv<1> > and_ln415_7_fu_628_p2;
    sc_signal< sc_lv<5> > trunc_ln708_16_fu_578_p4;
    sc_signal< sc_lv<5> > zext_ln415_18_fu_634_p1;
    sc_signal< sc_lv<5> > add_ln415_18_fu_638_p2;
    sc_signal< sc_lv<1> > tmp_86_fu_644_p3;
    sc_signal< sc_lv<1> > tmp_84_fu_606_p3;
    sc_signal< sc_lv<1> > xor_ln416_18_fu_652_p2;
    sc_signal< sc_lv<6> > p_Result_16_7_fu_664_p4;
    sc_signal< sc_lv<1> > and_ln416_18_fu_658_p2;
    sc_signal< sc_lv<1> > icmp_ln879_18_fu_674_p2;
    sc_signal< sc_lv<1> > icmp_ln768_18_fu_680_p2;
    sc_signal< sc_lv<1> > select_ln777_18_fu_686_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_7_fu_572_p2;
    sc_signal< sc_lv<5> > select_ln340_7_fu_694_p3;
    sc_signal< sc_lv<4> > trunc_ln718_19_fu_734_p1;
    sc_signal< sc_lv<1> > icmp_ln718_19_fu_738_p2;
    sc_signal< sc_lv<1> > tmp_87_fu_726_p3;
    sc_signal< sc_lv<1> > tmp_89_fu_758_p3;
    sc_signal< sc_lv<1> > or_ln412_19_fu_752_p2;
    sc_signal< sc_lv<1> > and_ln415_8_fu_766_p2;
    sc_signal< sc_lv<5> > trunc_ln708_17_fu_716_p4;
    sc_signal< sc_lv<5> > zext_ln415_19_fu_772_p1;
    sc_signal< sc_lv<5> > add_ln415_19_fu_776_p2;
    sc_signal< sc_lv<1> > tmp_90_fu_782_p3;
    sc_signal< sc_lv<1> > tmp_88_fu_744_p3;
    sc_signal< sc_lv<1> > xor_ln416_19_fu_790_p2;
    sc_signal< sc_lv<6> > p_Result_16_8_fu_802_p4;
    sc_signal< sc_lv<1> > and_ln416_19_fu_796_p2;
    sc_signal< sc_lv<1> > icmp_ln879_19_fu_812_p2;
    sc_signal< sc_lv<1> > icmp_ln768_19_fu_818_p2;
    sc_signal< sc_lv<1> > select_ln777_19_fu_824_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_8_fu_710_p2;
    sc_signal< sc_lv<5> > select_ln340_8_fu_832_p3;
    sc_signal< sc_lv<4> > trunc_ln718_20_fu_872_p1;
    sc_signal< sc_lv<1> > icmp_ln718_20_fu_876_p2;
    sc_signal< sc_lv<1> > tmp_91_fu_864_p3;
    sc_signal< sc_lv<1> > tmp_93_fu_896_p3;
    sc_signal< sc_lv<1> > or_ln412_20_fu_890_p2;
    sc_signal< sc_lv<1> > and_ln415_9_fu_904_p2;
    sc_signal< sc_lv<5> > trunc_ln708_18_fu_854_p4;
    sc_signal< sc_lv<5> > zext_ln415_20_fu_910_p1;
    sc_signal< sc_lv<5> > add_ln415_20_fu_914_p2;
    sc_signal< sc_lv<1> > tmp_94_fu_920_p3;
    sc_signal< sc_lv<1> > tmp_92_fu_882_p3;
    sc_signal< sc_lv<1> > xor_ln416_20_fu_928_p2;
    sc_signal< sc_lv<6> > p_Result_16_9_fu_940_p4;
    sc_signal< sc_lv<1> > and_ln416_20_fu_934_p2;
    sc_signal< sc_lv<1> > icmp_ln879_20_fu_950_p2;
    sc_signal< sc_lv<1> > icmp_ln768_20_fu_956_p2;
    sc_signal< sc_lv<1> > select_ln777_20_fu_962_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_9_fu_848_p2;
    sc_signal< sc_lv<5> > select_ln340_9_fu_970_p3;
    sc_signal< sc_lv<4> > trunc_ln718_21_fu_1010_p1;
    sc_signal< sc_lv<1> > icmp_ln718_21_fu_1014_p2;
    sc_signal< sc_lv<1> > tmp_95_fu_1002_p3;
    sc_signal< sc_lv<1> > tmp_97_fu_1034_p3;
    sc_signal< sc_lv<1> > or_ln412_21_fu_1028_p2;
    sc_signal< sc_lv<1> > and_ln415_11_fu_1042_p2;
    sc_signal< sc_lv<5> > trunc_ln708_19_fu_992_p4;
    sc_signal< sc_lv<5> > zext_ln415_21_fu_1048_p1;
    sc_signal< sc_lv<5> > add_ln415_21_fu_1052_p2;
    sc_signal< sc_lv<1> > tmp_98_fu_1058_p3;
    sc_signal< sc_lv<1> > tmp_96_fu_1020_p3;
    sc_signal< sc_lv<1> > xor_ln416_21_fu_1066_p2;
    sc_signal< sc_lv<6> > p_Result_16_s_fu_1078_p4;
    sc_signal< sc_lv<1> > and_ln416_21_fu_1072_p2;
    sc_signal< sc_lv<1> > icmp_ln879_21_fu_1088_p2;
    sc_signal< sc_lv<1> > icmp_ln768_21_fu_1094_p2;
    sc_signal< sc_lv<1> > select_ln777_21_fu_1100_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_11_fu_986_p2;
    sc_signal< sc_lv<5> > select_ln340_11_fu_1108_p3;
    sc_signal< sc_lv<4> > trunc_ln718_22_fu_1148_p1;
    sc_signal< sc_lv<1> > icmp_ln718_22_fu_1152_p2;
    sc_signal< sc_lv<1> > tmp_99_fu_1140_p3;
    sc_signal< sc_lv<1> > tmp_101_fu_1172_p3;
    sc_signal< sc_lv<1> > or_ln412_22_fu_1166_p2;
    sc_signal< sc_lv<1> > and_ln415_12_fu_1180_p2;
    sc_signal< sc_lv<5> > trunc_ln708_20_fu_1130_p4;
    sc_signal< sc_lv<5> > zext_ln415_22_fu_1186_p1;
    sc_signal< sc_lv<5> > add_ln415_22_fu_1190_p2;
    sc_signal< sc_lv<1> > tmp_102_fu_1196_p3;
    sc_signal< sc_lv<1> > tmp_100_fu_1158_p3;
    sc_signal< sc_lv<1> > xor_ln416_22_fu_1204_p2;
    sc_signal< sc_lv<6> > p_Result_16_2_fu_1216_p4;
    sc_signal< sc_lv<1> > and_ln416_22_fu_1210_p2;
    sc_signal< sc_lv<1> > icmp_ln879_22_fu_1226_p2;
    sc_signal< sc_lv<1> > icmp_ln768_22_fu_1232_p2;
    sc_signal< sc_lv<1> > select_ln777_22_fu_1238_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_12_fu_1124_p2;
    sc_signal< sc_lv<5> > select_ln340_12_fu_1246_p3;
    sc_signal< sc_lv<4> > trunc_ln718_23_fu_1286_p1;
    sc_signal< sc_lv<1> > icmp_ln718_23_fu_1290_p2;
    sc_signal< sc_lv<1> > tmp_103_fu_1278_p3;
    sc_signal< sc_lv<1> > tmp_105_fu_1310_p3;
    sc_signal< sc_lv<1> > or_ln412_23_fu_1304_p2;
    sc_signal< sc_lv<1> > and_ln415_13_fu_1318_p2;
    sc_signal< sc_lv<5> > trunc_ln708_21_fu_1268_p4;
    sc_signal< sc_lv<5> > zext_ln415_23_fu_1324_p1;
    sc_signal< sc_lv<5> > add_ln415_23_fu_1328_p2;
    sc_signal< sc_lv<1> > tmp_106_fu_1334_p3;
    sc_signal< sc_lv<1> > tmp_104_fu_1296_p3;
    sc_signal< sc_lv<1> > xor_ln416_23_fu_1342_p2;
    sc_signal< sc_lv<6> > p_Result_16_3_fu_1354_p4;
    sc_signal< sc_lv<1> > and_ln416_23_fu_1348_p2;
    sc_signal< sc_lv<1> > icmp_ln879_23_fu_1364_p2;
    sc_signal< sc_lv<1> > icmp_ln768_23_fu_1370_p2;
    sc_signal< sc_lv<1> > select_ln777_23_fu_1376_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_13_fu_1262_p2;
    sc_signal< sc_lv<5> > select_ln340_13_fu_1384_p3;
    sc_signal< sc_lv<4> > trunc_ln718_24_fu_1424_p1;
    sc_signal< sc_lv<1> > icmp_ln718_24_fu_1428_p2;
    sc_signal< sc_lv<1> > tmp_107_fu_1416_p3;
    sc_signal< sc_lv<1> > tmp_109_fu_1448_p3;
    sc_signal< sc_lv<1> > or_ln412_24_fu_1442_p2;
    sc_signal< sc_lv<1> > and_ln415_14_fu_1456_p2;
    sc_signal< sc_lv<5> > trunc_ln708_22_fu_1406_p4;
    sc_signal< sc_lv<5> > zext_ln415_24_fu_1462_p1;
    sc_signal< sc_lv<5> > add_ln415_24_fu_1466_p2;
    sc_signal< sc_lv<1> > tmp_110_fu_1472_p3;
    sc_signal< sc_lv<1> > tmp_108_fu_1434_p3;
    sc_signal< sc_lv<1> > xor_ln416_24_fu_1480_p2;
    sc_signal< sc_lv<6> > p_Result_16_4_fu_1492_p4;
    sc_signal< sc_lv<1> > and_ln416_24_fu_1486_p2;
    sc_signal< sc_lv<1> > icmp_ln879_24_fu_1502_p2;
    sc_signal< sc_lv<1> > icmp_ln768_24_fu_1508_p2;
    sc_signal< sc_lv<1> > select_ln777_24_fu_1514_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_14_fu_1400_p2;
    sc_signal< sc_lv<5> > select_ln340_14_fu_1522_p3;
    sc_signal< sc_lv<4> > trunc_ln718_25_fu_1562_p1;
    sc_signal< sc_lv<1> > icmp_ln718_25_fu_1566_p2;
    sc_signal< sc_lv<1> > tmp_111_fu_1554_p3;
    sc_signal< sc_lv<1> > tmp_113_fu_1586_p3;
    sc_signal< sc_lv<1> > or_ln412_25_fu_1580_p2;
    sc_signal< sc_lv<1> > and_ln415_15_fu_1594_p2;
    sc_signal< sc_lv<5> > trunc_ln708_23_fu_1544_p4;
    sc_signal< sc_lv<5> > zext_ln415_25_fu_1600_p1;
    sc_signal< sc_lv<5> > add_ln415_25_fu_1604_p2;
    sc_signal< sc_lv<1> > tmp_114_fu_1610_p3;
    sc_signal< sc_lv<1> > tmp_112_fu_1572_p3;
    sc_signal< sc_lv<1> > xor_ln416_25_fu_1618_p2;
    sc_signal< sc_lv<6> > p_Result_16_10_fu_1630_p4;
    sc_signal< sc_lv<1> > and_ln416_25_fu_1624_p2;
    sc_signal< sc_lv<1> > icmp_ln879_25_fu_1640_p2;
    sc_signal< sc_lv<1> > icmp_ln768_25_fu_1646_p2;
    sc_signal< sc_lv<1> > select_ln777_25_fu_1652_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_15_fu_1538_p2;
    sc_signal< sc_lv<5> > select_ln340_15_fu_1660_p3;
    sc_signal< sc_lv<4> > trunc_ln718_26_fu_1700_p1;
    sc_signal< sc_lv<1> > icmp_ln718_26_fu_1704_p2;
    sc_signal< sc_lv<1> > tmp_115_fu_1692_p3;
    sc_signal< sc_lv<1> > tmp_117_fu_1724_p3;
    sc_signal< sc_lv<1> > or_ln412_26_fu_1718_p2;
    sc_signal< sc_lv<1> > and_ln415_fu_1732_p2;
    sc_signal< sc_lv<5> > trunc_ln708_24_fu_1682_p4;
    sc_signal< sc_lv<5> > zext_ln415_26_fu_1738_p1;
    sc_signal< sc_lv<5> > add_ln415_26_fu_1742_p2;
    sc_signal< sc_lv<1> > tmp_118_fu_1748_p3;
    sc_signal< sc_lv<1> > tmp_116_fu_1710_p3;
    sc_signal< sc_lv<1> > xor_ln416_26_fu_1756_p2;
    sc_signal< sc_lv<6> > p_Result_16_11_fu_1768_p4;
    sc_signal< sc_lv<1> > and_ln416_26_fu_1762_p2;
    sc_signal< sc_lv<1> > icmp_ln879_26_fu_1778_p2;
    sc_signal< sc_lv<1> > icmp_ln768_26_fu_1784_p2;
    sc_signal< sc_lv<1> > select_ln777_26_fu_1790_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_fu_1676_p2;
    sc_signal< sc_lv<5> > select_ln340_16_fu_1798_p3;
    sc_signal< sc_lv<4> > trunc_ln718_27_fu_1838_p1;
    sc_signal< sc_lv<1> > icmp_ln718_27_fu_1842_p2;
    sc_signal< sc_lv<1> > tmp_119_fu_1830_p3;
    sc_signal< sc_lv<1> > tmp_121_fu_1862_p3;
    sc_signal< sc_lv<1> > or_ln412_27_fu_1856_p2;
    sc_signal< sc_lv<1> > and_ln415_16_fu_1870_p2;
    sc_signal< sc_lv<5> > trunc_ln708_25_fu_1820_p4;
    sc_signal< sc_lv<5> > zext_ln415_27_fu_1876_p1;
    sc_signal< sc_lv<5> > add_ln415_27_fu_1880_p2;
    sc_signal< sc_lv<1> > tmp_122_fu_1886_p3;
    sc_signal< sc_lv<1> > tmp_120_fu_1848_p3;
    sc_signal< sc_lv<1> > xor_ln416_27_fu_1894_p2;
    sc_signal< sc_lv<6> > p_Result_16_12_fu_1906_p4;
    sc_signal< sc_lv<1> > and_ln416_27_fu_1900_p2;
    sc_signal< sc_lv<1> > icmp_ln879_27_fu_1916_p2;
    sc_signal< sc_lv<1> > icmp_ln768_27_fu_1922_p2;
    sc_signal< sc_lv<1> > select_ln777_27_fu_1928_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_16_fu_1814_p2;
    sc_signal< sc_lv<5> > select_ln340_fu_1936_p3;
    sc_signal< sc_lv<4> > trunc_ln718_28_fu_1976_p1;
    sc_signal< sc_lv<1> > icmp_ln718_28_fu_1980_p2;
    sc_signal< sc_lv<1> > tmp_123_fu_1968_p3;
    sc_signal< sc_lv<1> > tmp_125_fu_2000_p3;
    sc_signal< sc_lv<1> > or_ln412_28_fu_1994_p2;
    sc_signal< sc_lv<1> > and_ln415_17_fu_2008_p2;
    sc_signal< sc_lv<5> > trunc_ln708_26_fu_1958_p4;
    sc_signal< sc_lv<5> > zext_ln415_28_fu_2014_p1;
    sc_signal< sc_lv<5> > add_ln415_28_fu_2018_p2;
    sc_signal< sc_lv<1> > tmp_126_fu_2024_p3;
    sc_signal< sc_lv<1> > tmp_124_fu_1986_p3;
    sc_signal< sc_lv<1> > xor_ln416_28_fu_2032_p2;
    sc_signal< sc_lv<6> > p_Result_16_13_fu_2044_p4;
    sc_signal< sc_lv<1> > and_ln416_28_fu_2038_p2;
    sc_signal< sc_lv<1> > icmp_ln879_28_fu_2054_p2;
    sc_signal< sc_lv<1> > icmp_ln768_28_fu_2060_p2;
    sc_signal< sc_lv<1> > select_ln777_28_fu_2066_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_17_fu_1952_p2;
    sc_signal< sc_lv<5> > select_ln340_17_fu_2074_p3;
    sc_signal< sc_lv<5> > select_ln1494_fu_288_p3;
    sc_signal< sc_lv<5> > select_ln1494_16_fu_426_p3;
    sc_signal< sc_lv<5> > select_ln1494_17_fu_564_p3;
    sc_signal< sc_lv<5> > select_ln1494_18_fu_702_p3;
    sc_signal< sc_lv<5> > select_ln1494_19_fu_840_p3;
    sc_signal< sc_lv<5> > select_ln1494_20_fu_978_p3;
    sc_signal< sc_lv<5> > select_ln1494_21_fu_1116_p3;
    sc_signal< sc_lv<5> > select_ln1494_22_fu_1254_p3;
    sc_signal< sc_lv<5> > select_ln1494_23_fu_1392_p3;
    sc_signal< sc_lv<5> > select_ln1494_24_fu_1530_p3;
    sc_signal< sc_lv<5> > select_ln1494_25_fu_1668_p3;
    sc_signal< sc_lv<5> > select_ln1494_26_fu_1806_p3;
    sc_signal< sc_lv<5> > select_ln1494_27_fu_1944_p3;
    sc_signal< sc_lv<5> > select_ln1494_28_fu_2082_p3;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_add_ln415_16_fu_362_p2();
    void thread_add_ln415_17_fu_500_p2();
    void thread_add_ln415_18_fu_638_p2();
    void thread_add_ln415_19_fu_776_p2();
    void thread_add_ln415_20_fu_914_p2();
    void thread_add_ln415_21_fu_1052_p2();
    void thread_add_ln415_22_fu_1190_p2();
    void thread_add_ln415_23_fu_1328_p2();
    void thread_add_ln415_24_fu_1466_p2();
    void thread_add_ln415_25_fu_1604_p2();
    void thread_add_ln415_26_fu_1742_p2();
    void thread_add_ln415_27_fu_1880_p2();
    void thread_add_ln415_28_fu_2018_p2();
    void thread_add_ln415_fu_224_p2();
    void thread_and_ln415_11_fu_1042_p2();
    void thread_and_ln415_12_fu_1180_p2();
    void thread_and_ln415_13_fu_1318_p2();
    void thread_and_ln415_14_fu_1456_p2();
    void thread_and_ln415_15_fu_1594_p2();
    void thread_and_ln415_16_fu_1870_p2();
    void thread_and_ln415_17_fu_2008_p2();
    void thread_and_ln415_1_fu_214_p2();
    void thread_and_ln415_5_fu_352_p2();
    void thread_and_ln415_6_fu_490_p2();
    void thread_and_ln415_7_fu_628_p2();
    void thread_and_ln415_8_fu_766_p2();
    void thread_and_ln415_9_fu_904_p2();
    void thread_and_ln415_fu_1732_p2();
    void thread_and_ln416_16_fu_382_p2();
    void thread_and_ln416_17_fu_520_p2();
    void thread_and_ln416_18_fu_658_p2();
    void thread_and_ln416_19_fu_796_p2();
    void thread_and_ln416_20_fu_934_p2();
    void thread_and_ln416_21_fu_1072_p2();
    void thread_and_ln416_22_fu_1210_p2();
    void thread_and_ln416_23_fu_1348_p2();
    void thread_and_ln416_24_fu_1486_p2();
    void thread_and_ln416_25_fu_1624_p2();
    void thread_and_ln416_26_fu_1762_p2();
    void thread_and_ln416_27_fu_1900_p2();
    void thread_and_ln416_28_fu_2038_p2();
    void thread_and_ln416_fu_244_p2();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_icmp_ln1494_11_fu_986_p2();
    void thread_icmp_ln1494_12_fu_1124_p2();
    void thread_icmp_ln1494_13_fu_1262_p2();
    void thread_icmp_ln1494_14_fu_1400_p2();
    void thread_icmp_ln1494_15_fu_1538_p2();
    void thread_icmp_ln1494_16_fu_1814_p2();
    void thread_icmp_ln1494_17_fu_1952_p2();
    void thread_icmp_ln1494_1_fu_158_p2();
    void thread_icmp_ln1494_5_fu_296_p2();
    void thread_icmp_ln1494_6_fu_434_p2();
    void thread_icmp_ln1494_7_fu_572_p2();
    void thread_icmp_ln1494_8_fu_710_p2();
    void thread_icmp_ln1494_9_fu_848_p2();
    void thread_icmp_ln1494_fu_1676_p2();
    void thread_icmp_ln718_16_fu_324_p2();
    void thread_icmp_ln718_17_fu_462_p2();
    void thread_icmp_ln718_18_fu_600_p2();
    void thread_icmp_ln718_19_fu_738_p2();
    void thread_icmp_ln718_20_fu_876_p2();
    void thread_icmp_ln718_21_fu_1014_p2();
    void thread_icmp_ln718_22_fu_1152_p2();
    void thread_icmp_ln718_23_fu_1290_p2();
    void thread_icmp_ln718_24_fu_1428_p2();
    void thread_icmp_ln718_25_fu_1566_p2();
    void thread_icmp_ln718_26_fu_1704_p2();
    void thread_icmp_ln718_27_fu_1842_p2();
    void thread_icmp_ln718_28_fu_1980_p2();
    void thread_icmp_ln718_fu_186_p2();
    void thread_icmp_ln768_16_fu_404_p2();
    void thread_icmp_ln768_17_fu_542_p2();
    void thread_icmp_ln768_18_fu_680_p2();
    void thread_icmp_ln768_19_fu_818_p2();
    void thread_icmp_ln768_20_fu_956_p2();
    void thread_icmp_ln768_21_fu_1094_p2();
    void thread_icmp_ln768_22_fu_1232_p2();
    void thread_icmp_ln768_23_fu_1370_p2();
    void thread_icmp_ln768_24_fu_1508_p2();
    void thread_icmp_ln768_25_fu_1646_p2();
    void thread_icmp_ln768_26_fu_1784_p2();
    void thread_icmp_ln768_27_fu_1922_p2();
    void thread_icmp_ln768_28_fu_2060_p2();
    void thread_icmp_ln768_fu_266_p2();
    void thread_icmp_ln879_16_fu_398_p2();
    void thread_icmp_ln879_17_fu_536_p2();
    void thread_icmp_ln879_18_fu_674_p2();
    void thread_icmp_ln879_19_fu_812_p2();
    void thread_icmp_ln879_20_fu_950_p2();
    void thread_icmp_ln879_21_fu_1088_p2();
    void thread_icmp_ln879_22_fu_1226_p2();
    void thread_icmp_ln879_23_fu_1364_p2();
    void thread_icmp_ln879_24_fu_1502_p2();
    void thread_icmp_ln879_25_fu_1640_p2();
    void thread_icmp_ln879_26_fu_1778_p2();
    void thread_icmp_ln879_27_fu_1916_p2();
    void thread_icmp_ln879_28_fu_2054_p2();
    void thread_icmp_ln879_fu_260_p2();
    void thread_or_ln412_16_fu_338_p2();
    void thread_or_ln412_17_fu_476_p2();
    void thread_or_ln412_18_fu_614_p2();
    void thread_or_ln412_19_fu_752_p2();
    void thread_or_ln412_20_fu_890_p2();
    void thread_or_ln412_21_fu_1028_p2();
    void thread_or_ln412_22_fu_1166_p2();
    void thread_or_ln412_23_fu_1304_p2();
    void thread_or_ln412_24_fu_1442_p2();
    void thread_or_ln412_25_fu_1580_p2();
    void thread_or_ln412_26_fu_1718_p2();
    void thread_or_ln412_27_fu_1856_p2();
    void thread_or_ln412_28_fu_1994_p2();
    void thread_or_ln412_fu_200_p2();
    void thread_p_Result_16_10_fu_1630_p4();
    void thread_p_Result_16_11_fu_1768_p4();
    void thread_p_Result_16_12_fu_1906_p4();
    void thread_p_Result_16_13_fu_2044_p4();
    void thread_p_Result_16_1_fu_250_p4();
    void thread_p_Result_16_2_fu_1216_p4();
    void thread_p_Result_16_3_fu_1354_p4();
    void thread_p_Result_16_4_fu_1492_p4();
    void thread_p_Result_16_5_fu_388_p4();
    void thread_p_Result_16_6_fu_526_p4();
    void thread_p_Result_16_7_fu_664_p4();
    void thread_p_Result_16_8_fu_802_p4();
    void thread_p_Result_16_9_fu_940_p4();
    void thread_p_Result_16_s_fu_1078_p4();
    void thread_select_ln1494_16_fu_426_p3();
    void thread_select_ln1494_17_fu_564_p3();
    void thread_select_ln1494_18_fu_702_p3();
    void thread_select_ln1494_19_fu_840_p3();
    void thread_select_ln1494_20_fu_978_p3();
    void thread_select_ln1494_21_fu_1116_p3();
    void thread_select_ln1494_22_fu_1254_p3();
    void thread_select_ln1494_23_fu_1392_p3();
    void thread_select_ln1494_24_fu_1530_p3();
    void thread_select_ln1494_25_fu_1668_p3();
    void thread_select_ln1494_26_fu_1806_p3();
    void thread_select_ln1494_27_fu_1944_p3();
    void thread_select_ln1494_28_fu_2082_p3();
    void thread_select_ln1494_fu_288_p3();
    void thread_select_ln340_11_fu_1108_p3();
    void thread_select_ln340_12_fu_1246_p3();
    void thread_select_ln340_13_fu_1384_p3();
    void thread_select_ln340_14_fu_1522_p3();
    void thread_select_ln340_15_fu_1660_p3();
    void thread_select_ln340_16_fu_1798_p3();
    void thread_select_ln340_17_fu_2074_p3();
    void thread_select_ln340_1_fu_280_p3();
    void thread_select_ln340_5_fu_418_p3();
    void thread_select_ln340_6_fu_556_p3();
    void thread_select_ln340_7_fu_694_p3();
    void thread_select_ln340_8_fu_832_p3();
    void thread_select_ln340_9_fu_970_p3();
    void thread_select_ln340_fu_1936_p3();
    void thread_select_ln777_16_fu_410_p3();
    void thread_select_ln777_17_fu_548_p3();
    void thread_select_ln777_18_fu_686_p3();
    void thread_select_ln777_19_fu_824_p3();
    void thread_select_ln777_20_fu_962_p3();
    void thread_select_ln777_21_fu_1100_p3();
    void thread_select_ln777_22_fu_1238_p3();
    void thread_select_ln777_23_fu_1376_p3();
    void thread_select_ln777_24_fu_1514_p3();
    void thread_select_ln777_25_fu_1652_p3();
    void thread_select_ln777_26_fu_1790_p3();
    void thread_select_ln777_27_fu_1928_p3();
    void thread_select_ln777_28_fu_2066_p3();
    void thread_select_ln777_fu_272_p3();
    void thread_tmp_100_fu_1158_p3();
    void thread_tmp_101_fu_1172_p3();
    void thread_tmp_102_fu_1196_p3();
    void thread_tmp_103_fu_1278_p3();
    void thread_tmp_104_fu_1296_p3();
    void thread_tmp_105_fu_1310_p3();
    void thread_tmp_106_fu_1334_p3();
    void thread_tmp_107_fu_1416_p3();
    void thread_tmp_108_fu_1434_p3();
    void thread_tmp_109_fu_1448_p3();
    void thread_tmp_110_fu_1472_p3();
    void thread_tmp_111_fu_1554_p3();
    void thread_tmp_112_fu_1572_p3();
    void thread_tmp_113_fu_1586_p3();
    void thread_tmp_114_fu_1610_p3();
    void thread_tmp_115_fu_1692_p3();
    void thread_tmp_116_fu_1710_p3();
    void thread_tmp_117_fu_1724_p3();
    void thread_tmp_118_fu_1748_p3();
    void thread_tmp_119_fu_1830_p3();
    void thread_tmp_120_fu_1848_p3();
    void thread_tmp_121_fu_1862_p3();
    void thread_tmp_122_fu_1886_p3();
    void thread_tmp_123_fu_1968_p3();
    void thread_tmp_124_fu_1986_p3();
    void thread_tmp_125_fu_2000_p3();
    void thread_tmp_126_fu_2024_p3();
    void thread_tmp_72_fu_192_p3();
    void thread_tmp_73_fu_206_p3();
    void thread_tmp_74_fu_230_p3();
    void thread_tmp_75_fu_312_p3();
    void thread_tmp_76_fu_330_p3();
    void thread_tmp_77_fu_344_p3();
    void thread_tmp_78_fu_368_p3();
    void thread_tmp_79_fu_450_p3();
    void thread_tmp_80_fu_468_p3();
    void thread_tmp_81_fu_482_p3();
    void thread_tmp_82_fu_506_p3();
    void thread_tmp_83_fu_588_p3();
    void thread_tmp_84_fu_606_p3();
    void thread_tmp_85_fu_620_p3();
    void thread_tmp_86_fu_644_p3();
    void thread_tmp_87_fu_726_p3();
    void thread_tmp_88_fu_744_p3();
    void thread_tmp_89_fu_758_p3();
    void thread_tmp_90_fu_782_p3();
    void thread_tmp_91_fu_864_p3();
    void thread_tmp_92_fu_882_p3();
    void thread_tmp_93_fu_896_p3();
    void thread_tmp_94_fu_920_p3();
    void thread_tmp_95_fu_1002_p3();
    void thread_tmp_96_fu_1020_p3();
    void thread_tmp_97_fu_1034_p3();
    void thread_tmp_98_fu_1058_p3();
    void thread_tmp_99_fu_1140_p3();
    void thread_tmp_fu_174_p3();
    void thread_trunc_ln708_15_fu_440_p4();
    void thread_trunc_ln708_16_fu_578_p4();
    void thread_trunc_ln708_17_fu_716_p4();
    void thread_trunc_ln708_18_fu_854_p4();
    void thread_trunc_ln708_19_fu_992_p4();
    void thread_trunc_ln708_20_fu_1130_p4();
    void thread_trunc_ln708_21_fu_1268_p4();
    void thread_trunc_ln708_22_fu_1406_p4();
    void thread_trunc_ln708_23_fu_1544_p4();
    void thread_trunc_ln708_24_fu_1682_p4();
    void thread_trunc_ln708_25_fu_1820_p4();
    void thread_trunc_ln708_26_fu_1958_p4();
    void thread_trunc_ln708_s_fu_302_p4();
    void thread_trunc_ln718_16_fu_320_p1();
    void thread_trunc_ln718_17_fu_458_p1();
    void thread_trunc_ln718_18_fu_596_p1();
    void thread_trunc_ln718_19_fu_734_p1();
    void thread_trunc_ln718_20_fu_872_p1();
    void thread_trunc_ln718_21_fu_1010_p1();
    void thread_trunc_ln718_22_fu_1148_p1();
    void thread_trunc_ln718_23_fu_1286_p1();
    void thread_trunc_ln718_24_fu_1424_p1();
    void thread_trunc_ln718_25_fu_1562_p1();
    void thread_trunc_ln718_26_fu_1700_p1();
    void thread_trunc_ln718_27_fu_1838_p1();
    void thread_trunc_ln718_28_fu_1976_p1();
    void thread_trunc_ln718_fu_182_p1();
    void thread_trunc_ln_fu_164_p4();
    void thread_xor_ln416_16_fu_376_p2();
    void thread_xor_ln416_17_fu_514_p2();
    void thread_xor_ln416_18_fu_652_p2();
    void thread_xor_ln416_19_fu_790_p2();
    void thread_xor_ln416_20_fu_928_p2();
    void thread_xor_ln416_21_fu_1066_p2();
    void thread_xor_ln416_22_fu_1204_p2();
    void thread_xor_ln416_23_fu_1342_p2();
    void thread_xor_ln416_24_fu_1480_p2();
    void thread_xor_ln416_25_fu_1618_p2();
    void thread_xor_ln416_26_fu_1756_p2();
    void thread_xor_ln416_27_fu_1894_p2();
    void thread_xor_ln416_28_fu_2032_p2();
    void thread_xor_ln416_fu_238_p2();
    void thread_zext_ln415_16_fu_358_p1();
    void thread_zext_ln415_17_fu_496_p1();
    void thread_zext_ln415_18_fu_634_p1();
    void thread_zext_ln415_19_fu_772_p1();
    void thread_zext_ln415_20_fu_910_p1();
    void thread_zext_ln415_21_fu_1048_p1();
    void thread_zext_ln415_22_fu_1186_p1();
    void thread_zext_ln415_23_fu_1324_p1();
    void thread_zext_ln415_24_fu_1462_p1();
    void thread_zext_ln415_25_fu_1600_p1();
    void thread_zext_ln415_26_fu_1738_p1();
    void thread_zext_ln415_27_fu_1876_p1();
    void thread_zext_ln415_28_fu_2014_p1();
    void thread_zext_ln415_fu_220_p1();
};

}

using namespace ap_rtl;

#endif
