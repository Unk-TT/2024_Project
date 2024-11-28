#include "All_Block.h"
#include "Resource.h"

RECT S1_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_te[] = { XPOS(5), YPOS(10), RXPOS(6) + 1, BYPOS(11) + 1 };
RECT S9_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_te[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_te[] = {
    {XPOS(13), YPOS(9), RXPOS(14) + 1, BYPOS(10) + 1 },
 
};


int Num_S1_Te = sizeof(S1_te) / sizeof(S1_te[0]);
int Num_S2_Te = sizeof(S2_te) / sizeof(S2_te[0]);
int Num_S3_Te = sizeof(S3_te) / sizeof(S3_te[0]);
int Num_S4_Te = sizeof(S4_te) / sizeof(S4_te[0]);
int Num_S5_Te = sizeof(S5_te) / sizeof(S5_te[0]);
int Num_S6_Te = sizeof(S6_te) / sizeof(S6_te[0]);
int Num_S7_Te = sizeof(S7_te) / sizeof(S7_te[0]);
int Num_S8_Te = sizeof(S8_te) / sizeof(S8_te[0]);
int Num_S9_Te = sizeof(S9_te) / sizeof(S9_te[0]);
int Num_S10_Te = sizeof(S10_te) / sizeof(S10_te[0]);
int Num_S11_Te = sizeof(S11_te) / sizeof(S11_te[0]);
int Num_S12_Te = sizeof(S12_te) / sizeof(S12_te[0]);
int Num_S13_Te = sizeof(S13_te) / sizeof(S13_te[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern HBITMAP hBitmapbh, hBitmapwh;
extern bool Stop, Stop2;

int Stage_Te[] = {
    Num_S1_Te,
    Num_S2_Te,
    Num_S3_Te,
    Num_S4_Te,
    Num_S5_Te,
    Num_S6_Te,
    Num_S7_Te,
    Num_S8_Te,
    Num_S9_Te,
    Num_S10_Te,
    Num_S11_Te,
    Num_S12_Te,
    Num_S13_Te,
};


RECT* Stage_te[] = {
    S1_te,
    S2_te,
    S3_te,
    S4_te,
    S5_te,
    S6_te,
    S7_te,
    S8_te,
    S9_te,
    S10_te,
    S11_te,
    S12_te,
    S13_te,
};

/*----------------------------------------------------------------------------------------------------*/

RECT S1_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_tew[] = { XPOS(16), YPOS(4), RXPOS(17) + 1, BYPOS(5) + 1 };
RECT S9_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_tew[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_tew[] = {
    {XPOS(15), YPOS(9), RXPOS(16) + 1, BYPOS(10) + 1 },

};

RECT* Stage_tew[] = {
    S1_tew,
    S2_tew,
    S3_tew,
    S4_tew,
    S5_tew,
    S6_tew,
    S7_tew,
    S8_tew,
    S9_tew,
    S10_tew,
    S11_tew,
    S12_tew,
    S13_tew,
};

void Tele() {
    for (int i = 0; i < Stage_Te[Stage]; i++) {
        RECT rect = Stage_te[Stage][i];
        RECT White_hole = Stage_tew[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            ball.left = White_hole.left + 15;
            ball.top = White_hole.top + 15;
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        // 사각형의 좌측과 충돌하는 경우
        if (ball.right >= rect.left && ball.left < rect.left &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            ball.left = White_hole.left + 15;
            ball.top = White_hole.top + 15;
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        // 하단 충돌 처리 (공이 사각형의 하단에 맞을 때)
        if (ball.top <= rect.bottom && ball.bottom >= rect.bottom &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            ball.left = White_hole.left + 15;
            ball.top = White_hole.top + 15;
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        // 사각형의 우측과 충돌하는 경우
        if (ball.left <= rect.right && ball.right >= rect.right &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            ball.left = White_hole.left + 15;
            ball.top = White_hole.top + 15;
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
    }
}

void lookTele(HDC MemDC) {
    for (int i = 0; i < Stage_Te[Stage]; i++) { //기본 벽
        RECT& rect = Stage_te[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}
void lookTelew(HDC MemDC) {
    for (int i = 0; i < Stage_Te[Stage]; i++) { //기본 벽
        RECT& rect = Stage_tew[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_Tele(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapbh);

    for (int i = 0; i < Stage_Te[Stage]; i++) {
        RECT& rect = Stage_te[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}
void Img_Telew(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapwh);

    for (int i = 0; i < Stage_Te[Stage]; i++) {
        RECT& rect = Stage_tew[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}