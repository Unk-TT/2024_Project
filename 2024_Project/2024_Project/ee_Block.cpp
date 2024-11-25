#include "All_Block.h"
#include "Resource.h"

RECT S1_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_ee[] = { //전기 블러그 배열
     { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 },
};
RECT S6_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_ee[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_ee[] = { 
    {XPOS(11), YPOS(7), RXPOS(12) + 1, BYPOS(8) + 1 },
    {XPOS(12), YPOS(7), RXPOS(13) + 1, BYPOS(8) + 1 },
    {XPOS(13), YPOS(7), RXPOS(14) + 1, BYPOS(8) + 1 },
    {XPOS(14), YPOS(7), RXPOS(15) + 1, BYPOS(8) + 1 },
    {XPOS(15), YPOS(7), RXPOS(16) + 1, BYPOS(8) + 1 },
    {XPOS(16), YPOS(7), RXPOS(17) + 1, BYPOS(8) + 1 },
    {XPOS(17), YPOS(7), RXPOS(18) + 1, BYPOS(8) + 1 },
};

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