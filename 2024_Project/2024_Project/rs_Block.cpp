#include "All_Block.h"
#include "Resource.h"

RECT S1_rs[] = { // 사각형 블럭들의 배열
    { XPOS(14), YPOS(10), RXPOS(15) + 1, BYPOS(11) + 1}, // 스타트지점
    { XPOS(13), YPOS(10), RXPOS(14) + 1, BYPOS(11) + 1}, //좌측으로
    { XPOS(12), YPOS(10), RXPOS(13) + 1, BYPOS(11) + 1},
    { XPOS(11), YPOS(10), RXPOS(12) + 1, BYPOS(11) + 1},
    { XPOS(10), YPOS(9), RXPOS(11) + 1, BYPOS(10) + 1},
    { XPOS(8), YPOS(8), RXPOS(9) + 1, BYPOS(9) + 1},
    { XPOS(6), YPOS(7), RXPOS(7) + 1, BYPOS(8) + 1}, //이거 위 
    { XPOS(5), YPOS(7), RXPOS(6) + 1, BYPOS(8) + 1}, //이거 위
    { XPOS(4), YPOS(7), RXPOS(5) + 1, BYPOS(8) + 1},
    { XPOS(4), YPOS(6), RXPOS(5) + 1, BYPOS(7) + 1},
    { XPOS(4), YPOS(5), RXPOS(5) + 1, BYPOS(6) + 1},
    { XPOS(4), YPOS(4), RXPOS(5) + 1, BYPOS(5) + 1},
    { XPOS(15), YPOS(10), RXPOS(16) + 1, BYPOS(11) + 1}, //우측으로 3칸
    { XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1},
    { XPOS(17), YPOS(10), RXPOS(18) + 1, BYPOS(11) + 1},
    { XPOS(17), YPOS(10), RXPOS(18) + 1, BYPOS(11) + 1},
    { XPOS(18), YPOS(9), RXPOS(19) + 1, BYPOS(10) + 1},
    { XPOS(20), YPOS(8), RXPOS(21) + 1, BYPOS(9) + 1},
    { XPOS(22), YPOS(7), RXPOS(23) + 1, BYPOS(8) + 1}, //이거 위
    { XPOS(23), YPOS(7), RXPOS(24) + 1, BYPOS(8) + 1}, //아거 위
    { XPOS(24), YPOS(7), RXPOS(25) + 1, BYPOS(8) + 1},
    { XPOS(24), YPOS(6), RXPOS(25) + 1, BYPOS(7) + 1},
    { XPOS(24), YPOS(5), RXPOS(25) + 1, BYPOS(6) + 1},
    { XPOS(24), YPOS(4), RXPOS(25) + 1, BYPOS(5) + 1},
};

RECT S2_rs[] = { // 사각형 블럭들의 배열
    { XPOS(11), YPOS(13), RXPOS(12) + 1, BYPOS(14) + 1},
    { XPOS(10), YPOS(13), RXPOS(11) + 1, BYPOS(14) + 1}, // 스타트지점
    { XPOS(9), YPOS(13), RXPOS(10) + 1, BYPOS(14) + 1},
    { XPOS(6), YPOS(13), RXPOS(7) + 1, BYPOS(14) + 1},
    { XPOS(4), YPOS(11), RXPOS(5) + 1, BYPOS(12) + 1},
    { XPOS(4), YPOS(10), RXPOS(5) + 1, BYPOS(11) + 1},
    { XPOS(7), YPOS(9), RXPOS(8) + 1, BYPOS(10) + 1},
    { XPOS(8), YPOS(9), RXPOS(9) + 1, BYPOS(10) + 1},
    //
    { XPOS(10), YPOS(8), RXPOS(11) + 1, BYPOS(9) + 1},
    { XPOS(11), YPOS(7), RXPOS(12) + 1, BYPOS(8) + 1},
    { XPOS(12), YPOS(6), RXPOS(13) + 1, BYPOS(7) + 1},
    { XPOS(13), YPOS(5), RXPOS(14) + 1, BYPOS(6) + 1},
    //
    { XPOS(19), YPOS(13), RXPOS(20) + 1, BYPOS(14) + 1},
    { XPOS(20), YPOS(13), RXPOS(21) + 1, BYPOS(14) + 1},
    { XPOS(21), YPOS(13), RXPOS(22) + 1, BYPOS(14) + 1},
    { XPOS(22), YPOS(13), RXPOS(23) + 1, BYPOS(14) + 1},
    { XPOS(23), YPOS(13), RXPOS(24) + 1, BYPOS(14) + 1},

    { XPOS(24), YPOS(12), RXPOS(25) + 1, BYPOS(13) + 1},
    { XPOS(24), YPOS(11), RXPOS(25) + 1, BYPOS(12) + 1},
    { XPOS(24), YPOS(10), RXPOS(25) + 1, BYPOS(11) + 1},
    { XPOS(24), YPOS(9), RXPOS(25) + 1, BYPOS(10) + 1},
    { XPOS(24), YPOS(8), RXPOS(25) + 1, BYPOS(9) + 1},
};

RECT S3_rs[] = { // 사각형 블럭들의 배열
    { XPOS(8), YPOS(3), RXPOS(9) + 1, BYPOS(4) + 1},
    { XPOS(8), YPOS(4), RXPOS(9) + 1, BYPOS(5) + 1},
    { XPOS(8), YPOS(5), RXPOS(9) + 1, BYPOS(6) + 1},
    { XPOS(8), YPOS(6), RXPOS(9) + 1, BYPOS(7) + 1},
    { XPOS(9), YPOS(6), RXPOS(10) + 1, BYPOS(7) + 1}, // 스타트지점
    { XPOS(10), YPOS(6), RXPOS(11) + 1, BYPOS(7) + 1},
    { XPOS(13), YPOS(8), RXPOS(14) + 1, BYPOS(9) + 1},
    { XPOS(16), YPOS(7), RXPOS(17) + 1, BYPOS(8) + 1},
    { XPOS(21), YPOS(5), RXPOS(22) + 1, BYPOS(6) + 1},
    { XPOS(21), YPOS(6), RXPOS(22) + 1, BYPOS(7) + 1},
    { XPOS(21), YPOS(7), RXPOS(22) + 1, BYPOS(8) + 1},
    { XPOS(21), YPOS(8), RXPOS(22) + 1, BYPOS(9) + 1},
    { XPOS(21), YPOS(9), RXPOS(22) + 1, BYPOS(10) + 1},
    { XPOS(20), YPOS(10), RXPOS(21) + 1, BYPOS(11) + 1},
    { XPOS(21), YPOS(5), RXPOS(22) + 1, BYPOS(6) + 1},
    { XPOS(22), YPOS(4), RXPOS(23) + 1, BYPOS(5) + 1},
    { XPOS(23), YPOS(4), RXPOS(24) + 1, BYPOS(5) + 1},
    { XPOS(23), YPOS(12), RXPOS(24) + 1, BYPOS(13) + 1},
    { XPOS(2), YPOS(9), RXPOS(3) + 1, BYPOS(10) + 1},
    { XPOS(2), YPOS(10), RXPOS(3) + 1, BYPOS(11) + 1},
    { XPOS(2), YPOS(11), RXPOS(3) + 1, BYPOS(12) + 1},
    { XPOS(3), YPOS(13), RXPOS(4) + 1, BYPOS(14) + 1},
    { XPOS(4), YPOS(13), RXPOS(5) + 1, BYPOS(14) + 1},
    { XPOS(5), YPOS(13), RXPOS(6) + 1, BYPOS(14) + 1},
};

RECT S4_rs[] = { // 사각형 블럭들의 배열
    { XPOS(5), YPOS(2), RXPOS(6) + 1, BYPOS(3) + 1}, //스타토
    { XPOS(6), YPOS(2), RXPOS(7) + 1, BYPOS(3) + 1},
    { XPOS(7), YPOS(2), RXPOS(8) + 1, BYPOS(3) + 1},
    { XPOS(2), YPOS(3), RXPOS(3) + 1, BYPOS(4) + 1},
    { XPOS(2), YPOS(4), RXPOS(3) + 1, BYPOS(5) + 1},
    { XPOS(2), YPOS(5), RXPOS(3) + 1, BYPOS(6) + 1},
    { XPOS(20), YPOS(10), RXPOS(21) + 1, BYPOS(11) + 1},
    { XPOS(20), YPOS(11), RXPOS(21) + 1, BYPOS(12) + 1},

    { XPOS(23), YPOS(11), RXPOS(24) + 1, BYPOS(12) + 1},
    { XPOS(24), YPOS(11), RXPOS(25) + 1, BYPOS(12) + 1},
    { XPOS(25), YPOS(11), RXPOS(26) + 1, BYPOS(12) + 1},
    
};

RECT S5_rs[] = { // 사각형 블럭들의 배열
    { XPOS(2), YPOS(3), RXPOS(3) + 1, BYPOS(4) + 1},
    { XPOS(2), YPOS(4), RXPOS(3) + 1, BYPOS(5) + 1},
    { XPOS(2), YPOS(5), RXPOS(3) + 1, BYPOS(6) + 1},
    { XPOS(2), YPOS(6), RXPOS(3) + 1, BYPOS(7) + 1},
    { XPOS(2), YPOS(7), RXPOS(3) + 1, BYPOS(8) + 1},
    { XPOS(2), YPOS(8), RXPOS(3) + 1, BYPOS(9) + 1},
    { XPOS(2), YPOS(9), RXPOS(3) + 1, BYPOS(10) + 1},
    { XPOS(3), YPOS(9), RXPOS(4) + 1, BYPOS(10) + 1},
    { XPOS(4), YPOS(9), RXPOS(5) + 1, BYPOS(10) + 1},
    { XPOS(6), YPOS(10), RXPOS(7) + 1, BYPOS(11) + 1},
    { XPOS(7), YPOS(10), RXPOS(8) + 1, BYPOS(11) + 1},
    { XPOS(7), YPOS(10), RXPOS(8) + 1, BYPOS(11) + 1},
    { XPOS(9), YPOS(6), RXPOS(10) + 1, BYPOS(7) + 1},
    { XPOS(12), YPOS(6), RXPOS(13) + 1, BYPOS(7) + 1},
    { XPOS(15), YPOS(6), RXPOS(16) + 1, BYPOS(7) + 1},
    { XPOS(18), YPOS(6), RXPOS(19) + 1, BYPOS(7) + 1},
    { XPOS(19), YPOS(7), RXPOS(20) + 1, BYPOS(8) + 1},
    { XPOS(19), YPOS(8), RXPOS(20) + 1, BYPOS(9) + 1},
    { XPOS(20), YPOS(8), RXPOS(21) + 1, BYPOS(9) + 1},
    { XPOS(20), YPOS(9), RXPOS(21) + 1, BYPOS(10) + 1},
    { XPOS(23), YPOS(9), RXPOS(24) + 1, BYPOS(10) + 1},
    { XPOS(24), YPOS(9), RXPOS(25) + 1, BYPOS(10) + 1},
    { XPOS(25), YPOS(9), RXPOS(26) + 1, BYPOS(10) + 1},
    { XPOS(23), YPOS(11), RXPOS(24) + 1, BYPOS(12) + 1},
    { XPOS(24), YPOS(11), RXPOS(25) + 1, BYPOS(12) + 1},
    { XPOS(25), YPOS(11), RXPOS(26) + 1, BYPOS(12) + 1},
    { XPOS(25), YPOS(10), RXPOS(26) + 1, BYPOS(11) + 1},
};

RECT S6_rs[] = { 
    { XPOS(2), YPOS(2), RXPOS(3) + 1, BYPOS(3) + 1}, //상단
    { XPOS(2), YPOS(3), RXPOS(3) + 1, BYPOS(4) + 1},
    { XPOS(2), YPOS(4), RXPOS(3) + 1, BYPOS(5) + 1},
    { XPOS(2), YPOS(5), RXPOS(3) + 1, BYPOS(6) + 1},
    { XPOS(2), YPOS(6), RXPOS(3) + 1, BYPOS(7) + 1},
    { XPOS(3), YPOS(2), RXPOS(4) + 1, BYPOS(3) + 1},
    { XPOS(4), YPOS(2), RXPOS(5) + 1, BYPOS(3) + 1},
    { XPOS(5), YPOS(2), RXPOS(6) + 1, BYPOS(3) + 1},
    { XPOS(3), YPOS(6), RXPOS(4) + 1, BYPOS(7) + 1},
    { XPOS(4), YPOS(6), RXPOS(5) + 1, BYPOS(7) + 1},
    { XPOS(5), YPOS(6), RXPOS(6) + 1, BYPOS(7) + 1}, //왼쪽 끝
    { XPOS(21), YPOS(2), RXPOS(22) + 1, BYPOS(3) + 1},
    { XPOS(22), YPOS(2), RXPOS(23) + 1, BYPOS(3) + 1},
    { XPOS(23), YPOS(2), RXPOS(24) + 1, BYPOS(3) + 1},
    { XPOS(24), YPOS(2), RXPOS(25) + 1, BYPOS(3) + 1},
    { XPOS(25), YPOS(2), RXPOS(26) + 1, BYPOS(3) + 1},
    { XPOS(25), YPOS(3), RXPOS(26) + 1, BYPOS(4) + 1},
    { XPOS(25), YPOS(4), RXPOS(26) + 1, BYPOS(5) + 1},
    { XPOS(25), YPOS(5), RXPOS(26) + 1, BYPOS(6) + 1},
    { XPOS(25), YPOS(6), RXPOS(26) + 1, BYPOS(7) + 1},
    { XPOS(25), YPOS(7), RXPOS(26) + 1, BYPOS(8) + 1},
    { XPOS(25), YPOS(8), RXPOS(26) + 1, BYPOS(9) + 1},
    { XPOS(25), YPOS(9), RXPOS(26) + 1, BYPOS(10) + 1},
    { XPOS(21), YPOS(10), RXPOS(22) + 1, BYPOS(11) + 1},
    { XPOS(22), YPOS(10), RXPOS(23) + 1, BYPOS(11) + 1},
    { XPOS(23), YPOS(10), RXPOS(24) + 1, BYPOS(11) + 1},
    { XPOS(24), YPOS(10), RXPOS(25) + 1, BYPOS(11) + 1},
    { XPOS(25), YPOS(10), RXPOS(26) + 1, BYPOS(11) + 1},
};
RECT S7_rs[] = { 
    { XPOS(4), YPOS(11), RXPOS(5) + 1, BYPOS(12) + 1},//가장왼쪽
    { XPOS(5), YPOS(11), RXPOS(6) + 1, BYPOS(12) + 1},
    { XPOS(6), YPOS(11), RXPOS(7) + 1, BYPOS(12) + 1},
    { XPOS(7), YPOS(11), RXPOS(8) + 1, BYPOS(12) + 1},
    { XPOS(7), YPOS(10), RXPOS(8) + 1, BYPOS(11) + 1},
    { XPOS(7), YPOS(9), RXPOS(8) + 1, BYPOS(10) + 1},
    { XPOS(7), YPOS(8), RXPOS(8) + 1, BYPOS(9) + 1},
    { XPOS(7), YPOS(7), RXPOS(8) + 1, BYPOS(8) + 1},
    { XPOS(7), YPOS(6), RXPOS(8) + 1, BYPOS(7) + 1},
    { XPOS(7), YPOS(5), RXPOS(8) + 1, BYPOS(6) + 1},
    { XPOS(7), YPOS(4), RXPOS(8) + 1, BYPOS(5) + 1},
    { XPOS(7), YPOS(3), RXPOS(8) + 1, BYPOS(4) + 1},
    { XPOS(7), YPOS(2), RXPOS(8) + 1, BYPOS(3) + 1},
    { XPOS(6), YPOS(8), RXPOS(7) + 1, BYPOS(9) + 1},//왼쪽 짜가리
    { XPOS(4), YPOS(5), RXPOS(5) + 1, BYPOS(6) + 1},
    { XPOS(11), YPOS(2), RXPOS(12) + 1, BYPOS(3) + 1},//중간 세로 일자
    { XPOS(11), YPOS(4), RXPOS(12) + 1, BYPOS(5) + 1},
    { XPOS(11), YPOS(5), RXPOS(12) + 1, BYPOS(6) + 1},
    { XPOS(11), YPOS(7), RXPOS(12) + 1, BYPOS(8) + 1},
    { XPOS(11), YPOS(8), RXPOS(12) + 1, BYPOS(9) + 1},
    { XPOS(8), YPOS(13), RXPOS(9) + 1, BYPOS(14) + 1},//중간 가로 일자
    { XPOS(9), YPOS(13), RXPOS(10) + 1, BYPOS(14) + 1},
    { XPOS(10), YPOS(13), RXPOS(11) + 1, BYPOS(14) + 1},
    { XPOS(11), YPOS(13), RXPOS(12) + 1, BYPOS(14) + 1},
    { XPOS(12), YPOS(13), RXPOS(13) + 1, BYPOS(14) + 1},
    { XPOS(13), YPOS(13), RXPOS(14) + 1, BYPOS(14) + 1},
    { XPOS(14), YPOS(13), RXPOS(15) + 1, BYPOS(14) + 1},
    { XPOS(15), YPOS(13), RXPOS(16) + 1, BYPOS(14) + 1},
    { XPOS(20), YPOS(13), RXPOS(21) + 1, BYPOS(14) + 1},//오른쪽
    { XPOS(21), YPOS(13), RXPOS(22) + 1, BYPOS(14) + 1},
    { XPOS(22), YPOS(13), RXPOS(23) + 1, BYPOS(14) + 1},
    { XPOS(23), YPOS(13), RXPOS(24) + 1, BYPOS(14) + 1},
    { XPOS(24), YPOS(13), RXPOS(25) + 1, BYPOS(14) + 1},
};
RECT S8_rs[] = { 
    { XPOS(11), YPOS(7), RXPOS(12) + 1, BYPOS(8) + 1},
    { XPOS(12), YPOS(7), RXPOS(13) + 1, BYPOS(8) + 1},
    { XPOS(13), YPOS(7), RXPOS(14) + 1, BYPOS(8) + 1},
    { XPOS(17), YPOS(6), RXPOS(18) + 1, BYPOS(7) + 1},
};
RECT S9_rs[] = {
    { XPOS(6), YPOS(2), RXPOS(7) + 1, BYPOS(3) + 1},//
    { XPOS(6), YPOS(3), RXPOS(7) + 1, BYPOS(4) + 1},
    { XPOS(7), YPOS(4), RXPOS(8) + 1, BYPOS(5) + 1},
    { XPOS(8), YPOS(4), RXPOS(9) + 1, BYPOS(5) + 1},
    { XPOS(9), YPOS(4), RXPOS(10) + 1, BYPOS(5) + 1},
    { XPOS(3), YPOS(9), RXPOS(4) + 1, BYPOS(10) + 1}, //
    { XPOS(3), YPOS(10), RXPOS(4) + 1, BYPOS(11) + 1},
    { XPOS(3), YPOS(11), RXPOS(4) + 1, BYPOS(12) + 1},
    { XPOS(4), YPOS(11), RXPOS(5) + 1, BYPOS(12) + 1},
    { XPOS(13), YPOS(13), RXPOS(14) + 1, BYPOS(14) + 1}, //
    { XPOS(14), YPOS(13), RXPOS(15) + 1, BYPOS(14) + 1},
    { XPOS(26), YPOS(4), RXPOS(27) + 1, BYPOS(5) + 1}, //
    { XPOS(25), YPOS(5), RXPOS(26) + 1, BYPOS(6) + 1},
    { XPOS(25), YPOS(6), RXPOS(26) + 1, BYPOS(7) + 1},
    { XPOS(25), YPOS(7), RXPOS(26) + 1, BYPOS(8) + 1},
    { XPOS(24), YPOS(7), RXPOS(25) + 1, BYPOS(8) + 1},
};
RECT S10_rs[] = { 
    { XPOS(8), YPOS(0), RXPOS(9) + 1, BYPOS(1) + 1}, //
    { XPOS(8), YPOS(1), RXPOS(9) + 1, BYPOS(2) + 1},
    { XPOS(8), YPOS(2), RXPOS(9) + 1, BYPOS(3) + 1},
    { XPOS(8), YPOS(3), RXPOS(9) + 1, BYPOS(4) + 1},
    { XPOS(8), YPOS(4), RXPOS(9) + 1, BYPOS(5) + 1},
    { XPOS(8), YPOS(5), RXPOS(9) + 1, BYPOS(6) + 1},
    { XPOS(8), YPOS(6), RXPOS(9) + 1, BYPOS(7) + 1},
    { XPOS(8), YPOS(8), RXPOS(9) + 1, BYPOS(9) + 1},
    { XPOS(8), YPOS(9), RXPOS(9) + 1, BYPOS(10) + 1},
    { XPOS(8), YPOS(10), RXPOS(9) + 1, BYPOS(11) + 1},
    { XPOS(8), YPOS(11), RXPOS(9) + 1, BYPOS(12) + 1},
    { XPOS(8), YPOS(12), RXPOS(9) + 1, BYPOS(13) + 1},
    { XPOS(8), YPOS(13), RXPOS(9) + 1, BYPOS(14) + 1},
    { XPOS(7), YPOS(13), RXPOS(8) + 1, BYPOS(14) + 1},
    { XPOS(3), YPOS(13), RXPOS(4) + 1, BYPOS(14) + 1},
    { XPOS(4), YPOS(13), RXPOS(5) + 1, BYPOS(14) + 1},
    { XPOS(5), YPOS(13), RXPOS(6) + 1, BYPOS(14) + 1},
    { XPOS(13), YPOS(8), RXPOS(14) + 1, BYPOS(9) + 1}, //
    { XPOS(14), YPOS(8), RXPOS(15) + 1, BYPOS(9) + 1},
    { XPOS(15), YPOS(8), RXPOS(16) + 1, BYPOS(9) + 1},
    { XPOS(18), YPOS(9), RXPOS(19) + 1, BYPOS(10) + 1},
    { XPOS(20), YPOS(11), RXPOS(21) + 1, BYPOS(12) + 1},
    { XPOS(22), YPOS(13), RXPOS(23) + 1, BYPOS(14) + 1},
    { XPOS(25), YPOS(13), RXPOS(26) + 1, BYPOS(14) + 1},
    { XPOS(28), YPOS(13), RXPOS(29) + 1, BYPOS(14) + 1},
    { XPOS(6), YPOS(8), RXPOS(7) + 1, BYPOS(9) + 1},
};
RECT S11_rs[] = {
    { XPOS(0), YPOS(1), RXPOS(1) + 1, BYPOS(2) + 1}, //
    { XPOS(0), YPOS(2), RXPOS(1) + 1, BYPOS(3) + 1},
    { XPOS(1), YPOS(3), RXPOS(2) + 1, BYPOS(4) + 1},
    { XPOS(2), YPOS(3), RXPOS(3) + 1, BYPOS(4) + 1},
    { XPOS(1), YPOS(9), RXPOS(2) + 1, BYPOS(10) + 1}, //
    { XPOS(1), YPOS(12), RXPOS(2) + 1, BYPOS(13) + 1},
    { XPOS(10), YPOS(3), RXPOS(11) + 1, BYPOS(4) + 1}, //
    { XPOS(10), YPOS(5), RXPOS(11) + 1, BYPOS(6) + 1},
    { XPOS(10), YPOS(6), RXPOS(11) + 1, BYPOS(7) + 1},
    { XPOS(11), YPOS(12), RXPOS(12) + 1, BYPOS(13) + 1},
    { XPOS(27), YPOS(3), RXPOS(28) + 1, BYPOS(4) + 1}, //
    { XPOS(16), YPOS(6), RXPOS(17) + 1, BYPOS(7) + 1},
    { XPOS(22), YPOS(8), RXPOS(23) + 1, BYPOS(9) + 1},
    { XPOS(20), YPOS(10), RXPOS(21) + 1, BYPOS(11) + 1},
    { XPOS(13), YPOS(13), RXPOS(14) + 1, BYPOS(14) + 1},
    { XPOS(21), YPOS(13), RXPOS(22) + 1, BYPOS(14) + 1},
    { XPOS(28), YPOS(13), RXPOS(29) + 1, BYPOS(14) + 1},
    { XPOS(29), YPOS(0), RXPOS(30) + 1, BYPOS(1) + 1}, // 존나 긴 기둥벽
    { XPOS(29), YPOS(1), RXPOS(30) + 1, BYPOS(2) + 1},
    { XPOS(29), YPOS(2), RXPOS(30) + 1, BYPOS(3) + 1},
    { XPOS(29), YPOS(3), RXPOS(30) + 1, BYPOS(4) + 1},
    { XPOS(29), YPOS(4), RXPOS(30) + 1, BYPOS(5) + 1},
    { XPOS(29), YPOS(5), RXPOS(30) + 1, BYPOS(6) + 1},
    { XPOS(29), YPOS(6), RXPOS(30) + 1, BYPOS(7) + 1},
    { XPOS(29), YPOS(7), RXPOS(30) + 1, BYPOS(8) + 1},
    { XPOS(29), YPOS(8), RXPOS(30) + 1, BYPOS(9) + 1},
    { XPOS(29), YPOS(9), RXPOS(30) + 1, BYPOS(10) + 1},
    { XPOS(29), YPOS(10), RXPOS(30) + 1, BYPOS(11) + 1},
    { XPOS(29), YPOS(11), RXPOS(30) + 1, BYPOS(12) + 1},
    { XPOS(29), YPOS(12), RXPOS(30) + 1, BYPOS(13) + 1},
    { XPOS(29), YPOS(13), RXPOS(30) + 1, BYPOS(14) + 1},
    { XPOS(-10), YPOS(-2), RXPOS(30) + 1, BYPOS(-1) + 1}, // 이탈방지 블럭
};
RECT S12_rs[] = { 
    { XPOS(1), YPOS(1), RXPOS(2) + 1, BYPOS(2) + 1},
{ XPOS(2), YPOS(1), RXPOS(3) + 1, BYPOS(2) + 1},
{ XPOS(3), YPOS(1), RXPOS(4) + 1, BYPOS(2) + 1},
{ XPOS(4), YPOS(1), RXPOS(5) + 1, BYPOS(2) + 1},
{ XPOS(5), YPOS(1), RXPOS(6) + 1, BYPOS(2) + 1},
{ XPOS(6), YPOS(1), RXPOS(7) + 1, BYPOS(2) + 1},
{ XPOS(7), YPOS(1), RXPOS(8) + 1, BYPOS(2) + 1},
{ XPOS(8), YPOS(1), RXPOS(9) + 1, BYPOS(2) + 1},
{ XPOS(9), YPOS(1), RXPOS(10) + 1, BYPOS(2) + 1},
{ XPOS(10), YPOS(1), RXPOS(11) + 1, BYPOS(2) + 1},
{ XPOS(11), YPOS(1), RXPOS(12) + 1, BYPOS(2) + 1},
{ XPOS(12), YPOS(1), RXPOS(13) + 1, BYPOS(2) + 1},
{ XPOS(13), YPOS(1), RXPOS(14) + 1, BYPOS(2) + 1},
{ XPOS(14), YPOS(1), RXPOS(15) + 1, BYPOS(2) + 1},
{ XPOS(15), YPOS(1), RXPOS(16) + 1, BYPOS(2) + 1},
{ XPOS(16), YPOS(1), RXPOS(17) + 1, BYPOS(2) + 1},
{ XPOS(17), YPOS(1), RXPOS(18) + 1, BYPOS(2) + 1},
{ XPOS(18), YPOS(1), RXPOS(19) + 1, BYPOS(2) + 1},
{ XPOS(19), YPOS(1), RXPOS(20) + 1, BYPOS(2) + 1},
{ XPOS(20), YPOS(1), RXPOS(21) + 1, BYPOS(2) + 1},
{ XPOS(21), YPOS(1), RXPOS(22) + 1, BYPOS(2) + 1},
{ XPOS(22), YPOS(1), RXPOS(23) + 1, BYPOS(2) + 1},
{ XPOS(23), YPOS(1), RXPOS(24) + 1, BYPOS(2) + 1},
{ XPOS(24), YPOS(1), RXPOS(25) + 1, BYPOS(2) + 1},
{ XPOS(25), YPOS(1), RXPOS(26) + 1, BYPOS(2) + 1},
{ XPOS(26), YPOS(1), RXPOS(27) + 1, BYPOS(2) + 1},
{ XPOS(27), YPOS(1), RXPOS(28) + 1, BYPOS(2) + 1},
{ XPOS(1), YPOS(12), RXPOS(2) + 1, BYPOS(13) + 1},
{ XPOS(2), YPOS(12), RXPOS(3) + 1, BYPOS(13) + 1},
{ XPOS(3), YPOS(12), RXPOS(4) + 1, BYPOS(13) + 1},
{ XPOS(4), YPOS(12), RXPOS(5) + 1, BYPOS(13) + 1},
{ XPOS(5), YPOS(12), RXPOS(6) + 1, BYPOS(13) + 1},
{ XPOS(6), YPOS(12), RXPOS(7) + 1, BYPOS(13) + 1},
{ XPOS(7), YPOS(12), RXPOS(8) + 1, BYPOS(13) + 1},
{ XPOS(8), YPOS(12), RXPOS(9) + 1, BYPOS(13) + 1},
{ XPOS(9), YPOS(12), RXPOS(10) + 1, BYPOS(13) + 1},
{ XPOS(10), YPOS(12), RXPOS(11) + 1, BYPOS(13) + 1},
{ XPOS(11), YPOS(12), RXPOS(12) + 1, BYPOS(13) + 1},
{ XPOS(12), YPOS(12), RXPOS(13) + 1, BYPOS(13) + 1},
{ XPOS(13), YPOS(12), RXPOS(14) + 1, BYPOS(13) + 1},
{ XPOS(14), YPOS(12), RXPOS(15) + 1, BYPOS(13) + 1},
{ XPOS(15), YPOS(12), RXPOS(16) + 1, BYPOS(13) + 1},
{ XPOS(16), YPOS(12), RXPOS(17) + 1, BYPOS(13) + 1},
{ XPOS(17), YPOS(12), RXPOS(18) + 1, BYPOS(13) + 1},
{ XPOS(18), YPOS(12), RXPOS(19) + 1, BYPOS(13) + 1},
{ XPOS(19), YPOS(12), RXPOS(20) + 1, BYPOS(13) + 1},
{ XPOS(20), YPOS(12), RXPOS(21) + 1, BYPOS(13) + 1},
{ XPOS(21), YPOS(12), RXPOS(22) + 1, BYPOS(13) + 1},
{ XPOS(22), YPOS(12), RXPOS(23) + 1, BYPOS(13) + 1},
{ XPOS(23), YPOS(12), RXPOS(24) + 1, BYPOS(13) + 1},
{ XPOS(24), YPOS(12), RXPOS(25) + 1, BYPOS(13) + 1},
{ XPOS(25), YPOS(12), RXPOS(26) + 1, BYPOS(13) + 1},
{ XPOS(26), YPOS(12), RXPOS(27) + 1, BYPOS(13) + 1},
{ XPOS(27), YPOS(12), RXPOS(28) + 1, BYPOS(13) + 1},

{ XPOS(1), YPOS(2), RXPOS(2) + 1, BYPOS(3) + 1},
{ XPOS(1), YPOS(3), RXPOS(2) + 1, BYPOS(4) + 1},
{ XPOS(1), YPOS(4), RXPOS(2) + 1, BYPOS(5) + 1},
{ XPOS(1), YPOS(5), RXPOS(2) + 1, BYPOS(6) + 1},
{ XPOS(1), YPOS(6), RXPOS(2) + 1, BYPOS(7) + 1},
{ XPOS(1), YPOS(7), RXPOS(2) + 1, BYPOS(8) + 1},
{ XPOS(1), YPOS(8), RXPOS(2) + 1, BYPOS(9) + 1},
{ XPOS(1), YPOS(9), RXPOS(2) + 1, BYPOS(10) + 1},
{ XPOS(1), YPOS(10), RXPOS(2) + 1, BYPOS(11) + 1},
{ XPOS(1), YPOS(11), RXPOS(2) + 1, BYPOS(12) + 1},
{ XPOS(27), YPOS(2), RXPOS(28) + 1, BYPOS(3) + 1},
{ XPOS(27), YPOS(3), RXPOS(28) + 1, BYPOS(4) + 1},
{ XPOS(27), YPOS(4), RXPOS(28) + 1, BYPOS(5) + 1},
{ XPOS(27), YPOS(5), RXPOS(28) + 1, BYPOS(6) + 1},
{ XPOS(27), YPOS(6), RXPOS(28) + 1, BYPOS(7) + 1},
{ XPOS(27), YPOS(7), RXPOS(28) + 1, BYPOS(8) + 1},
{ XPOS(27), YPOS(8), RXPOS(28) + 1, BYPOS(9) + 1},
{ XPOS(27), YPOS(9), RXPOS(28) + 1, BYPOS(10) + 1},
{ XPOS(27), YPOS(10), RXPOS(28) + 1, BYPOS(11) + 1},
{ XPOS(27), YPOS(11), RXPOS(28) + 1, BYPOS(12) + 1},

{ XPOS(3), YPOS(3), RXPOS(4) + 1, BYPOS(4) + 1},//큰 직선
{ XPOS(3), YPOS(4), RXPOS(4) + 1, BYPOS(5) + 1},
{ XPOS(3), YPOS(5), RXPOS(4) + 1, BYPOS(6) + 1},
{ XPOS(3), YPOS(6), RXPOS(4) + 1, BYPOS(7) + 1},
{ XPOS(3), YPOS(7), RXPOS(4) + 1, BYPOS(8) + 1},
{ XPOS(3), YPOS(8), RXPOS(4) + 1, BYPOS(9) + 1},
{ XPOS(3), YPOS(9), RXPOS(4) + 1, BYPOS(10) + 1},
{ XPOS(3), YPOS(10), RXPOS(4) + 1, BYPOS(11) + 1},

{ XPOS(6), YPOS(3), RXPOS(7) + 1, BYPOS(4) + 1},
{ XPOS(6), YPOS(4), RXPOS(7) + 1, BYPOS(5) + 1},
{ XPOS(6), YPOS(5), RXPOS(7) + 1, BYPOS(6) + 1},
{ XPOS(6), YPOS(6), RXPOS(7) + 1, BYPOS(7) + 1},
{ XPOS(6), YPOS(7), RXPOS(7) + 1, BYPOS(8) + 1},
{ XPOS(6), YPOS(8), RXPOS(7) + 1, BYPOS(9) + 1},
{ XPOS(6), YPOS(9), RXPOS(7) + 1, BYPOS(10) + 1},
{ XPOS(6), YPOS(10), RXPOS(7) + 1, BYPOS(11) + 1},

{ XPOS(14), YPOS(3), RXPOS(15) + 1, BYPOS(4) + 1},
{ XPOS(14), YPOS(4), RXPOS(15) + 1, BYPOS(5) + 1},
{ XPOS(14), YPOS(5), RXPOS(15) + 1, BYPOS(6) + 1},
{ XPOS(14), YPOS(6), RXPOS(15) + 1, BYPOS(7) + 1},
{ XPOS(14), YPOS(7), RXPOS(15) + 1, BYPOS(8) + 1},
{ XPOS(14), YPOS(8), RXPOS(15) + 1, BYPOS(9) + 1},
{ XPOS(14), YPOS(9), RXPOS(15) + 1, BYPOS(10) + 1},
{ XPOS(14), YPOS(10), RXPOS(15) + 1, BYPOS(11) + 1},

{ XPOS(16), YPOS(3), RXPOS(17) + 1, BYPOS(4) + 1},
{ XPOS(16), YPOS(4), RXPOS(17) + 1, BYPOS(5) + 1},
{ XPOS(16), YPOS(5), RXPOS(17) + 1, BYPOS(6) + 1},
{ XPOS(16), YPOS(6), RXPOS(17) + 1, BYPOS(7) + 1},
{ XPOS(16), YPOS(7), RXPOS(17) + 1, BYPOS(8) + 1},
{ XPOS(16), YPOS(8), RXPOS(17) + 1, BYPOS(9) + 1},
{ XPOS(16), YPOS(9), RXPOS(17) + 1, BYPOS(10) + 1},
{ XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1},

{ XPOS(25), YPOS(3), RXPOS(26) + 1, BYPOS(4) + 1},
{ XPOS(25), YPOS(4), RXPOS(26) + 1, BYPOS(5) + 1},
{ XPOS(25), YPOS(5), RXPOS(26) + 1, BYPOS(6) + 1},
{ XPOS(25), YPOS(6), RXPOS(26) + 1, BYPOS(7) + 1},
{ XPOS(25), YPOS(7), RXPOS(26) + 1, BYPOS(8) + 1},
{ XPOS(25), YPOS(8), RXPOS(26) + 1, BYPOS(9) + 1},
{ XPOS(25), YPOS(10), RXPOS(26) + 1, BYPOS(11) + 1},

{ XPOS(4), YPOS(6), RXPOS(5) + 1, BYPOS(7) + 1 },
{ XPOS(5), YPOS(6), RXPOS(6) + 1, BYPOS(7) + 1 },

{ XPOS(8), YPOS(6), RXPOS(9) + 1, BYPOS(7) + 1 },
{ XPOS(8), YPOS(7), RXPOS(9) + 1, BYPOS(8) + 1 },
{ XPOS(8), YPOS(8), RXPOS(9) + 1, BYPOS(9) + 1 },
{ XPOS(8), YPOS(9), RXPOS(9) + 1, BYPOS(10) + 1 },

{ XPOS(9), YPOS(5), RXPOS(10) + 1, BYPOS(6) + 1 },
{ XPOS(9), YPOS(7), RXPOS(10) + 1, BYPOS(8) + 1 },
{ XPOS(9), YPOS(10), RXPOS(10) + 1, BYPOS(11) + 1 },
{ XPOS(10), YPOS(5), RXPOS(11) + 1, BYPOS(6) + 1 },
{ XPOS(10), YPOS(7), RXPOS(11) + 1, BYPOS(8) + 1 },
{ XPOS(10), YPOS(10), RXPOS(11) + 1, BYPOS(11) + 1 },
{ XPOS(11), YPOS(5), RXPOS(12) + 1, BYPOS(6) + 1 },
{ XPOS(11), YPOS(7), RXPOS(12) + 1, BYPOS(8) + 1 },
{ XPOS(11), YPOS(10), RXPOS(12) + 1, BYPOS(11) + 1 },

{ XPOS(12), YPOS(6), RXPOS(13) + 1, BYPOS(7) + 1 },
{ XPOS(12), YPOS(7), RXPOS(13) + 1, BYPOS(8) + 1 },
{ XPOS(12), YPOS(9), RXPOS(13) + 1, BYPOS(10) + 1 },

{ XPOS(19), YPOS(5), RXPOS(20) + 1, BYPOS(6) + 1 },
{ XPOS(19), YPOS(10), RXPOS(20) + 1, BYPOS(11) + 1 },
{ XPOS(20), YPOS(5), RXPOS(21) + 1, BYPOS(6) + 1 },
{ XPOS(20), YPOS(10), RXPOS(21) + 1, BYPOS(11) + 1 },
{ XPOS(21), YPOS(5), RXPOS(22) + 1, BYPOS(6) + 1 },
{ XPOS(21), YPOS(10), RXPOS(22) + 1, BYPOS(11) + 1 },
{ XPOS(22), YPOS(5), RXPOS(23) + 1, BYPOS(6) + 1 },
{ XPOS(22), YPOS(10), RXPOS(23) + 1, BYPOS(11) + 1 },

{ XPOS(18), YPOS(6), RXPOS(19) + 1, BYPOS(7) + 1 },
{ XPOS(18), YPOS(7), RXPOS(19) + 1, BYPOS(8) + 1 },
{ XPOS(18), YPOS(8), RXPOS(19) + 1, BYPOS(9) + 1 },
{ XPOS(18), YPOS(9), RXPOS(19) + 1, BYPOS(10) + 1 },
{ XPOS(23), YPOS(6), RXPOS(24) + 1, BYPOS(7) + 1 },
{ XPOS(23), YPOS(7), RXPOS(24) + 1, BYPOS(8) + 1 },
{ XPOS(23), YPOS(8), RXPOS(24) + 1, BYPOS(9) + 1 },
{ XPOS(23), YPOS(9), RXPOS(24) + 1, BYPOS(10) + 1 },
};
RECT S13_rs[] = {
    {XPOS(-1), YPOS(14), RXPOS(0) + 1, BYPOS(15) + 1 },
    {XPOS(0), YPOS(14), RXPOS(1) + 1, BYPOS(15) + 1 },
    {XPOS(1), YPOS(14), RXPOS(2) + 1, BYPOS(15) + 1 },
    {XPOS(2), YPOS(14), RXPOS(3) + 1, BYPOS(15) + 1 },
    {XPOS(3), YPOS(14), RXPOS(4) + 1, BYPOS(15) + 1 },
    {XPOS(4), YPOS(14), RXPOS(5) + 1, BYPOS(15) + 1 },
    {XPOS(6), YPOS(14), RXPOS(7) + 1, BYPOS(15) + 1 },
    {XPOS(7), YPOS(14), RXPOS(8) + 1, BYPOS(15) + 1 },
    {XPOS(8), YPOS(14), RXPOS(9) + 1, BYPOS(15) + 1 },
    {XPOS(9), YPOS(14), RXPOS(10) + 1, BYPOS(15) + 1 }, 
    {XPOS(10), YPOS(14), RXPOS(11) + 1, BYPOS(15) + 1 },
    {XPOS(12), YPOS(14), RXPOS(13) + 1, BYPOS(15) + 1 },
    {XPOS(13), YPOS(14), RXPOS(14) + 1, BYPOS(15) + 1 },
    {XPOS(14), YPOS(14), RXPOS(15) + 1, BYPOS(15) + 1 },
    {XPOS(15), YPOS(14), RXPOS(16) + 1, BYPOS(15) + 1 },
    {XPOS(16), YPOS(14), RXPOS(17) + 1, BYPOS(15) + 1 },
    {XPOS(17), YPOS(14), RXPOS(18) + 1, BYPOS(15) + 1 },
    {XPOS(18), YPOS(14), RXPOS(19) + 1, BYPOS(15) + 1 },
    {XPOS(19), YPOS(14), RXPOS(20) + 1, BYPOS(15) + 1 },
    {XPOS(20), YPOS(14), RXPOS(21) + 1, BYPOS(15) + 1 },
    {XPOS(21), YPOS(14), RXPOS(22) + 1, BYPOS(15) + 1 },
    {XPOS(22), YPOS(14), RXPOS(23) + 1, BYPOS(15) + 1 },
    {XPOS(23), YPOS(14), RXPOS(24) + 1, BYPOS(15) + 1 },
    {XPOS(24), YPOS(14), RXPOS(25) + 1, BYPOS(15) + 1 },
    {XPOS(25), YPOS(14), RXPOS(26) + 1, BYPOS(15) + 1 },
    {XPOS(26), YPOS(14), RXPOS(27) + 1, BYPOS(15) + 1 },
    {XPOS(27), YPOS(14), RXPOS(28) + 1, BYPOS(15) + 1 },
    {XPOS(28), YPOS(14), RXPOS(29) + 1, BYPOS(15) + 1 },
    {XPOS(2), YPOS(10), RXPOS(3) + 1, BYPOS(11) + 1 },
    {XPOS(11), YPOS(10), RXPOS(12) + 1, BYPOS(11) + 1 },
    {XPOS(12), YPOS(10), RXPOS(13) + 1, BYPOS(11) + 1 },
    {XPOS(13), YPOS(10), RXPOS(14) + 1, BYPOS(11) + 1 },
    {XPOS(14), YPOS(10), RXPOS(15) + 1, BYPOS(11) + 1 }, //
    {XPOS(14), YPOS(9), RXPOS(15) + 1, BYPOS(10) + 1 },
    {XPOS(14), YPOS(8), RXPOS(15) + 1, BYPOS(9) + 1 },
    {XPOS(15), YPOS(10), RXPOS(16) + 1, BYPOS(11) + 1 },
    {XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1 },
    {XPOS(17), YPOS(10), RXPOS(18) + 1, BYPOS(11) + 1 },
    {XPOS(21), YPOS(10), RXPOS(22) + 1, BYPOS(11) + 1 },
    {XPOS(21), YPOS(6), RXPOS(22) + 1, BYPOS(7) + 1 },
    {XPOS(2), YPOS(7), RXPOS(3) + 1, BYPOS(8) + 1 },
    {XPOS(14), YPOS(4), RXPOS(15) + 1, BYPOS(5) + 1 },
};


int Num_S1_Rt = sizeof(S1_rs) / sizeof(S1_rs[0]);
int Num_S2_Rt = sizeof(S2_rs) / sizeof(S2_rs[0]);
int Num_S3_Rt = sizeof(S3_rs) / sizeof(S3_rs[0]);
int Num_S4_Rt = sizeof(S4_rs) / sizeof(S4_rs[0]);
int Num_S5_Rt = sizeof(S5_rs) / sizeof(S5_rs[0]);
int Num_S6_Rt = sizeof(S6_rs) / sizeof(S6_rs[0]);
int Num_S7_Rt = sizeof(S7_rs) / sizeof(S7_rs[0]);
int Num_S8_Rt = sizeof(S8_rs) / sizeof(S8_rs[0]);
int Num_S9_Rt = sizeof(S9_rs) / sizeof(S9_rs[0]);
int Num_S10_Rt = sizeof(S10_rs) / sizeof(S10_rs[0]);
int Num_S11_Rt = sizeof(S11_rs) / sizeof(S11_rs[0]);
int Num_S12_Rt = sizeof(S12_rs) / sizeof(S12_rs[0]);
int Num_S13_Rt = sizeof(S13_rs) / sizeof(S13_rs[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern HBITMAP hBitmapWall;
extern bool Stop, Stop2;

int Stage_Rt[] = {
    Num_S1_Rt,
    Num_S2_Rt,
    Num_S3_Rt,
    Num_S4_Rt,
    Num_S5_Rt,
    Num_S6_Rt,
    Num_S7_Rt,
    Num_S8_Rt,
    Num_S9_Rt,
    Num_S10_Rt,
    Num_S11_Rt,
    Num_S12_Rt,
    Num_S13_Rt,
};


RECT* Stage_rs[] = {
    S1_rs,
    S2_rs,
    S3_rs,
    S4_rs,
    S5_rs,
    S6_rs,
    S7_rs,
    S8_rs,
    S9_rs,
    S10_rs,
    S11_rs,
    S12_rs,
    S13_rs,
};

void Wall() {
    for (int i = 0; i < Stage_Rt[Stage]; i++) {
        RECT rect = Stage_rs[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            ball.bottom = rect.top;
            ball.top = ball.bottom - 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Speed1 = -40; // 공이 튀어오르게 -로 설정
            Speed2 = -40;
            OutputDebugString(TEXT("Top collision detected\n"));

        }
        // 사각형의 좌측과 충돌하는 경우
        if (ball.right >= rect.left && ball.left < rect.left &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            ball.right = rect.left;
            ball.left = ball.right - 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Stop = false;
            Stop2 = false;
            for (int j = 0; j < 15; j++) { // 충돌 시 좌측벽에 떨어지기
                ball.left -= 1;
                ball.right -= 1;
            }
        }
        // 하단 충돌 처리 (공이 사각형의 하단에 맞을 때)
        if (ball.top <= rect.bottom && ball.bottom >= rect.bottom &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
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
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            ball.left = rect.right;
            ball.right = ball.left + 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Stop = false;
            Stop2 = false;
            for (int j = 0; j < 15; j++) { // 충돌 시 좌측벽에 떨어지기
                ball.left += 1;
                ball.right += 1;
            }
        }
    }
}

void lookWall(HDC MemDC) {
    for (int i = 0; i < Stage_Rt[Stage]; i++) { //기본 벽
        RECT& rect = Stage_rs[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_Wall(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapWall);

    for (int i = 0; i < Stage_Rt[Stage]; i++) {
        RECT& rect = Stage_rs[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}
/*
void Img_Wall(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapWall);

    for (int i = 0; i < Stage_Rt[Stage]; i++) {
        RECT& rect = Stage_rs[Stage][i];

        int spriteX = (currentFrame % 4) * SPRITE_WIDTH; // 현재 프레임의 x 좌표
        int spriteY = (currentFrame / 4) * SPRITE_HEIGHT;

        BitBlt(MemDC, rect.left, rect.top, SPRITE_WIDTH, SPRITE_HEIGHT, MemDCw, spriteX, spriteY, SRCCOPY);

    }
    SelectObject(MemDCw, OldBitmap);
}
*/