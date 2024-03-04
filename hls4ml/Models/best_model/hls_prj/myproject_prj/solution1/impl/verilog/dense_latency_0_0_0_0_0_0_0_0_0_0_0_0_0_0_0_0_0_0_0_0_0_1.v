// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 (
        ap_clk,
        ap_rst,
        data_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8,
        ap_return_9,
        ap_return_10,
        ap_return_11,
        ap_return_12,
        ap_return_13,
        ap_return_14,
        ap_return_15,
        ap_ce
);


input   ap_clk;
input   ap_rst;
input  [47:0] data_V_read;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;
output  [15:0] ap_return_2;
output  [15:0] ap_return_3;
output  [15:0] ap_return_4;
output  [15:0] ap_return_5;
output  [15:0] ap_return_6;
output  [15:0] ap_return_7;
output  [15:0] ap_return_8;
output  [15:0] ap_return_9;
output  [15:0] ap_return_10;
output  [15:0] ap_return_11;
output  [15:0] ap_return_12;
output  [15:0] ap_return_13;
output  [15:0] ap_return_14;
output  [15:0] ap_return_15;
input   ap_ce;

reg[15:0] ap_return_0;
reg[15:0] ap_return_1;
reg[15:0] ap_return_2;
reg[15:0] ap_return_3;
reg[15:0] ap_return_4;
reg[15:0] ap_return_5;
reg[15:0] ap_return_6;
reg[15:0] ap_return_7;
reg[15:0] ap_return_8;
reg[15:0] ap_return_9;
reg[15:0] ap_return_10;
reg[15:0] ap_return_11;
reg[15:0] ap_return_12;
reg[15:0] ap_return_13;
reg[15:0] ap_return_14;
reg[15:0] ap_return_15;

wire  signed [15:0] trunc_ln203_fu_986_p1;
reg  signed [15:0] trunc_ln203_reg_1773;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
reg  signed [15:0] trunc_ln203_reg_1773_pp0_iter1_reg;
wire   [13:0] trunc_ln1118_fu_990_p1;
reg   [13:0] trunc_ln1118_reg_1780;
wire   [14:0] trunc_ln1118_1_fu_994_p1;
reg   [14:0] trunc_ln1118_1_reg_1785;
reg  signed [15:0] tmp_1_reg_1790;
reg   [14:0] tmp_s_reg_1797;
reg   [13:0] tmp_3_reg_1802;
wire  signed [15:0] tmp_2_fu_1028_p4;
reg  signed [15:0] tmp_2_reg_1807;
wire  signed [17:0] sext_ln1118_8_fu_1038_p1;
reg  signed [17:0] sext_ln1118_8_reg_1813;
reg   [13:0] tmp_4_reg_1819;
reg   [15:0] trunc_ln708_51_reg_1824;
reg   [14:0] tmp_5_reg_1829;
wire   [17:0] shl_ln_fu_1078_p3;
reg   [17:0] shl_ln_reg_1834;
reg   [15:0] trunc_ln708_s_reg_1841;
reg   [15:0] trunc_ln708_32_reg_1846;
reg   [15:0] trunc_ln708_33_reg_1851;
reg   [15:0] trunc_ln708_34_reg_1856;
reg   [15:0] trunc_ln708_35_reg_1861;
reg   [15:0] trunc_ln708_38_reg_1868;
reg   [15:0] trunc_ln708_39_reg_1873;
reg   [15:0] trunc_ln708_40_reg_1878;
reg   [15:0] trunc_ln708_41_reg_1883;
reg   [15:0] trunc_ln708_42_reg_1889;
reg   [15:0] trunc_ln708_43_reg_1894;
reg   [15:0] trunc_ln708_44_reg_1899;
reg   [15:0] trunc_ln708_45_reg_1904;
reg   [15:0] trunc_ln708_46_reg_1909;
reg   [15:0] trunc_ln708_47_reg_1914;
reg   [15:0] trunc_ln708_48_reg_1919;
reg   [15:0] trunc_ln708_49_reg_1924;
reg   [15:0] trunc_ln708_50_reg_1929;
reg   [15:0] trunc_ln708_52_reg_1934;
wire   [15:0] trunc_ln708_53_fu_1440_p4;
reg   [15:0] trunc_ln708_53_reg_1939;
reg   [15:0] trunc_ln708_54_reg_1944;
wire   [15:0] add_ln703_37_fu_1484_p2;
reg   [15:0] add_ln703_37_reg_1949;
wire   [15:0] add_ln703_44_fu_1489_p2;
reg   [15:0] add_ln703_44_reg_1954;
wire  signed [15:0] mul_ln1118_8_fu_96_p1;
wire    ap_block_pp0_stage0;
wire  signed [15:0] mul_ln1118_7_fu_111_p1;
wire  signed [15:0] mul_ln1118_4_fu_114_p1;
wire  signed [17:0] sext_ln1118_6_fu_1209_p1;
wire  signed [15:0] mul_ln1118_6_fu_115_p1;
wire  signed [15:0] mul_ln1118_5_fu_116_p1;
wire  signed [15:0] mul_ln1118_3_fu_118_p1;
wire  signed [17:0] sext_ln1118_fu_1073_p1;
wire  signed [15:0] mul_ln1118_fu_119_p1;
wire   [17:0] mul_ln1118_7_fu_111_p2;
wire   [17:0] mul_ln1118_fu_119_p2;
wire   [17:0] shl_ln1118_20_fu_1095_p3;
wire   [17:0] sub_ln1118_21_fu_1102_p2;
wire   [17:0] sub_ln1118_22_fu_1108_p2;
wire   [16:0] shl_ln1118_21_fu_1124_p3;
wire  signed [17:0] sext_ln1118_5_fu_1131_p1;
wire   [17:0] sub_ln1118_23_fu_1135_p2;
wire   [17:0] sub_ln1118_24_fu_1151_p2;
wire   [17:0] mul_ln1118_3_fu_118_p2;
wire   [17:0] sub_ln1118_27_fu_1177_p2;
wire   [17:0] sub_ln1118_28_fu_1193_p2;
wire   [17:0] mul_ln1118_4_fu_114_p2;
wire   [17:0] mul_ln1118_5_fu_116_p2;
wire   [16:0] shl_ln1118_23_fu_1242_p3;
wire  signed [17:0] sext_ln1118_7_fu_1249_p1;
wire   [17:0] shl_ln1118_22_fu_1235_p3;
wire   [17:0] add_ln1118_fu_1253_p2;
wire   [17:0] shl_ln1118_25_fu_1276_p3;
wire   [17:0] shl_ln1118_24_fu_1269_p3;
wire   [17:0] sub_ln1118_29_fu_1283_p2;
wire   [17:0] sub_ln1118_30_fu_1299_p2;
wire   [17:0] sub_ln1118_31_fu_1315_p2;
wire   [17:0] sub_ln1118_32_fu_1321_p2;
wire   [17:0] sub_ln1118_33_fu_1337_p2;
wire   [17:0] mul_ln1118_6_fu_115_p2;
wire   [17:0] sub_ln1118_34_fu_1363_p2;
wire   [17:0] shl_ln1118_26_fu_1379_p3;
wire   [17:0] sub_ln1118_35_fu_1386_p2;
wire   [17:0] sub_ln1118_36_fu_1402_p2;
wire   [17:0] mul_ln1118_8_fu_96_p2;
wire   [17:0] shl_ln1118_27_fu_1427_p3;
wire   [17:0] sub_ln1118_37_fu_1434_p2;
wire   [16:0] shl_ln1118_29_fu_1457_p3;
wire  signed [17:0] sext_ln1118_9_fu_1464_p1;
wire   [17:0] shl_ln1118_28_fu_1450_p3;
wire   [17:0] add_ln1118_4_fu_1468_p2;
wire   [17:0] shl_ln1118_s_fu_1495_p3;
wire   [17:0] sub_ln1118_fu_1502_p2;
wire   [17:0] sub_ln1118_25_fu_1517_p2;
wire   [17:0] sub_ln1118_26_fu_1532_p2;
wire   [15:0] trunc_ln_fu_1507_p4;
wire   [15:0] add_ln703_fu_1552_p2;
wire   [15:0] add_ln703_32_fu_1562_p2;
wire   [15:0] add_ln703_34_fu_1572_p2;
wire   [15:0] add_ln703_36_fu_1582_p2;
wire   [15:0] add_ln703_40_fu_1596_p2;
wire   [15:0] add_ln703_43_fu_1610_p2;
wire   [15:0] add_ln703_46_fu_1619_p2;
wire   [15:0] add_ln703_48_fu_1629_p2;
wire   [15:0] trunc_ln708_36_fu_1522_p4;
wire   [15:0] trunc_ln708_37_fu_1537_p4;
wire   [15:0] add_ln703_52_fu_1651_p2;
wire   [15:0] add_ln703_55_fu_1667_p2;
wire   [15:0] acc_1_V_fu_1547_p2;
wire   [15:0] acc_2_V_fu_1557_p2;
wire   [15:0] acc_3_V_fu_1567_p2;
wire   [15:0] acc_4_V_fu_1577_p2;
wire   [15:0] acc_5_V_fu_1586_p2;
wire   [15:0] acc_6_V_fu_1591_p2;
wire   [15:0] acc_8_V_fu_1601_p2;
wire   [15:0] acc_9_V_fu_1606_p2;
wire   [15:0] acc_10_V_fu_1614_p2;
wire   [15:0] acc_11_V_fu_1624_p2;
wire   [15:0] acc_13_V_fu_1634_p2;
wire   [15:0] acc_14_V_fu_1639_p2;
wire   [15:0] acc_16_V_fu_1645_p2;
wire   [15:0] acc_17_V_fu_1656_p2;
wire   [15:0] acc_18_V_fu_1661_p2;
wire   [15:0] acc_19_V_fu_1672_p2;
reg    ap_ce_reg;
reg   [47:0] data_V_read_int_reg;
reg   [15:0] ap_return_0_int_reg;
reg   [15:0] ap_return_1_int_reg;
reg   [15:0] ap_return_2_int_reg;
reg   [15:0] ap_return_3_int_reg;
reg   [15:0] ap_return_4_int_reg;
reg   [15:0] ap_return_5_int_reg;
reg   [15:0] ap_return_6_int_reg;
reg   [15:0] ap_return_7_int_reg;
reg   [15:0] ap_return_8_int_reg;
reg   [15:0] ap_return_9_int_reg;
reg   [15:0] ap_return_10_int_reg;
reg   [15:0] ap_return_11_int_reg;
reg   [15:0] ap_return_12_int_reg;
reg   [15:0] ap_return_13_int_reg;
reg   [15:0] ap_return_14_int_reg;
reg   [15:0] ap_return_15_int_reg;

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_ce_reg))) begin
        add_ln703_37_reg_1949 <= add_ln703_37_fu_1484_p2;
        add_ln703_44_reg_1954 <= add_ln703_44_fu_1489_p2;
        sext_ln1118_8_reg_1813 <= sext_ln1118_8_fu_1038_p1;
        shl_ln_reg_1834[17 : 4] <= shl_ln_fu_1078_p3[17 : 4];
        tmp_1_reg_1790 <= {{data_V_read_int_reg[31:16]}};
        tmp_2_reg_1807 <= {{data_V_read_int_reg[47:32]}};
        tmp_3_reg_1802 <= {{data_V_read_int_reg[29:16]}};
        tmp_4_reg_1819 <= {{data_V_read_int_reg[45:32]}};
        tmp_5_reg_1829 <= {{data_V_read_int_reg[46:32]}};
        tmp_s_reg_1797 <= {{data_V_read_int_reg[30:16]}};
        trunc_ln1118_1_reg_1785 <= trunc_ln1118_1_fu_994_p1;
        trunc_ln1118_reg_1780 <= trunc_ln1118_fu_990_p1;
        trunc_ln203_reg_1773 <= trunc_ln203_fu_986_p1;
        trunc_ln203_reg_1773_pp0_iter1_reg <= trunc_ln203_reg_1773;
        trunc_ln708_32_reg_1846 <= {{sub_ln1118_22_fu_1108_p2[17:2]}};
        trunc_ln708_33_reg_1851 <= {{sub_ln1118_23_fu_1135_p2[17:2]}};
        trunc_ln708_34_reg_1856 <= {{sub_ln1118_24_fu_1151_p2[17:2]}};
        trunc_ln708_35_reg_1861 <= {{mul_ln1118_3_fu_118_p2[17:2]}};
        trunc_ln708_38_reg_1868 <= {{sub_ln1118_27_fu_1177_p2[17:2]}};
        trunc_ln708_39_reg_1873 <= {{sub_ln1118_28_fu_1193_p2[17:2]}};
        trunc_ln708_40_reg_1878 <= {{mul_ln1118_4_fu_114_p2[17:2]}};
        trunc_ln708_41_reg_1883 <= {{mul_ln1118_5_fu_116_p2[17:2]}};
        trunc_ln708_42_reg_1889 <= {{add_ln1118_fu_1253_p2[17:2]}};
        trunc_ln708_43_reg_1894 <= {{sub_ln1118_29_fu_1283_p2[17:2]}};
        trunc_ln708_44_reg_1899 <= {{sub_ln1118_30_fu_1299_p2[17:2]}};
        trunc_ln708_45_reg_1904 <= {{sub_ln1118_32_fu_1321_p2[17:2]}};
        trunc_ln708_46_reg_1909 <= {{sub_ln1118_33_fu_1337_p2[17:2]}};
        trunc_ln708_47_reg_1914 <= {{mul_ln1118_6_fu_115_p2[17:2]}};
        trunc_ln708_48_reg_1919 <= {{sub_ln1118_34_fu_1363_p2[17:2]}};
        trunc_ln708_49_reg_1924 <= {{sub_ln1118_35_fu_1386_p2[17:2]}};
        trunc_ln708_50_reg_1929 <= {{sub_ln1118_36_fu_1402_p2[17:2]}};
        trunc_ln708_51_reg_1824 <= {{mul_ln1118_7_fu_111_p2[17:2]}};
        trunc_ln708_52_reg_1934 <= {{mul_ln1118_8_fu_96_p2[17:2]}};
        trunc_ln708_53_reg_1939 <= {{sub_ln1118_37_fu_1434_p2[17:2]}};
        trunc_ln708_54_reg_1944 <= {{add_ln1118_4_fu_1468_p2[17:2]}};
        trunc_ln708_s_reg_1841 <= {{mul_ln1118_fu_119_p2[17:2]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_0_int_reg <= acc_1_V_fu_1547_p2;
        ap_return_10_int_reg <= acc_13_V_fu_1634_p2;
        ap_return_11_int_reg <= acc_14_V_fu_1639_p2;
        ap_return_12_int_reg[15 : 2] <= acc_16_V_fu_1645_p2[15 : 2];
        ap_return_13_int_reg <= acc_17_V_fu_1656_p2;
        ap_return_14_int_reg <= acc_18_V_fu_1661_p2;
        ap_return_15_int_reg <= acc_19_V_fu_1672_p2;
        ap_return_1_int_reg <= acc_2_V_fu_1557_p2;
        ap_return_2_int_reg <= acc_3_V_fu_1567_p2;
        ap_return_3_int_reg <= acc_4_V_fu_1577_p2;
        ap_return_4_int_reg <= acc_5_V_fu_1586_p2;
        ap_return_5_int_reg <= acc_6_V_fu_1591_p2;
        ap_return_6_int_reg <= acc_8_V_fu_1601_p2;
        ap_return_7_int_reg <= acc_9_V_fu_1606_p2;
        ap_return_8_int_reg <= acc_10_V_fu_1614_p2;
        ap_return_9_int_reg <= acc_11_V_fu_1624_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce)) begin
        data_V_read_int_reg <= data_V_read;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_0 = ap_return_0_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_0 = acc_1_V_fu_1547_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_1 = ap_return_1_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_1 = acc_2_V_fu_1557_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_10 = ap_return_10_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_10 = acc_13_V_fu_1634_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_11 = ap_return_11_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_11 = acc_14_V_fu_1639_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_12 = ap_return_12_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_12 = acc_16_V_fu_1645_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_13 = ap_return_13_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_13 = acc_17_V_fu_1656_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_14 = ap_return_14_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_14 = acc_18_V_fu_1661_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_15 = ap_return_15_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_15 = acc_19_V_fu_1672_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_2 = ap_return_2_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_2 = acc_3_V_fu_1567_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_3 = ap_return_3_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_3 = acc_4_V_fu_1577_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_4 = ap_return_4_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_4 = acc_5_V_fu_1586_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_5 = ap_return_5_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_5 = acc_6_V_fu_1591_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_6 = ap_return_6_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_6 = acc_8_V_fu_1601_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_7 = ap_return_7_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_7 = acc_9_V_fu_1606_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_8 = ap_return_8_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_8 = acc_10_V_fu_1614_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_9 = ap_return_9_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_9 = acc_11_V_fu_1624_p2;
    end
end

assign acc_10_V_fu_1614_p2 = (add_ln703_44_reg_1954 + add_ln703_43_fu_1610_p2);

assign acc_11_V_fu_1624_p2 = (add_ln703_46_fu_1619_p2 + trunc_ln708_35_reg_1861);

assign acc_13_V_fu_1634_p2 = (add_ln703_48_fu_1629_p2 + trunc_ln708_35_reg_1861);

assign acc_14_V_fu_1639_p2 = (16'd64 + trunc_ln708_36_fu_1522_p4);

assign acc_16_V_fu_1645_p2 = (16'd64 + trunc_ln708_37_fu_1537_p4);

assign acc_17_V_fu_1656_p2 = (add_ln703_52_fu_1651_p2 + trunc_ln708_38_reg_1868);

assign acc_18_V_fu_1661_p2 = (16'd128 + trunc_ln_fu_1507_p4);

assign acc_19_V_fu_1672_p2 = (add_ln703_55_fu_1667_p2 + trunc_ln708_39_reg_1873);

assign acc_1_V_fu_1547_p2 = (trunc_ln708_40_reg_1878 + trunc_ln_fu_1507_p4);

assign acc_2_V_fu_1557_p2 = (add_ln703_fu_1552_p2 + trunc_ln708_s_reg_1841);

assign acc_3_V_fu_1567_p2 = (add_ln703_32_fu_1562_p2 + trunc_ln708_41_reg_1883);

assign acc_4_V_fu_1577_p2 = (add_ln703_34_fu_1572_p2 + trunc_ln708_42_reg_1889);

assign acc_5_V_fu_1586_p2 = (add_ln703_37_reg_1949 + add_ln703_36_fu_1582_p2);

assign acc_6_V_fu_1591_p2 = ($signed(16'd65408) + $signed(trunc_ln708_44_reg_1899));

assign acc_8_V_fu_1601_p2 = (add_ln703_40_fu_1596_p2 + trunc_ln708_33_reg_1851);

assign acc_9_V_fu_1606_p2 = (trunc_ln708_52_reg_1934 + trunc_ln708_34_reg_1856);

assign add_ln1118_4_fu_1468_p2 = ($signed(sext_ln1118_9_fu_1464_p1) + $signed(shl_ln1118_28_fu_1450_p3));

assign add_ln1118_fu_1253_p2 = ($signed(sext_ln1118_7_fu_1249_p1) + $signed(shl_ln1118_22_fu_1235_p3));

assign add_ln703_32_fu_1562_p2 = (16'd128 + trunc_ln708_49_reg_1924);

assign add_ln703_34_fu_1572_p2 = (16'd128 + trunc_ln708_50_reg_1929);

assign add_ln703_36_fu_1582_p2 = (trunc_ln708_32_reg_1846 + trunc_ln708_43_reg_1894);

assign add_ln703_37_fu_1484_p2 = (16'd256 + trunc_ln708_51_reg_1824);

assign add_ln703_40_fu_1596_p2 = (16'd128 + trunc_ln708_45_reg_1904);

assign add_ln703_43_fu_1610_p2 = (trunc_ln708_35_reg_1861 + trunc_ln708_46_reg_1909);

assign add_ln703_44_fu_1489_p2 = ($signed(16'd65344) + $signed(trunc_ln708_53_fu_1440_p4));

assign add_ln703_46_fu_1619_p2 = (16'd256 + trunc_ln708_47_reg_1914);

assign add_ln703_48_fu_1629_p2 = (16'd64 + trunc_ln708_54_reg_1944);

assign add_ln703_52_fu_1651_p2 = (16'd64 + trunc_ln708_48_reg_1919);

assign add_ln703_55_fu_1667_p2 = (16'd64 + trunc_ln708_53_reg_1939);

assign add_ln703_fu_1552_p2 = (16'd192 + trunc_ln708_41_reg_1883);

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign mul_ln1118_3_fu_118_p1 = sext_ln1118_fu_1073_p1;

assign mul_ln1118_3_fu_118_p2 = ($signed(18'd262131) * $signed(mul_ln1118_3_fu_118_p1));

assign mul_ln1118_4_fu_114_p1 = sext_ln1118_6_fu_1209_p1;

assign mul_ln1118_4_fu_114_p2 = ($signed({{1'b0}, {18'd11}}) * $signed(mul_ln1118_4_fu_114_p1));

assign mul_ln1118_5_fu_116_p1 = sext_ln1118_6_fu_1209_p1;

assign mul_ln1118_5_fu_116_p2 = ($signed(18'd262133) * $signed(mul_ln1118_5_fu_116_p1));

assign mul_ln1118_6_fu_115_p1 = sext_ln1118_6_fu_1209_p1;

assign mul_ln1118_6_fu_115_p2 = ($signed({{1'b0}, {18'd13}}) * $signed(mul_ln1118_6_fu_115_p1));

assign mul_ln1118_7_fu_111_p1 = tmp_2_fu_1028_p4;

assign mul_ln1118_7_fu_111_p2 = ($signed({{1'b0}, {18'd13}}) * $signed(mul_ln1118_7_fu_111_p1));

assign mul_ln1118_8_fu_96_p1 = sext_ln1118_8_reg_1813;

assign mul_ln1118_8_fu_96_p2 = ($signed({{1'b0}, {18'd11}}) * $signed(mul_ln1118_8_fu_96_p1));

assign mul_ln1118_fu_119_p1 = sext_ln1118_fu_1073_p1;

assign mul_ln1118_fu_119_p2 = ($signed(18'd262133) * $signed(mul_ln1118_fu_119_p1));

assign sext_ln1118_5_fu_1131_p1 = $signed(shl_ln1118_21_fu_1124_p3);

assign sext_ln1118_6_fu_1209_p1 = tmp_1_reg_1790;

assign sext_ln1118_7_fu_1249_p1 = $signed(shl_ln1118_23_fu_1242_p3);

assign sext_ln1118_8_fu_1038_p1 = tmp_2_fu_1028_p4;

assign sext_ln1118_9_fu_1464_p1 = $signed(shl_ln1118_29_fu_1457_p3);

assign sext_ln1118_fu_1073_p1 = trunc_ln203_reg_1773;

assign shl_ln1118_20_fu_1095_p3 = {{trunc_ln1118_1_reg_1785}, {3'd0}};

assign shl_ln1118_21_fu_1124_p3 = {{trunc_ln203_reg_1773}, {1'd0}};

assign shl_ln1118_22_fu_1235_p3 = {{tmp_s_reg_1797}, {3'd0}};

assign shl_ln1118_23_fu_1242_p3 = {{tmp_1_reg_1790}, {1'd0}};

assign shl_ln1118_24_fu_1269_p3 = {{tmp_3_reg_1802}, {4'd0}};

assign shl_ln1118_25_fu_1276_p3 = {{tmp_1_reg_1790}, {2'd0}};

assign shl_ln1118_26_fu_1379_p3 = {{tmp_4_reg_1819}, {4'd0}};

assign shl_ln1118_27_fu_1427_p3 = {{tmp_2_reg_1807}, {2'd0}};

assign shl_ln1118_28_fu_1450_p3 = {{tmp_5_reg_1829}, {3'd0}};

assign shl_ln1118_29_fu_1457_p3 = {{tmp_2_reg_1807}, {1'd0}};

assign shl_ln1118_s_fu_1495_p3 = {{trunc_ln203_reg_1773_pp0_iter1_reg}, {2'd0}};

assign shl_ln_fu_1078_p3 = {{trunc_ln1118_reg_1780}, {4'd0}};

assign sub_ln1118_21_fu_1102_p2 = (18'd0 - shl_ln1118_20_fu_1095_p3);

assign sub_ln1118_22_fu_1108_p2 = ($signed(sub_ln1118_21_fu_1102_p2) - $signed(sext_ln1118_fu_1073_p1));

assign sub_ln1118_23_fu_1135_p2 = ($signed(sub_ln1118_21_fu_1102_p2) - $signed(sext_ln1118_5_fu_1131_p1));

assign sub_ln1118_24_fu_1151_p2 = ($signed(shl_ln_fu_1078_p3) - $signed(sext_ln1118_5_fu_1131_p1));

assign sub_ln1118_25_fu_1517_p2 = (shl_ln1118_s_fu_1495_p3 - shl_ln_reg_1834);

assign sub_ln1118_26_fu_1532_p2 = (18'd0 - shl_ln_reg_1834);

assign sub_ln1118_27_fu_1177_p2 = ($signed(shl_ln1118_20_fu_1095_p3) - $signed(sext_ln1118_fu_1073_p1));

assign sub_ln1118_28_fu_1193_p2 = ($signed(shl_ln_fu_1078_p3) - $signed(sext_ln1118_fu_1073_p1));

assign sub_ln1118_29_fu_1283_p2 = (shl_ln1118_25_fu_1276_p3 - shl_ln1118_24_fu_1269_p3);

assign sub_ln1118_30_fu_1299_p2 = ($signed(shl_ln1118_24_fu_1269_p3) - $signed(sext_ln1118_7_fu_1249_p1));

assign sub_ln1118_31_fu_1315_p2 = (18'd0 - shl_ln1118_22_fu_1235_p3);

assign sub_ln1118_32_fu_1321_p2 = ($signed(sub_ln1118_31_fu_1315_p2) - $signed(sext_ln1118_7_fu_1249_p1));

assign sub_ln1118_33_fu_1337_p2 = (shl_ln1118_24_fu_1269_p3 - shl_ln1118_25_fu_1276_p3);

assign sub_ln1118_34_fu_1363_p2 = ($signed(sext_ln1118_7_fu_1249_p1) - $signed(shl_ln1118_24_fu_1269_p3));

assign sub_ln1118_35_fu_1386_p2 = (18'd0 - shl_ln1118_26_fu_1379_p3);

assign sub_ln1118_36_fu_1402_p2 = ($signed(shl_ln1118_26_fu_1379_p3) - $signed(sext_ln1118_8_reg_1813));

assign sub_ln1118_37_fu_1434_p2 = (shl_ln1118_27_fu_1427_p3 - shl_ln1118_26_fu_1379_p3);

assign sub_ln1118_fu_1502_p2 = (shl_ln_reg_1834 - shl_ln1118_s_fu_1495_p3);

assign tmp_2_fu_1028_p4 = {{data_V_read_int_reg[47:32]}};

assign trunc_ln1118_1_fu_994_p1 = data_V_read_int_reg[14:0];

assign trunc_ln1118_fu_990_p1 = data_V_read_int_reg[13:0];

assign trunc_ln203_fu_986_p1 = data_V_read_int_reg[15:0];

assign trunc_ln708_36_fu_1522_p4 = {{sub_ln1118_25_fu_1517_p2[17:2]}};

assign trunc_ln708_37_fu_1537_p4 = {{sub_ln1118_26_fu_1532_p2[17:2]}};

assign trunc_ln708_53_fu_1440_p4 = {{sub_ln1118_37_fu_1434_p2[17:2]}};

assign trunc_ln_fu_1507_p4 = {{sub_ln1118_fu_1502_p2[17:2]}};

always @ (posedge ap_clk) begin
    shl_ln_reg_1834[3:0] <= 4'b0000;
    ap_return_12_int_reg[1:0] <= 2'b00;
end

endmodule //dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1
