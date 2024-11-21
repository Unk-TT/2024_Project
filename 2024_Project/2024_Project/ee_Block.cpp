#include "All_Block.h"
#include "Resource.h"

RECT S1_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_ee[] = { //전기 블러그이 배열
    { XPOS(11), YPOS(4), RXPOS(12) + 1, BYPOS(5) + 1},
    { XPOS(12), YPOS(4), RXPOS(13) + 1, BYPOS(5) + 1},
    { XPOS(14), YPOS(4), RXPOS(15) + 1, BYPOS(5) + 1},
    { XPOS(15), YPOS(4), RXPOS(16) + 1, BYPOS(5) + 1},
    { XPOS(17), YPOS(4), RXPOS(18) + 1, BYPOS(5) + 1},
    { XPOS(19), YPOS(4), RXPOS(20) + 1, BYPOS(5) + 1},
    { XPOS(20), YPOS(4), RXPOS(21) + 1, BYPOS(5) + 1},
    { XPOS(22), YPOS(4), RXPOS(23) + 1, BYPOS(5) + 1},
    { XPOS(23), YPOS(4), RXPOS(24) + 1, BYPOS(5) + 1},
    { XPOS(25), YPOS(4), RXPOS(26) + 1, BYPOS(5) + 1},
    { XPOS(26), YPOS(4), RXPOS(27) + 1, BYPOS(5) + 1},
    { XPOS(27), YPOS(4), RXPOS(28) + 1, BYPOS(5) + 1},
    { XPOS(8), YPOS(7), RXPOS(9) + 1, BYPOS(8) + 1},
    { XPOS(8), YPOS(6), RXPOS(9) + 1, BYPOS(7) + 1},
    { XPOS(9), YPOS(8), RXPOS(10) + 1, BYPOS(9) + 1},
    { XPOS(10), YPOS(8), RXPOS(11) + 1, BYPOS(9) + 1},
    { XPOS(12), YPOS(8), RXPOS(13) + 1, BYPOS(9) + 1},
    { XPOS(13), YPOS(8), RXPOS(14) + 1, BYPOS(9) + 1},
    { XPOS(24), YPOS(6), RXPOS(25) + 1, BYPOS(7) + 1},
    { XPOS(22), YPOS(6), RXPOS(23) + 1, BYPOS(7) + 1},
    { XPOS(20), YPOS(6), RXPOS(21) + 1, BYPOS(7) + 1},
    { XPOS(18), YPOS(6), RXPOS(19) + 1, BYPOS(7) + 1},
};
RECT S5_ee[] = { //전기 블러그 배열
    //스타트 시작
    { XPOS(0), YPOS(5), RXPOS(1) + 1, BYPOS(6) + 1},
    { XPOS(0), YPOS(6), RXPOS(1) + 1, BYPOS(7) + 1},
    { XPOS(0), YPOS(9), RXPOS(1) + 1, BYPOS(10) + 1},
    { XPOS(0), YPOS(10), RXPOS(1) + 1, BYPOS(11) + 1},
    //스타트 중간
    { XPOS(2), YPOS(4), RXPOS(3) + 1, BYPOS(5) + 1},
    { XPOS(2), YPOS(6), RXPOS(3) + 1, BYPOS(7) + 1},
    { XPOS(2), YPOS(8), RXPOS(3) + 1, BYPOS(9) + 1},
    { XPOS(2), YPOS(10), RXPOS(3) + 1, BYPOS(11) + 1},
    { XPOS(2), YPOS(12), RXPOS(3) + 1, BYPOS(13) + 1},
    //스타트 마지막
    { XPOS(4), YPOS(3), RXPOS(5) + 1, BYPOS(4) + 1},
    { XPOS(4), YPOS(4), RXPOS(5) + 1, BYPOS(5) + 1},
    { XPOS(4), YPOS(7), RXPOS(5) + 1, BYPOS(8) + 1},
    { XPOS(4), YPOS(8), RXPOS(5) + 1, BYPOS(9) + 1},
    { XPOS(4), YPOS(11), RXPOS(5) + 1, BYPOS(12) + 1},
    // 가운데 방벽
    { XPOS(8), YPOS(3), RXPOS(9) + 1, BYPOS(4) + 1},
    { XPOS(7), YPOS(4), RXPOS(8) + 1, BYPOS(5) + 1},
    { XPOS(7), YPOS(5), RXPOS(8) + 1, BYPOS(6) + 1},
    { XPOS(7), YPOS(6), RXPOS(8) + 1, BYPOS(7) + 1},
    { XPOS(7), YPOS(7), RXPOS(8) + 1, BYPOS(8) + 1},
    { XPOS(7), YPOS(8), RXPOS(8) + 1, BYPOS(9) + 1},
    { XPOS(7), YPOS(9), RXPOS(8) + 1, BYPOS(10) + 1},
    { XPOS(7), YPOS(10), RXPOS(8) + 1, BYPOS(11) + 1},
    { XPOS(7), YPOS(11), RXPOS(8) + 1, BYPOS(12) + 1},
    { XPOS(6), YPOS(12), RXPOS(7) + 1, BYPOS(13) + 1},
    //
    { XPOS(9), YPOS(5), RXPOS(10) + 1, BYPOS(6) + 1},
    { XPOS(10), YPOS(5), RXPOS(11) + 1, BYPOS(6) + 1},
    { XPOS(11), YPOS(5), RXPOS(12) + 1, BYPOS(6) + 1},
    { XPOS(27), YPOS(6), RXPOS(28) + 1, BYPOS(7) + 1},
    { XPOS(27), YPOS(7), RXPOS(28) + 1, BYPOS(8) + 1},
    { XPOS(27), YPOS(8), RXPOS(28) + 1, BYPOS(9) + 1},
    { XPOS(27), YPOS(9), RXPOS(28) + 1, BYPOS(10) + 1},
    //점프상단
    { XPOS(9), YPOS(7), RXPOS(10) + 1, BYPOS(8) + 1},
    { XPOS(11), YPOS(7), RXPOS(12) + 1, BYPOS(8) + 1},
    { XPOS(13), YPOS(7), RXPOS(14) + 1, BYPOS(8) + 1},
    { XPOS(15), YPOS(7), RXPOS(16) + 1, BYPOS(8) + 1},
    { XPOS(17), YPOS(7), RXPOS(18) + 1, BYPOS(8) + 1},
    { XPOS(19), YPOS(7), RXPOS(20) + 1, BYPOS(8) + 1},
    { XPOS(21), YPOS(7), RXPOS(22) + 1, BYPOS(8) + 1},
    { XPOS(23), YPOS(7), RXPOS(24) + 1, BYPOS(8) + 1},
    { XPOS(25), YPOS(7), RXPOS(26) + 1, BYPOS(8) + 1},
    //점프하단
    { XPOS(9), YPOS(9), RXPOS(10) + 1, BYPOS(10) + 1},
    { XPOS(11), YPOS(9), RXPOS(12) + 1, BYPOS(10) + 1},
    { XPOS(13), YPOS(9), RXPOS(14) + 1, BYPOS(10) + 1},
    { XPOS(15), YPOS(9), RXPOS(16) + 1, BYPOS(10) + 1},
    { XPOS(17), YPOS(9), RXPOS(18) + 1, BYPOS(10) + 1},
    { XPOS(19), YPOS(9), RXPOS(20) + 1, BYPOS(10) + 1},
    { XPOS(21), YPOS(9), RXPOS(22) + 1, BYPOS(10) + 1},
    { XPOS(23), YPOS(9), RXPOS(24) + 1, BYPOS(10) + 1},
    { XPOS(25), YPOS(9), RXPOS(26) + 1, BYPOS(10) + 1},

};
RECT S6_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };

int Num_S1_Ee = sizeof(S1_ee) / sizeof(S1_ee[0]);
int Num_S2_Ee = sizeof(S2_ee) / sizeof(S2_ee[0]);
int Num_S3_Ee = sizeof(S3_ee) / sizeof(S3_ee[0]);
int Num_S4_Ee = sizeof(S4_ee) / sizeof(S4_ee[0]);
int Num_S5_Ee = sizeof(S5_ee) / sizeof(S5_ee[0]);
int Num_S6_Ee = sizeof(S6_ee) / sizeof(S6_ee[0]);
int Num_S7_Ee = sizeof(S7_ee) / sizeof(S7_ee[0]);
int Num_S8_Ee = sizeof(S8_ee) / sizeof(S8_ee[0]);
int Num_S9_Ee = sizeof(S9_ee) / sizeof(S9_ee[0]);
int Num_S10_Ee = sizeof(S10_ee) / sizeof(S10_ee[0]);
int Num_S11_Ee = sizeof(S11_ee) / sizeof(S11_ee[0]);
int Num_S12_Ee = sizeof(S12_ee) / sizeof(S12_ee[0]);
int Num_S13_Ee = sizeof(S13_ee) / sizeof(S13_ee[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern bool Elect;
extern HBITMAP hBitmapEe;

int Stage_Ee[] = {
    Num_S1_Ee,
    Num_S2_Ee,
    Num_S3_Ee,
    Num_S4_Ee,
    Num_S5_Ee,
    Num_S6_Ee,
    Num_S7_Ee,
    Num_S8_Ee,
    Num_S9_Ee,
    Num_S10_Ee,
    Num_S11_Ee,
    Num_S12_Ee,
    Num_S13_Ee,
};


RECT* Stage_ee[] = {
    S1_ee,
    S2_ee,
    S3_ee,
    S4_ee,
    S5_ee,
    S6_ee,
    S7_ee,
    S8_ee,
    S9_ee,
    S10_ee,
    S11_ee,
    S12_ee,
    S13_ee,
};


void Ele_Wall() {
    for (int i = 0; i < Stage_Ee[Stage]; i++) {
        RECT& rect = Stage_ee[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            Elect = true;
        }
        // 사각형의 좌측과 충돌하는 경우
        if (ball.right >= rect.left && ball.left < rect.left &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            Elect = true;
        }
        // 하단 충돌 처리 (공이 사각형의 하단에 맞을 때)
        if (ball.top <= rect.bottom && ball.bottom >= rect.bottom &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            Elect = true;
        }
        // 사각형의 우측과 충돌하는 경우
        if (ball.left <= rect.right && ball.right >= rect.right &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            Elect = true;
        }
    }
}

void lookEe(HDC MemDC) {
    for (int i = 0; i < Stage_Ee[Stage]; i++) { //일렉트릭
        RECT& rect = Stage_ee[Stage][i];
        Ellipse(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_Ee(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapEe);

    for (int i = 0; i < Stage_Ee[Stage]; i++) {
        RECT& rect = Stage_ee[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}