#include "All_Block.h"
#include "Resource.h"
#include <wchar.h>
//이미지 용 블럭
RECT S1_tb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_tb[] = { XPOS(9), YPOS(9), RXPOS(10) + 1, BYPOS(10) + 1 };
RECT S3_tb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_tb[] = {
    { XPOS(3), YPOS(6), RXPOS(4) + 1, BYPOS(7) + 1 },
    { XPOS(4), YPOS(7), RXPOS(5) + 1, BYPOS(8) + 1 },
    { XPOS(5), YPOS(7), RXPOS(6) + 1, BYPOS(8) + 1 },
    { XPOS(6), YPOS(7), RXPOS(7) + 1, BYPOS(8) + 1 },
    { XPOS(7), YPOS(8), RXPOS(8) + 1, BYPOS(9) + 1 },
    { XPOS(8), YPOS(8), RXPOS(9) + 1, BYPOS(9) + 1 },
    { XPOS(9), YPOS(9), RXPOS(10) + 1, BYPOS(10) + 1 },
    { XPOS(10), YPOS(9), RXPOS(11) + 1, BYPOS(10) + 1 },
    { XPOS(11), YPOS(10), RXPOS(12) + 1, BYPOS(11) + 1 },
    { XPOS(12), YPOS(10), RXPOS(13) + 1, BYPOS(11) + 1 },
    { XPOS(13), YPOS(11), RXPOS(14) + 1, BYPOS(12) + 1 },
    { XPOS(14), YPOS(11), RXPOS(15) + 1, BYPOS(12) + 1 },
    { XPOS(15), YPOS(11), RXPOS(16) + 1, BYPOS(12) + 1 },
    { XPOS(16), YPOS(11), RXPOS(17) + 1, BYPOS(12) + 1 },
    { XPOS(17), YPOS(11), RXPOS(18) + 1, BYPOS(12) + 1 },
    { XPOS(18), YPOS(11), RXPOS(19) + 1, BYPOS(12) + 1 },
    { XPOS(19), YPOS(11), RXPOS(20) + 1, BYPOS(12) + 1 },
};
RECT S5_tb[] = { 
    { XPOS(8), YPOS(7), RXPOS(9) + 1, BYPOS(8) + 1 },
    { XPOS(10), YPOS(7), RXPOS(11) + 1, BYPOS(8) + 1 },
    { XPOS(11), YPOS(7), RXPOS(12) + 1, BYPOS(8) + 1 },
    { XPOS(13), YPOS(7), RXPOS(14) + 1, BYPOS(8) + 1 },
    { XPOS(14), YPOS(7), RXPOS(15) + 1, BYPOS(8) + 1 },
    { XPOS(16), YPOS(7), RXPOS(17) + 1, BYPOS(8) + 1 },
    { XPOS(17), YPOS(7), RXPOS(18) + 1, BYPOS(8) + 1 },
};
RECT S6_tb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_tb[] = { 
    { XPOS(10), YPOS(3), RXPOS(11) + 1, BYPOS(4) + 1 },
    { XPOS(10), YPOS(6), RXPOS(11) + 1, BYPOS(7) + 1 },
    { XPOS(10), YPOS(9), RXPOS(11) + 1, BYPOS(10) + 1 },
};
RECT S8_tb[] = {
    { XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1 },
    { XPOS(15), YPOS(11), RXPOS(16) + 1, BYPOS(12) + 1 },
    { XPOS(18), YPOS(7), RXPOS(19) + 1, BYPOS(8) + 1 },
    { XPOS(19), YPOS(8), RXPOS(20) + 1, BYPOS(9) + 1 },
};
RECT S9_tb[] = { 
    { XPOS(1), YPOS(8), RXPOS(2) + 1, BYPOS(9) + 1 },//
    { XPOS(2), YPOS(8), RXPOS(3) + 1, BYPOS(9) + 1 },
    { XPOS(3), YPOS(8), RXPOS(4) + 1, BYPOS(9) + 1 },
    { XPOS(4), YPOS(8), RXPOS(5) + 1, BYPOS(9) + 1 },
    { XPOS(5), YPOS(8), RXPOS(6) + 1, BYPOS(9) + 1 },
    { XPOS(6), YPOS(8), RXPOS(7) + 1, BYPOS(9) + 1 },
    { XPOS(7), YPOS(8), RXPOS(8) + 1, BYPOS(9) + 1 },
    { XPOS(8), YPOS(9), RXPOS(9) + 1, BYPOS(10) + 1 },
    { XPOS(9), YPOS(9), RXPOS(10) + 1, BYPOS(10) + 1 }, //
    { XPOS(10), YPOS(9), RXPOS(11) + 1, BYPOS(10) + 1 },
    { XPOS(11), YPOS(9), RXPOS(12) + 1, BYPOS(10) + 1 },
    { XPOS(12), YPOS(9), RXPOS(13) + 1, BYPOS(10) + 1 },
    { XPOS(15), YPOS(9), RXPOS(16) + 1, BYPOS(10) + 1 }, //
    { XPOS(16), YPOS(9), RXPOS(17) + 1, BYPOS(10) + 1 },
    { XPOS(17), YPOS(9), RXPOS(18) + 1, BYPOS(10) + 1 },
    { XPOS(18), YPOS(9), RXPOS(19) + 1, BYPOS(10) + 1 },
    { XPOS(19), YPOS(9), RXPOS(20) + 1, BYPOS(10) + 1 },
    { XPOS(20), YPOS(9), RXPOS(21) + 1, BYPOS(10) + 1 },
    { XPOS(21), YPOS(9), RXPOS(22) + 1, BYPOS(10) + 1 },
    { XPOS(22), YPOS(9), RXPOS(23) + 1, BYPOS(10) + 1 },
    { XPOS(23), YPOS(9), RXPOS(24) + 1, BYPOS(10) + 1 },
    { XPOS(24), YPOS(9), RXPOS(25) + 1, BYPOS(10) + 1 },
    { XPOS(25), YPOS(9), RXPOS(26) + 1, BYPOS(10) + 1 },
    { XPOS(20), YPOS(7), RXPOS(21) + 1, BYPOS(8) + 1 }, //
    { XPOS(21), YPOS(7), RXPOS(22) + 1, BYPOS(8) + 1 },
    { XPOS(22), YPOS(7), RXPOS(23) + 1, BYPOS(8) + 1 },
};
RECT S10_tb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_tb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_tb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_tb[] = {
    {XPOS(20), YPOS(13), RXPOS(21) + 1, BYPOS(14) + 1 },
    {XPOS(23), YPOS(12), RXPOS(24) + 1, BYPOS(13) + 1 },
};

//가시 하단 블럭(기본블럭) 이미지용 블럭에서 ypos만 + 0.5
RECT S1_tbw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_tbw[] = { XPOS(9), YPOS(9.5), RXPOS(10) + 1, BYPOS(10) + 1 };
RECT S3_tbw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_tbw[] = { 
    { XPOS(3), YPOS(6.5), RXPOS(4) + 1, BYPOS(7) + 1 },
    { XPOS(4), YPOS(7.5), RXPOS(5) + 1, BYPOS(8) + 1 },
    { XPOS(5), YPOS(7.5), RXPOS(6) + 1, BYPOS(8) + 1 },
    { XPOS(6), YPOS(7.5), RXPOS(7) + 1, BYPOS(8) + 1 },
    { XPOS(7), YPOS(8.5), RXPOS(8) + 1, BYPOS(9) + 1 },
    { XPOS(8), YPOS(8.5), RXPOS(9) + 1, BYPOS(9) + 1 },
    { XPOS(9), YPOS(9.5), RXPOS(10) + 1, BYPOS(10) + 1 },
    { XPOS(10), YPOS(9.5), RXPOS(11) + 1, BYPOS(10) + 1 },
    { XPOS(11), YPOS(10.5), RXPOS(12) + 1, BYPOS(11) + 1 },
    { XPOS(12), YPOS(10.5), RXPOS(13) + 1, BYPOS(11) + 1 },
    { XPOS(13), YPOS(11.5), RXPOS(14) + 1, BYPOS(12) + 1 },
    { XPOS(14), YPOS(11.5), RXPOS(15) + 1, BYPOS(12) + 1 },
    { XPOS(15), YPOS(11.5), RXPOS(16) + 1, BYPOS(12) + 1 },
    { XPOS(16), YPOS(11.5), RXPOS(17) + 1, BYPOS(12) + 1 },
    { XPOS(17), YPOS(11.5), RXPOS(18) + 1, BYPOS(12) + 1 },
    { XPOS(18), YPOS(11.5), RXPOS(19) + 1, BYPOS(12) + 1 },
    { XPOS(19), YPOS(11.5), RXPOS(20) + 1, BYPOS(12) + 1 },
};
RECT S5_tbw[] = {
    { XPOS(8), YPOS(7.5), RXPOS(9) + 1, BYPOS(8) + 1 },
    { XPOS(10), YPOS(7.5), RXPOS(11) + 1, BYPOS(8) + 1 },
    { XPOS(11), YPOS(7.5), RXPOS(12) + 1, BYPOS(8) + 1 },
    { XPOS(13), YPOS(7.5), RXPOS(14) + 1, BYPOS(8) + 1 },
    { XPOS(14), YPOS(7.5), RXPOS(15) + 1, BYPOS(8) + 1 },
    { XPOS(16), YPOS(7.5), RXPOS(17) + 1, BYPOS(8) + 1 },
    { XPOS(17), YPOS(7.5), RXPOS(18) + 1, BYPOS(8) + 1 },
};
RECT S6_tbw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_tbw[] = {
    { XPOS(10), YPOS(3.5), RXPOS(11) + 1, BYPOS(4) + 1 },
    { XPOS(10), YPOS(6.5), RXPOS(11) + 1, BYPOS(7) + 1 },
    { XPOS(10), YPOS(9.5), RXPOS(11) + 1, BYPOS(10) + 1 },
};
RECT S8_tbw[] = {
    { XPOS(16), YPOS(10.5), RXPOS(17) + 1, BYPOS(11) + 1 },
    { XPOS(15), YPOS(11.5), RXPOS(16) + 1, BYPOS(12) + 1 },
    { XPOS(18), YPOS(7.5), RXPOS(19) + 1, BYPOS(8) + 1 },
    { XPOS(19), YPOS(8.5), RXPOS(20) + 1, BYPOS(9) + 1 },
};
RECT S9_tbw[] = {
    { XPOS(1), YPOS(8.5), RXPOS(2) + 1, BYPOS(9) + 1 },//
    { XPOS(2), YPOS(8.5), RXPOS(3) + 1, BYPOS(9) + 1 },
    { XPOS(3), YPOS(8.5), RXPOS(4) + 1, BYPOS(9) + 1 },
    { XPOS(4), YPOS(8.5), RXPOS(5) + 1, BYPOS(9) + 1 },
    { XPOS(5), YPOS(8.5), RXPOS(6) + 1, BYPOS(9) + 1 },
    { XPOS(6), YPOS(8.5), RXPOS(7) + 1, BYPOS(9) + 1 },
    { XPOS(7), YPOS(8.5), RXPOS(8) + 1, BYPOS(9) + 1 },
    { XPOS(8), YPOS(9.5), RXPOS(9) + 1, BYPOS(10) + 1 },
    { XPOS(9), YPOS(9.5), RXPOS(10) + 1, BYPOS(10) + 1 }, //
    { XPOS(10), YPOS(9.5), RXPOS(11) + 1, BYPOS(10) + 1 },
    { XPOS(11), YPOS(9.5), RXPOS(12) + 1, BYPOS(10) + 1 },
    { XPOS(12), YPOS(9.5), RXPOS(13) + 1, BYPOS(10) + 1 },
    { XPOS(15), YPOS(9.5), RXPOS(16) + 1, BYPOS(10) + 1 }, //
    { XPOS(16), YPOS(9.5), RXPOS(17) + 1, BYPOS(10) + 1 },
    { XPOS(17), YPOS(9.5), RXPOS(18) + 1, BYPOS(10) + 1 },
    { XPOS(18), YPOS(9.5), RXPOS(19) + 1, BYPOS(10) + 1 },
    { XPOS(19), YPOS(9.5), RXPOS(20) + 1, BYPOS(10) + 1 },
    { XPOS(20), YPOS(9.5), RXPOS(21) + 1, BYPOS(10) + 1 },
    { XPOS(21), YPOS(9.5), RXPOS(22) + 1, BYPOS(10) + 1 },
    { XPOS(22), YPOS(9.5), RXPOS(23) + 1, BYPOS(10) + 1 },
    { XPOS(23), YPOS(9.5), RXPOS(24) + 1, BYPOS(10) + 1 },
    { XPOS(24), YPOS(9.5), RXPOS(25) + 1, BYPOS(10) + 1 },
    { XPOS(25), YPOS(9.5), RXPOS(26) + 1, BYPOS(10) + 1 },
    { XPOS(20), YPOS(7.5), RXPOS(21) + 1, BYPOS(8) + 1 }, //
    { XPOS(21), YPOS(7.5), RXPOS(22) + 1, BYPOS(8) + 1 },
    { XPOS(22), YPOS(7.5), RXPOS(23) + 1, BYPOS(8) + 1 },
};
RECT S10_tbw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_tbw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_tbw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_tbw[] = {
    {XPOS(20), YPOS(13.5), RXPOS(21) + 1, BYPOS(14) + 1 },
    {XPOS(23), YPOS(12.5), RXPOS(24) + 1, BYPOS(13) + 1 },
};


//가시 블럭(가시부분)이미지용 블럭에서 ypos + 0.2, bypos - 0.5. 경우에 따라 xpos + 0.n, rxpos - 0.n
RECT S1_tbt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_tbt[] = { XPOS(9), YPOS(9.2), RXPOS(10) + 1, BYPOS(9.5) + 1 };
RECT S3_tbt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_tbt[] = { 
    { XPOS(3), YPOS(6), RXPOS(4) + 1, BYPOS(6.5) + 1 },
    { XPOS(4), YPOS(7.2), RXPOS(5) + 1, BYPOS(7.5) + 1 },
    { XPOS(5), YPOS(7.2), RXPOS(6) + 1, BYPOS(7.5) + 1 },
    { XPOS(6), YPOS(7.2), RXPOS(7) + 1, BYPOS(7.5) + 1 },
    { XPOS(7), YPOS(8.2), RXPOS(8) + 1, BYPOS(8.5) + 1 },
    { XPOS(8), YPOS(8.2), RXPOS(9) + 1, BYPOS(8.5) + 1 },
    { XPOS(9), YPOS(9.2), RXPOS(10) + 1, BYPOS(9.5) + 1 },
    { XPOS(10), YPOS(9.2), RXPOS(11) + 1, BYPOS(9.5) + 1 },
    { XPOS(11), YPOS(10.2), RXPOS(12) + 1, BYPOS(10.5) + 1 },
    { XPOS(12), YPOS(10.2), RXPOS(13) + 1, BYPOS(10.5) + 1 },
    { XPOS(13), YPOS(11.2), RXPOS(14) + 1, BYPOS(11.5) + 1 },
    { XPOS(14), YPOS(11.2), RXPOS(15) + 1, BYPOS(11.5) + 1 },
    { XPOS(15), YPOS(11.2), RXPOS(16) + 1, BYPOS(11.5) + 1 },
    { XPOS(16), YPOS(11.2), RXPOS(17) + 1, BYPOS(11.5) + 1 },
    { XPOS(17), YPOS(11.2), RXPOS(18) + 1, BYPOS(11.5) + 1 },
    { XPOS(18), YPOS(11.2), RXPOS(19) + 1, BYPOS(11.5) + 1 },
    { XPOS(19), YPOS(11.2), RXPOS(20) + 1, BYPOS(11.5) + 1 },
};
RECT S5_tbt[] = {
    { XPOS(8), YPOS(7.2), RXPOS(9) + 1, BYPOS(7.5) + 1 },
    { XPOS(10), YPOS(7.2), RXPOS(11) + 1, BYPOS(7.5) + 1 },
    { XPOS(11), YPOS(7.2), RXPOS(12) + 1, BYPOS(7.5) + 1 },
    { XPOS(13), YPOS(7.2), RXPOS(14) + 1, BYPOS(7.5) + 1 },
    { XPOS(14), YPOS(7.2), RXPOS(15) + 1, BYPOS(7.5) + 1 },
    { XPOS(16), YPOS(7.2), RXPOS(17) + 1, BYPOS(7.5) + 1 },
    { XPOS(17), YPOS(7.2), RXPOS(18) + 1, BYPOS(7.5) + 1 },
};
RECT S6_tbt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_tbt[] = {
    { XPOS(10), YPOS(3.2), RXPOS(11) + 1, BYPOS(3.5) + 1 },
    { XPOS(10), YPOS(6.2), RXPOS(11) + 1, BYPOS(6.5) + 1 },
    { XPOS(10), YPOS(9.2), RXPOS(11) + 1, BYPOS(9.5) + 1 },
};
RECT S8_tbt[] = {
    { XPOS(16), YPOS(10.2), RXPOS(17) + 1, BYPOS(10.5) + 1 },
    { XPOS(15), YPOS(11.2), RXPOS(16) + 1, BYPOS(11.5) + 1 },
    { XPOS(18), YPOS(7.2), RXPOS(19) + 1, BYPOS(7.5) + 1 },
    { XPOS(19), YPOS(8.2), RXPOS(20) + 1, BYPOS(8.5) + 1 },
};
RECT S9_tbt[] = {
    { XPOS(1), YPOS(8.2), RXPOS(2) + 1, BYPOS(8.5) + 1 },//
    { XPOS(2), YPOS(8.2), RXPOS(3) + 1, BYPOS(8.5) + 1 },
    { XPOS(3), YPOS(8.2), RXPOS(4) + 1, BYPOS(8.5) + 1 },
    { XPOS(4), YPOS(8.2), RXPOS(5) + 1, BYPOS(8.5) + 1 },
    { XPOS(5), YPOS(8.2), RXPOS(6) + 1, BYPOS(8.5) + 1 },
    { XPOS(6), YPOS(8.2), RXPOS(7) + 1, BYPOS(8.5) + 1 },
    { XPOS(7), YPOS(8.2), RXPOS(8) + 1, BYPOS(8.5) + 1 },
    { XPOS(8), YPOS(9.2), RXPOS(9) + 1, BYPOS(9.5) + 1 },
    { XPOS(9), YPOS(9.2), RXPOS(10) + 1, BYPOS(9.5) + 1 }, //
    { XPOS(10), YPOS(9.2), RXPOS(11) + 1, BYPOS(9.5) + 1 },
    { XPOS(11), YPOS(9.2), RXPOS(12) + 1, BYPOS(9.5) + 1 },
    { XPOS(12), YPOS(9.2), RXPOS(13) + 1, BYPOS(9.5) + 1 },
    { XPOS(15), YPOS(9.2), RXPOS(16) + 1, BYPOS(9.5) + 1 }, //
    { XPOS(16), YPOS(9.2), RXPOS(17) + 1, BYPOS(9.5) + 1 },
    { XPOS(17), YPOS(9.2), RXPOS(18) + 1, BYPOS(9.5) + 1 },
    { XPOS(18), YPOS(9.2), RXPOS(19) + 1, BYPOS(9.5) + 1 },
    { XPOS(19), YPOS(9.2), RXPOS(20) + 1, BYPOS(9.5) + 1 },
    { XPOS(20), YPOS(9.2), RXPOS(21) + 1, BYPOS(9.5) + 1 },
    { XPOS(21), YPOS(9.2), RXPOS(22) + 1, BYPOS(9.5) + 1 },
    { XPOS(22), YPOS(9.2), RXPOS(23) + 1, BYPOS(9.5) + 1 },
    { XPOS(23), YPOS(9.2), RXPOS(24) + 1, BYPOS(9.5) + 1 },
    { XPOS(24), YPOS(9.2), RXPOS(25) + 1, BYPOS(9.5) + 1 },
    { XPOS(25), YPOS(9.2), RXPOS(26) + 1, BYPOS(9.5) + 1 },
    { XPOS(20), YPOS(7.2), RXPOS(21) + 1, BYPOS(7.5) + 1 }, //
    { XPOS(21), YPOS(7.2), RXPOS(22) + 1, BYPOS(7.5) + 1 },
    { XPOS(22), YPOS(7.2), RXPOS(23) + 1, BYPOS(7.5) + 1 },
};
RECT S10_tbt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_tbt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_tbt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_tbt[] = {
    {XPOS(20), YPOS(13.2), RXPOS(21) + 1, BYPOS(13.5) + 1 },
    {XPOS(23), YPOS(12.2), RXPOS(24) + 1, BYPOS(12.5) + 1 },
};

int Num_S1_Tb = sizeof(S1_tb) / sizeof(S1_tb[0]);
int Num_S2_Tb = sizeof(S2_tb) / sizeof(S2_tb[0]);
int Num_S3_Tb = sizeof(S3_tb) / sizeof(S3_tb[0]);
int Num_S4_Tb = sizeof(S4_tb) / sizeof(S4_tb[0]);
int Num_S5_Tb = sizeof(S5_tb) / sizeof(S5_tb[0]);
int Num_S6_Tb = sizeof(S6_tb) / sizeof(S6_tb[0]);
int Num_S7_Tb = sizeof(S7_tb) / sizeof(S7_tb[0]);
int Num_S8_Tb = sizeof(S8_tb) / sizeof(S8_tb[0]);
int Num_S9_Tb = sizeof(S9_tb) / sizeof(S9_tb[0]);
int Num_S10_Tb = sizeof(S10_tb) / sizeof(S10_tb[0]);
int Num_S11_Tb = sizeof(S11_tb) / sizeof(S11_tb[0]);
int Num_S12_Tb = sizeof(S12_tb) / sizeof(S12_tb[0]);
int Num_S13_Tb = sizeof(S13_tb) / sizeof(S13_tb[0]);

int Stage_Tb[] = {
    Num_S1_Tb,
    Num_S2_Tb,
    Num_S3_Tb,
    Num_S4_Tb,
    Num_S5_Tb,
    Num_S6_Tb,
    Num_S7_Tb,
    Num_S8_Tb,
    Num_S9_Tb,
    Num_S10_Tb,
    Num_S11_Tb,
    Num_S12_Tb,
    Num_S13_Tb,
};


RECT* Stage_tb[] = {
    S1_tb,
    S2_tb,
    S3_tb,
    S4_tb,
    S5_tb,
    S6_tb,
    S7_tb,
    S8_tb,
    S9_tb,
    S10_tb,
    S11_tb,
    S12_tb,
    S13_tb,
};
RECT* Stage_tbw[] = {
    S1_tbw,
    S2_tbw,
    S3_tbw,
    S4_tbw,
    S5_tbw,
    S6_tbw,
    S7_tbw,
    S8_tbw,
    S9_tbw,
    S10_tbw,
    S11_tbw,
    S12_tbw,
    S13_tbw,
};
RECT* Stage_tbt[] = {
    S1_tbt,
    S2_tbt,
    S3_tbt,
    S4_tbt,
    S5_tbt,
    S6_tbt,
    S7_tbt,
    S8_tbt,
    S9_tbt,
    S10_tbt,
    S11_tbt,
    S12_tbt,
    S13_tbt,
};


extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern HBITMAP hBitmapthrom;
extern bool Stop, Stop2;
extern HDC MemDC;
extern bool Elect;
extern bool Moveth;
extern bool b_ball;
extern bool no_dead;


void Tb_Wall() {
    for (int i = 0; i < Stage_Tb[Stage]; i++) {
        RECT rect = Stage_tbw[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 7 >= rect.left && ball.right - 7 <= rect.right) {
            ball.bottom = rect.top;
            ball.top = ball.bottom - 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Speed1 = -40; // 공이 튀어오르게 -로 설정
            Speed2 = -40;
        }
        // 사각형의 좌측과 충돌하는 경우
        if (ball.right >= rect.left && ball.left < rect.left &&
            ball.bottom > rect.top + 5 && ball.top < rect.bottom - 5) {
            ball.right = rect.left;
            ball.left = ball.right - 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Stop, Stop2 = false;
            for (int j = 0; j < 15; j++) { // 충돌 시 좌측벽에 떨어지기
                ball.left -= 1;
                ball.right -= 1;
            }
        }
        // 하단 충돌 처리 (공이 사각형의 하단에 맞을 때)
        if (ball.top <= rect.bottom && ball.bottom >= rect.bottom &&
            ball.left + 7 >= rect.left && ball.right - 7 <= rect.right) {
            ball.top = rect.bottom;
            ball.bottom = ball.top + 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            ball.top += 1;
            ball.bottom += 1;
            Speed1 = 0; // 공이 바로 떨어지게
            Speed2 = 0;
        }
        // 사각형의 우측과 충돌하는 경우
        if (ball.left <= rect.right && ball.right >= rect.right &&
            ball.bottom > rect.top + 5 && ball.top < rect.bottom - 5) {
            ball.left = rect.right;
            ball.right = ball.left + 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Stop, Stop2 = false;
            for (int j = 0; j < 15; j++) { // 충돌 시 좌측벽에 떨어지기
                ball.left += 1;
                ball.right += 1;
            }
        }
    }
}
void Tb_Throm() {
    for (int i = 0; i < Stage_Tb[Stage]; i++) {
        RECT rect = Stage_tbt[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 7 >= rect.left && ball.right - 7 <= rect.right) {
            if (!no_dead) {
                Elect = true;
                b_ball = true;
            }
        }
        // 사각형의 좌측과 충돌하는 경우
        if (ball.right >= rect.left && ball.left < rect.left &&
            ball.bottom > rect.top + 5 && ball.top < rect.bottom - 5) {
            if (!no_dead) {
                Elect = true;
                b_ball = true;
            }
        }
        // 하단 충돌 처리 (공이 사각형의 하단에 맞을 때)
        if (ball.top <= rect.bottom && ball.bottom >= rect.bottom &&
            ball.left + 7 >= rect.left && ball.right - 7 <= rect.right) {
            if (!no_dead) {
                Elect = true;
                b_ball = true;
            }
        }
        // 사각형의 우측과 충돌하는 경우
        if (ball.left <= rect.right && ball.right >= rect.right &&
            ball.bottom > rect.top + 5 && ball.top < rect.bottom - 5) {
            if (!no_dead) {
                Elect = true;
                b_ball = true;
            }
        }
    }
}


void lookTb(HDC MemDC) {
    for (int i = 0; i < Stage_Tb[Stage]; i++) { //기본 벽
        RECT& rect = Stage_tbw[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_Throm(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapthrom);

    for (int i = 0; i < Stage_Tb[Stage]; i++) {
        RECT& rect = Stage_tb[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}