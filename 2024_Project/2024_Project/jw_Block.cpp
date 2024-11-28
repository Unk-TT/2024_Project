#include "All_Block.h"
#include "Resource.h"

RECT S1_jw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_jw[] = { //점프대 블럭의 배열
    { XPOS(5), YPOS(12), RXPOS(6) + 1, BYPOS(13) + 1},
    { XPOS(14), YPOS(4), RXPOS(15) + 1, BYPOS(5) + 1},
    { XPOS(17), YPOS(4), RXPOS(18) + 1, BYPOS(5) + 1},

};
RECT S3_jw[] = { //점프대 블럭의 배열
    { XPOS(17), YPOS(7), RXPOS(18) + 1, BYPOS(8) + 1},
};
RECT S4_jw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_jw[] = { //점프대 블럭의 배열
    { XPOS(5), YPOS(9), RXPOS(6) + 1, BYPOS(10) + 1},
    { XPOS(7), YPOS(7), RXPOS(8) + 1, BYPOS(8) + 1},
    { XPOS(22), YPOS(9), RXPOS(23) + 1, BYPOS(10) + 1},
};
RECT S6_jw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_jw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_jw[] = { 
    { XPOS(10), YPOS(8), RXPOS(11) + 1, BYPOS(9) + 1 },
    { XPOS(5), YPOS(13), RXPOS(6) + 1, BYPOS(14) + 1 },
};
RECT S9_jw[] = {
    { XPOS(19), YPOS(7), RXPOS(20) + 1, BYPOS(8) + 1 },
    { XPOS(23), YPOS(7), RXPOS(24) + 1, BYPOS(8) + 1 },
    { XPOS(7), YPOS(13), RXPOS(8) + 1, BYPOS(14) + 1 },

};
RECT S10_jw[] = {
    { XPOS(0), YPOS(10), RXPOS(1) + 1, BYPOS(11) + 1 },
    { XPOS(1), YPOS(13), RXPOS(2) + 1, BYPOS(14) + 1 },
    { XPOS(16), YPOS(8), RXPOS(17) + 1, BYPOS(9) + 1 },
    { XPOS(18), YPOS(6), RXPOS(19) + 1, BYPOS(7) + 1 },
    { XPOS(20), YPOS(3), RXPOS(21) + 1, BYPOS(4) + 1 },
    { XPOS(3), YPOS(6), RXPOS(4) + 1, BYPOS(7) + 1 },

};
RECT S11_jw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_jw[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_jw[] = { 
    {XPOS(-1), YPOS(13), RXPOS(0) + 1, BYPOS(14) + 1},
    {XPOS(22), YPOS(10), RXPOS(23) + 1, BYPOS(11) + 1 },
    {XPOS(1), YPOS(7), RXPOS(2) + 1, BYPOS(8) + 1 },
};

int Num_S1_JW = sizeof(S1_jw) / sizeof(S1_jw[0]);
int Num_S2_JW = sizeof(S2_jw) / sizeof(S2_jw[0]);
int Num_S3_JW = sizeof(S3_jw) / sizeof(S3_jw[0]);
int Num_S4_JW = sizeof(S4_jw) / sizeof(S4_jw[0]);
int Num_S5_JW = sizeof(S5_jw) / sizeof(S5_jw[0]);
int Num_S6_JW = sizeof(S6_jw) / sizeof(S6_jw[0]);
int Num_S7_JW = sizeof(S7_jw) / sizeof(S7_jw[0]);
int Num_S8_JW = sizeof(S8_jw) / sizeof(S8_jw[0]);
int Num_S9_JW = sizeof(S9_jw) / sizeof(S9_jw[0]);
int Num_S10_JW = sizeof(S10_jw) / sizeof(S10_jw[0]);
int Num_S11_JW = sizeof(S11_jw) / sizeof(S11_jw[0]);
int Num_S12_JW = sizeof(S12_jw) / sizeof(S12_jw[0]);
int Num_S13_JW = sizeof(S13_jw) / sizeof(S13_jw[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern HBITMAP hBitmapJw;
extern bool Stop, Stop2;


int Stage_JW[] = {
    Num_S1_JW,
    Num_S2_JW,
    Num_S3_JW,
    Num_S4_JW,
    Num_S5_JW,
    Num_S6_JW,
    Num_S7_JW,
    Num_S8_JW,
    Num_S9_JW,
    Num_S10_JW,
    Num_S11_JW,
    Num_S12_JW,
    Num_S13_JW,
};


RECT* Stage_jw[] = {
    S1_jw,
    S2_jw,
    S3_jw,
    S4_jw,
    S5_jw,
    S6_jw,
    S7_jw,
    S8_jw,
    S9_jw,
    S10_jw,
    S11_jw,
    S12_jw,
    S13_jw,
};


void Jump_Wall() {
    for (int i = 0; i < Stage_JW[Stage]; i++) {
        RECT rect = Stage_jw[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            ball.bottom = rect.top;
            ball.top = ball.bottom - 20;
            PlaySound(TEXT("B_Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Speed1 = -60; // 공이 튀어오르게 -로 설정
            Speed2 = -60;
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
            Speed2 = 0;;
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

void lookJump(HDC MemDC) {
    for (int i = 0; i < Stage_JW[Stage]; i++) { //기본 벽
        RECT& rect = Stage_jw[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_Jw(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapJw);

    for (int i = 0; i < Stage_JW[Stage]; i++) {
        RECT& rect = Stage_jw[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}