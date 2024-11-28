#include "All_Block.h"
#include "Resource.h"

// 스타블럭용 리셋부분
RECT New_S1_ss[] = { //스타블럭의 배열
    { XPOS(6), YPOS(5), RXPOS(7) + 1, BYPOS(6) + 1},
    { XPOS(6), YPOS(6), RXPOS(7) + 1, BYPOS(7) + 1},
    { XPOS(5), YPOS(5), RXPOS(6) + 1, BYPOS(6) + 1},
    { XPOS(5), YPOS(6), RXPOS(6) + 1, BYPOS(7) + 1},
    { XPOS(22), YPOS(6), RXPOS(23) + 1, BYPOS(7) + 1},
    { XPOS(22), YPOS(5), RXPOS(23) + 1, BYPOS(6) + 1},
    { XPOS(23), YPOS(6), RXPOS(24) + 1, BYPOS(7) + 1},
    { XPOS(23), YPOS(5), RXPOS(24) + 1, BYPOS(6) + 1},
};
RECT New_S2_ss[] = { //스타블럭의 배열
    { XPOS(10), YPOS(7), RXPOS(11) + 1, BYPOS(8) + 1},
    { XPOS(11), YPOS(6), RXPOS(12) + 1, BYPOS(7) + 1},
    { XPOS(12), YPOS(5), RXPOS(13) + 1, BYPOS(6) + 1},
    { XPOS(14), YPOS(0), RXPOS(15) + 1, BYPOS(1) + 1},
    { XPOS(17), YPOS(0), RXPOS(18) + 1, BYPOS(1) + 1},
    { XPOS(19), YPOS(12), RXPOS(20) + 1, BYPOS(13) + 1},
    { XPOS(20), YPOS(12), RXPOS(21) + 1, BYPOS(13) + 1},
    { XPOS(21), YPOS(12), RXPOS(22) + 1, BYPOS(13) + 1},
    { XPOS(22), YPOS(12), RXPOS(23) + 1, BYPOS(13) + 1},
    { XPOS(23), YPOS(12), RXPOS(24) + 1, BYPOS(13) + 1},
    { XPOS(19), YPOS(11), RXPOS(20) + 1, BYPOS(12) + 1},
    { XPOS(23), YPOS(11), RXPOS(24) + 1, BYPOS(12) + 1},
};
RECT New_S3_ss[] = { //스타블럭의 배열
    { XPOS(3), YPOS(11), RXPOS(4) + 1, BYPOS(12) + 1},
    { XPOS(4), YPOS(11), RXPOS(5) + 1, BYPOS(12) + 1},
    { XPOS(5), YPOS(11), RXPOS(6) + 1, BYPOS(12) + 1},
    { XPOS(3), YPOS(12), RXPOS(4) + 1, BYPOS(13) + 1},
    { XPOS(4), YPOS(12), RXPOS(5) + 1, BYPOS(13) + 1},
    { XPOS(5), YPOS(12), RXPOS(6) + 1, BYPOS(13) + 1},
};
RECT New_S4_ss[] = { XPOS(24), YPOS(10), RXPOS(25) + 1, BYPOS(11) + 1 };
RECT New_S5_ss[] = { XPOS(24), YPOS(10), RXPOS(25) + 1, BYPOS(11) + 1 };
RECT New_S6_ss[] = {
    { XPOS(24), YPOS(1), RXPOS(25) + 1, BYPOS(2) + 1},
    { XPOS(4), YPOS(5), RXPOS(5) + 1, BYPOS(6) + 1},
    { XPOS(24), YPOS(9), RXPOS(25) + 1, BYPOS(10) + 1},
};
RECT New_S7_ss[] = {
    { XPOS(8), YPOS(12), RXPOS(9) + 1, BYPOS(13) + 1},
    { XPOS(22), YPOS(12), RXPOS(23) + 1, BYPOS(13) + 1},
};
RECT New_S8_ss[] = {
    { XPOS(16), YPOS(2), RXPOS(17) + 1, BYPOS(3) + 1},
    { XPOS(16), YPOS(3), RXPOS(17) + 1, BYPOS(4) + 1},
    { XPOS(16), YPOS(7), RXPOS(17) + 1, BYPOS(8) + 1},
    { XPOS(16), YPOS(8), RXPOS(17) + 1, BYPOS(9) + 1},
    { XPOS(16), YPOS(9), RXPOS(17) + 1, BYPOS(10) + 1},
};
RECT New_S9_ss[] = {
    { XPOS(24), YPOS(5), RXPOS(25) + 1, BYPOS(6) + 1},
    { XPOS(24), YPOS(6), RXPOS(25) + 1, BYPOS(7) + 1},
    { XPOS(4), YPOS(10), RXPOS(5) + 1, BYPOS(11) + 1},
};
RECT New_S10_ss[] = {
    { XPOS(3), YPOS(2), RXPOS(4) + 1, BYPOS(3) + 1},
    { XPOS(1), YPOS(3), RXPOS(2) + 1, BYPOS(4) + 1},
    { XPOS(5), YPOS(3), RXPOS(6) + 1, BYPOS(4) + 1},
    { XPOS(28), YPOS(1), RXPOS(29) + 1, BYPOS(2) + 1},
    { XPOS(23), YPOS(3), RXPOS(24) + 1, BYPOS(4) + 1},
    { XPOS(27), YPOS(5), RXPOS(28) + 1, BYPOS(6) + 1},
    { XPOS(28), YPOS(12), RXPOS(29) + 1, BYPOS(13) + 1},
    { XPOS(4), YPOS(12), RXPOS(5) + 1, BYPOS(13) + 1},
};
RECT New_S11_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT New_S12_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT New_S13_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };

RECT* Stage_newss[] = {
    New_S1_ss,
    New_S2_ss,
    New_S3_ss,
    New_S4_ss,
    New_S5_ss,
    New_S6_ss,
    New_S7_ss,
    New_S8_ss,
    New_S9_ss,
    New_S10_ss,
    New_S11_ss,
    New_S12_ss,
    New_S13_ss,
};

int New_S1_St = sizeof(New_S1_ss) / sizeof(New_S1_ss[0]);
int New_S2_St = sizeof(New_S2_ss) / sizeof(New_S2_ss[0]);
int New_S3_St = sizeof(New_S3_ss) / sizeof(New_S3_ss[0]);
int New_S4_St = sizeof(New_S4_ss) / sizeof(New_S4_ss[0]);
int New_S5_St = sizeof(New_S5_ss) / sizeof(New_S5_ss[0]);
int New_S6_St = sizeof(New_S6_ss) / sizeof(New_S6_ss[0]);
int New_S7_St = sizeof(New_S7_ss) / sizeof(New_S7_ss[0]);
int New_S8_St = sizeof(New_S8_ss) / sizeof(New_S8_ss[0]);
int New_S9_St = sizeof(New_S9_ss) / sizeof(New_S9_ss[0]);
int New_S10_St = sizeof(New_S10_ss) / sizeof(New_S10_ss[0]);
int New_S11_St = sizeof(New_S11_ss) / sizeof(New_S11_ss[0]);
int New_S12_St = sizeof(New_S12_ss) / sizeof(New_S12_ss[0]);
int New_S13_St = sizeof(New_S13_ss) / sizeof(New_S13_ss[0]);

                                                         
int New_St[] = {
    New_S1_St,
    New_S2_St,
    New_S3_St,
    New_S4_St,
    New_S5_St,
    New_S6_St,
    New_S7_St,
    New_S8_St,
    New_S9_St,
    New_S10_St,
    New_S11_St,
    New_S12_St,
    New_S13_St,
};

extern RECT* Stage_ss[];
extern int Stage_St[];
extern int Stage;
extern double Speed1, Speed2;
extern int Count;
extern bool Stop, Stop2;
extern RECT ball;

void restar() {
    Stage_St[Stage] = New_St[Stage];
    for (int i = 0; i < New_St[Stage]; i++) {
        Stage_ss[Stage][i] = Stage_newss[Stage][i];
    }
}

//브레이크블럭용 리셋부분
RECT New_S1_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT New_S2_bb[] = { XPOS(7), YPOS(13), RXPOS(8) + 1, BYPOS(14) + 1 };
RECT New_S3_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT New_S4_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT New_S5_bb[] = { 
    { XPOS(10), YPOS(10), RXPOS(11) + 1, BYPOS(11) + 1},
    { XPOS(11), YPOS(10), RXPOS(12) + 1, BYPOS(11) + 1},
    { XPOS(12), YPOS(10), RXPOS(13) + 1, BYPOS(11) + 1},
    { XPOS(13), YPOS(10), RXPOS(14) + 1, BYPOS(11) + 1},
    { XPOS(14), YPOS(10), RXPOS(15) + 1, BYPOS(11) + 1},
    { XPOS(15), YPOS(10), RXPOS(16) + 1, BYPOS(11) + 1},
    { XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1},
    { XPOS(17), YPOS(10), RXPOS(18) + 1, BYPOS(11) + 1},
    { XPOS(21), YPOS(8), RXPOS(22) + 1, BYPOS(9) + 1},
    { XPOS(21), YPOS(9), RXPOS(22) + 1, BYPOS(10) + 1},
    { XPOS(21), YPOS(10), RXPOS(22) + 1, BYPOS(11) + 1},
};
RECT New_S6_bb[] = {
    { XPOS(7), YPOS(2), RXPOS(8) + 1, BYPOS(3) + 1},//맨위
    { XPOS(10), YPOS(2), RXPOS(11) + 1, BYPOS(3) + 1},
    { XPOS(13), YPOS(2), RXPOS(14) + 1, BYPOS(3) + 1},
    { XPOS(16), YPOS(2), RXPOS(17) + 1, BYPOS(3) + 1},
    { XPOS(7), YPOS(10), RXPOS(8) + 1, BYPOS(11) + 1},//맨아래
    { XPOS(10), YPOS(10), RXPOS(11) + 1, BYPOS(11) + 1},
    { XPOS(13), YPOS(10), RXPOS(14) + 1, BYPOS(11) + 1},
    { XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1},
    { XPOS(10), YPOS(6), RXPOS(11) + 1, BYPOS(7) + 1},//중간
    { XPOS(13), YPOS(6), RXPOS(14) + 1, BYPOS(7) + 1},
    { XPOS(16), YPOS(6), RXPOS(17) + 1, BYPOS(7) + 1},
    { XPOS(19), YPOS(6), RXPOS(20) + 1, BYPOS(7) + 1},
};
RECT New_S7_bb[] = { XPOS(6), YPOS(2), RXPOS(7) + 1, BYPOS(3) + 1 };
RECT New_S8_bb[] = {
    { XPOS(6), YPOS(7), RXPOS(7) + 1, BYPOS(8) + 1},
    { XPOS(3), YPOS(11), RXPOS(4) + 1, BYPOS(12) + 1},
    { XPOS(20), YPOS(9), RXPOS(21) + 1, BYPOS(10) + 1},
};
RECT New_S9_bb[] = { XPOS(6), YPOS(13), RXPOS(7) + 1, BYPOS(14) + 1 };
RECT New_S10_bb[] = {
    { XPOS(4), YPOS(7), RXPOS(5) + 1, BYPOS(8) + 1},
    { XPOS(5), YPOS(7), RXPOS(6) + 1, BYPOS(8) + 1},
};
RECT New_S11_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT New_S12_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT New_S13_bb[] = { 
    {XPOS(18), YPOS(10), RXPOS(19) + 1, BYPOS(11) + 1 },
    {XPOS(19), YPOS(10), RXPOS(20) + 1, BYPOS(11) + 1 },
    {XPOS(20), YPOS(10), RXPOS(21) + 1, BYPOS(11) + 1 },
};

RECT* Stage_newbb[] = {
    New_S1_bb,
    New_S2_bb,
    New_S3_bb,
    New_S4_bb,
    New_S5_bb,
    New_S6_bb,
    New_S7_bb,
    New_S8_bb,
    New_S9_bb,
    New_S10_bb,
    New_S11_bb,
    New_S12_bb,
    New_S13_bb,
};

int New_S1_Bb = sizeof(New_S1_bb) / sizeof(New_S1_bb[0]);
int New_S2_Bb = sizeof(New_S2_bb) / sizeof(New_S2_bb[0]);
int New_S3_Bb = sizeof(New_S3_bb) / sizeof(New_S3_bb[0]);
int New_S4_Bb = sizeof(New_S4_bb) / sizeof(New_S4_bb[0]);
int New_S5_Bb = sizeof(New_S5_bb) / sizeof(New_S5_bb[0]);
int New_S6_Bb = sizeof(New_S6_bb) / sizeof(New_S6_bb[0]);
int New_S7_Bb = sizeof(New_S7_bb) / sizeof(New_S7_bb[0]);
int New_S8_Bb = sizeof(New_S8_bb) / sizeof(New_S8_bb[0]);
int New_S9_Bb = sizeof(New_S9_bb) / sizeof(New_S9_bb[0]);
int New_S10_Bb = sizeof(New_S10_bb) / sizeof(New_S10_bb[0]);
int New_S11_Bb = sizeof(New_S11_bb) / sizeof(New_S11_bb[0]);
int New_S12_Bb = sizeof(New_S12_bb) / sizeof(New_S12_bb[0]);
int New_S13_Bb = sizeof(New_S13_bb) / sizeof(New_S13_bb[0]);

int New_Bb[] = {
    New_S1_Bb,
    New_S2_Bb,
    New_S3_Bb,
    New_S4_Bb,
    New_S5_Bb,
    New_S6_Bb,
    New_S7_Bb,
    New_S8_Bb,
    New_S9_Bb,
    New_S10_Bb,
    New_S11_Bb,
    New_S12_Bb,
    New_S13_Bb,
};

extern RECT* Stage_bb[];
extern int Stage_Bb[];

void rebreak() {
    Stage_Bb[Stage] = New_Bb[Stage];
    for (int i = 0; i < New_Bb[Stage]; i++) {
        Stage_bb[Stage][i] = Stage_newbb[Stage][i];
    }
}
/*--------------------------------------------------------------------------------------------------------------------------------*/
RECT S1_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_sin[] = {
    { XPOS(13), YPOS(1), RXPOS(14) + 1, BYPOS(2) + 1},
    { XPOS(13), YPOS(5), RXPOS(14) + 1, BYPOS(6) + 1},
    { XPOS(13), YPOS(9), RXPOS(14) + 1, BYPOS(10) + 1},
};
RECT S7_sin[] = { XPOS(15), YPOS(12), RXPOS(16) + 1, BYPOS(13) + 1 };
RECT S8_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_sin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_sin[] = { XPOS(16), YPOS(13), RXPOS(17) + 1, BYPOS(14) + 1 };

int Num_S1_Sin = sizeof(S1_sin) / sizeof(S1_sin[0]);
int Num_S2_Sin = sizeof(S2_sin) / sizeof(S2_sin[0]);
int Num_S3_Sin = sizeof(S3_sin) / sizeof(S3_sin[0]);
int Num_S4_Sin = sizeof(S4_sin) / sizeof(S4_sin[0]);
int Num_S5_Sin = sizeof(S5_sin) / sizeof(S5_sin[0]);
int Num_S6_Sin = sizeof(S6_sin) / sizeof(S6_sin[0]);
int Num_S7_Sin = sizeof(S7_sin) / sizeof(S7_sin[0]);
int Num_S8_Sin = sizeof(S8_sin) / sizeof(S8_sin[0]);
int Num_S9_Sin = sizeof(S9_sin) / sizeof(S9_sin[0]);
int Num_S10_Sin = sizeof(S10_sin) / sizeof(S10_sin[0]);
int Num_S11_Sin = sizeof(S11_sin) / sizeof(S11_sin[0]);
int Num_S12_Sin = sizeof(S12_sin) / sizeof(S12_sin[0]);
int Num_S13_Sin = sizeof(S13_sin) / sizeof(S13_sin[0]);

RECT* Stage_sin[] = {
    S1_sin,
    S2_sin,
    S3_sin,
    S4_sin,
    S5_sin,
    S6_sin,
    S7_sin,
    S8_sin,
    S9_sin,
    S10_sin,
    S11_sin,
    S12_sin,
    S13_sin,
};

int Stage_Sin[] = {
    Num_S1_Sin,
    Num_S2_Sin,
    Num_S3_Sin,
    Num_S4_Sin,
    Num_S5_Sin,
    Num_S6_Sin,
    Num_S7_Sin,
    Num_S8_Sin,
    Num_S9_Sin,
    Num_S10_Sin,
    Num_S11_Sin,
    Num_S12_Sin,
    Num_S13_Sin,
};

extern RECT* Stage_si[];
extern int Stage_Si[];
extern bool Moveth;
extern bool Dart;
extern bool Side_Ball;

void reSide_Item() {
    Stage_Si[Stage] = Stage_Sin[Stage];
    for (int i = 0; i < Stage_Sin[Stage]; i++) {
        Stage_si[Stage][i] = Stage_sin[Stage][i];
    }
}
/*--------------------------------------------------------------------------------------------------------------------------------*/
RECT S1_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_jin[] = {
    { XPOS(6), YPOS(10), RXPOS(7) + 1, BYPOS(11) + 1},
    { XPOS(6), YPOS(7), RXPOS(7) + 1, BYPOS(8) + 1},
    { XPOS(4), YPOS(4), RXPOS(5) + 1, BYPOS(5) + 1},
};
RECT S8_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_jin[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_jin[] = { XPOS(5), YPOS(13), RXPOS(6) + 1, BYPOS(14) + 1 };

int Num_S1_Jin = sizeof(S1_jin) / sizeof(S1_jin[0]);
int Num_S2_Jin = sizeof(S2_jin) / sizeof(S2_jin[0]);
int Num_S3_Jin = sizeof(S3_jin) / sizeof(S3_jin[0]);
int Num_S4_Jin = sizeof(S4_jin) / sizeof(S4_jin[0]);
int Num_S5_Jin = sizeof(S5_jin) / sizeof(S5_jin[0]);
int Num_S6_Jin = sizeof(S6_jin) / sizeof(S6_jin[0]);
int Num_S7_Jin = sizeof(S7_jin) / sizeof(S7_jin[0]);
int Num_S8_Jin = sizeof(S8_jin) / sizeof(S8_jin[0]);
int Num_S9_Jin = sizeof(S9_jin) / sizeof(S9_jin[0]);
int Num_S10_Jin = sizeof(S10_jin) / sizeof(S10_jin[0]);
int Num_S11_Jin = sizeof(S11_jin) / sizeof(S11_jin[0]);
int Num_S12_Jin = sizeof(S12_jin) / sizeof(S12_jin[0]);
int Num_S13_Jin = sizeof(S13_jin) / sizeof(S13_jin[0]);

RECT* Stage_jin[] = {
    S1_jin,
    S2_jin,
    S3_jin,
    S4_jin,
    S5_jin,
    S6_jin,
    S7_jin,
    S8_jin,
    S9_jin,
    S10_jin,
    S11_jin,
    S12_jin,
    S13_jin,
};

int Stage_Jin[] = {
    Num_S1_Jin,
    Num_S2_Jin,
    Num_S3_Jin,
    Num_S4_Jin,
    Num_S5_Jin,
    Num_S6_Jin,
    Num_S7_Jin,
    Num_S8_Jin,
    Num_S9_Jin,
    Num_S10_Jin,
    Num_S11_Jin,
    Num_S12_Jin,
    Num_S13_Jin,
};

extern RECT* Stage_ji[];
extern int Stage_Ji[];
extern bool Jump_Ball;

void reJump_Item() {
    Stage_Ji[Stage] = Stage_Jin[Stage];
    for (int i = 0; i < Stage_Jin[Stage]; i++) {
        Stage_ji[Stage][i] = Stage_jin[Stage][i];
    }
}
/*---------------------------------------------------------------------------------------*/
RECT S1_Start = { XPOS(14.33), YPOS(7.33), XPOS(14.33) + 20 , YPOS(7.33) + 20 };
RECT S2_Start = { XPOS(11.33), YPOS(11.33), XPOS(11.33) + 20 , YPOS(11.33) + 20 };
RECT S3_Start = { XPOS(9.33), YPOS(4.33), XPOS(9.33) + 20 , YPOS(4.33) + 20 };
RECT S4_Start = { XPOS(6.33), YPOS(0.33), XPOS(6.33) + 20 , YPOS(0.33) + 20 };
RECT S5_Start = { XPOS(4.33), YPOS(7.33), XPOS(4.33) + 20 , YPOS(7.33) + 20 };
RECT S6_Start = { XPOS(4.33), YPOS(1.33), XPOS(4.33) + 20 , YPOS(1.33) + 20 };
RECT S7_Start = { XPOS(4.33), YPOS(9.33), XPOS(4.33) + 20 , YPOS(9.33) + 20 };
RECT S8_Start = { XPOS(12.33), YPOS(5.33), XPOS(12.33) + 20 , YPOS(5.33) + 20 };
RECT S9_Start = { XPOS(8.33), YPOS(2.33), XPOS(8.33) + 20 , YPOS(2.33) + 20 };
RECT S10_Start = { XPOS(14.33), YPOS(6.33), XPOS(14.33) + 20 , YPOS(6.33) + 20 };
RECT S11_Start = { XPOS(0.33), YPOS(1.33), XPOS(0.33) + 20 , YPOS(1.33) + 20 };
RECT S12_Start = { XPOS(0.33), YPOS(1.33), XPOS(0.33) + 20 , YPOS(1.33) + 20 };
RECT S13_Start = { XPOS(13.33), YPOS(13.33), XPOS(13.33) + 20 , YPOS(13.33) + 20 };

RECT Start_b[] = {
    S1_Start,
    S2_Start,
    S3_Start,
    S4_Start,
    S5_Start,
    S6_Start,
    S7_Start,
    S8_Start,
    S9_Start,
    S10_Start,
    S1_Start,
    S2_Start,
    S13_Start,
};

void ReSet(HWND hWnd) {

    ball.left = Start_b[Stage].left;
    ball.top = Start_b[Stage].top;
    ball.right = Start_b[Stage].right;
    ball.bottom = Start_b[Stage].bottom;

    Speed1 = 0.0;
    Speed2 = 0.0;
    Count = 0;
    Stop = false;
    Stop2 = false;

    SetTimer(hWnd, 1, 1, NULL);

    restar();

    rebreak();

    reSide_Item();
    reJump_Item();
    Moveth = true;
    Dart = true;
    Side_Ball = false;
    Jump_Ball = false;
    
}
// 클리어 리셋
void nb_ReSet(HWND hWnd) {

    Speed1 = 0.0;
    Speed2 = 0.0;
    Count = 0;
    Stop = false;
    Stop2 = false;

    restar();

    rebreak();

    reSide_Item();
    reJump_Item();
    Moveth = true;
    Dart = true;
    Side_Ball = false;
    Jump_Ball = false;
}
