#include "All_Block.h"
#include "Resource.h"

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern bool Stop, Stop2;
extern HBITMAP hBitmapGwl, hBitmapGwr;

// 화살표 블럭 - 왼쪽

RECT S1_gwl[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_gwl[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_gwl[] = { //화살표 블럭의 배열
    { XPOS(22), YPOS(12), RXPOS(23) + 1, BYPOS(13) + 1},
};
RECT S4_gwl[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_gwl[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_gwl[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_gwl[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_gwl[] = { 
    { XPOS(16), YPOS(12), RXPOS(17) + 1, BYPOS(13) + 1 },
    { XPOS(23), YPOS(11), RXPOS(24) + 1, BYPOS(12) + 1 },
};
RECT S9_gwl[] = {
    { XPOS(25), YPOS(4), RXPOS(26) + 1, BYPOS(5) + 1 },
    { XPOS(24), YPOS(12), RXPOS(25) + 1, BYPOS(13) + 1 },
};
RECT S10_gwl[] = {
    { XPOS(28), YPOS(3), RXPOS(29) + 1, BYPOS(4) + 1 },
    { XPOS(27), YPOS(7), RXPOS(28) + 1, BYPOS(8) + 1 },
};
RECT S11_gwl[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_gwl[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_gwl[] = { XPOS(20), YPOS(6), RXPOS(21) + 1, BYPOS(7) + 1 };

int Num_S1_GWl = sizeof(S1_gwl) / sizeof(S1_gwl[0]);
int Num_S2_GWl = sizeof(S2_gwl) / sizeof(S2_gwl[0]);
int Num_S3_GWl = sizeof(S3_gwl) / sizeof(S3_gwl[0]);
int Num_S4_GWl = sizeof(S4_gwl) / sizeof(S4_gwl[0]);
int Num_S5_GWl = sizeof(S5_gwl) / sizeof(S5_gwl[0]);
int Num_S6_GWl = sizeof(S6_gwl) / sizeof(S6_gwl[0]);
int Num_S7_GWl = sizeof(S7_gwl) / sizeof(S7_gwl[0]);
int Num_S8_GWl = sizeof(S8_gwl) / sizeof(S8_gwl[0]);
int Num_S9_GWl = sizeof(S9_gwl) / sizeof(S9_gwl[0]);
int Num_S10_GWl = sizeof(S10_gwl) / sizeof(S10_gwl[0]);
int Num_S11_GWl = sizeof(S11_gwl) / sizeof(S11_gwl[0]);
int Num_S12_GWl = sizeof(S12_gwl) / sizeof(S12_gwl[0]);
int Num_S13_GWl = sizeof(S13_gwl) / sizeof(S13_gwl[0]);

int Stage_GWl[] = {
    Num_S1_GWl,
    Num_S2_GWl,
    Num_S3_GWl,
    Num_S4_GWl,
    Num_S5_GWl,
    Num_S6_GWl,
    Num_S7_GWl,
    Num_S8_GWl,
    Num_S9_GWl,
    Num_S10_GWl,
    Num_S11_GWl,
    Num_S12_GWl,
    Num_S13_GWl,
};


RECT* Stage_gwl[] = {
    S1_gwl,
    S2_gwl,
    S3_gwl,
    S4_gwl,
    S5_gwl,
    S6_gwl,
    S7_gwl,
    S8_gwl,
    S9_gwl,
    S10_gwl,
    S11_gwl,
    S12_gwl,
    S13_gwl,
};

// 화살표 블럭 - 오른쪽

RECT S1_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_gwr[] = {
    { XPOS(8), YPOS(10), RXPOS(9) + 1, BYPOS(11) + 1},
};
RECT S6_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_gwr[] = {
    { XPOS(22), YPOS(1), RXPOS(23) + 1, BYPOS(2) + 1 },
    { XPOS(23), YPOS(5), RXPOS(24) + 1, BYPOS(6) + 1 },
    { XPOS(2), YPOS(7), RXPOS(3) + 1, BYPOS(8) + 1 },
};
RECT S11_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_gwr[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_gwr[] = { 
    {XPOS(2), YPOS(3), RXPOS(3) + 1, BYPOS(4) + 1 },
};

int Num_S1_GWr = sizeof(S1_gwr) / sizeof(S1_gwr[0]);
int Num_S2_GWr = sizeof(S2_gwr) / sizeof(S2_gwr[0]);
int Num_S3_GWr = sizeof(S3_gwr) / sizeof(S3_gwr[0]);
int Num_S4_GWr = sizeof(S4_gwr) / sizeof(S4_gwr[0]);
int Num_S5_GWr = sizeof(S5_gwr) / sizeof(S5_gwr[0]);
int Num_S6_GWr = sizeof(S6_gwr) / sizeof(S6_gwr[0]);
int Num_S7_GWr = sizeof(S7_gwr) / sizeof(S7_gwr[0]);
int Num_S8_GWr = sizeof(S8_gwr) / sizeof(S8_gwr[0]);
int Num_S9_GWr = sizeof(S9_gwr) / sizeof(S9_gwr[0]);
int Num_S10_GWr = sizeof(S10_gwr) / sizeof(S10_gwr[0]);
int Num_S11_GWr = sizeof(S11_gwr) / sizeof(S11_gwr[0]);
int Num_S12_GWr = sizeof(S12_gwr) / sizeof(S12_gwr[0]);
int Num_S13_GWr = sizeof(S13_gwr) / sizeof(S13_gwr[0]);


int Stage_GWr[] = {
    Num_S1_GWr,
    Num_S2_GWr,
    Num_S3_GWr,
    Num_S4_GWr,
    Num_S5_GWr,
    Num_S6_GWr,
    Num_S7_GWr,
    Num_S8_GWr,
    Num_S9_GWr,
    Num_S10_GWr,
    Num_S11_GWr,
    Num_S12_GWr,
    Num_S13_GWr,
};


RECT* Stage_gwr[] = {
    S1_gwr,
    S2_gwr,
    S3_gwr,
    S4_gwr,
    S5_gwr,
    S6_gwr,
    S7_gwr,
    S8_gwr,
    S9_gwr,
    S10_gwr,
    S11_gwr,
    S12_gwr,
    S13_gwr,
};


void Go_Wall_L() {
    for (int i = 0; i < Stage_GWl[Stage]; i++) {
        RECT& rect = Stage_gwl[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            Stop = true;
            PlaySound(TEXT("B_Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            ball.right = rect.left - 10;
            ball.left = ball.right - 20;
            ball.bottom = rect.bottom - 25;
            ball.top = ball.bottom - 20;
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

void lookGwL(HDC MemDC) {
    for (int i = 0; i < Stage_GWl[Stage]; i++) { //왼쪽 화살표
        RECT& rect = Stage_gwl[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_GwL(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapGwl);

    for (int i = 0; i < Stage_GWl[Stage]; i++) {
        RECT& rect = Stage_gwl[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}

void Go_Wall_R() {
    for (int i = 0; i < Stage_GWr[Stage]; i++) {
        RECT& rect = Stage_gwr[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            Stop2 = true;
            PlaySound(TEXT("B_Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            ball.left = rect.right + 10;
            ball.right = ball.left + 20;
            ball.bottom = rect.bottom - 25;
            ball.top = ball.bottom - 20;
        }
        // 사각형의 좌측과 충돌하는 경우
        if (ball.right >= rect.left && ball.left < rect.left &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
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
            Stop, Stop2 = false;
            for (int j = 0; j < 15; j++) { // 충돌 시 좌측벽에 떨어지기
                ball.left += 1;
                ball.right += 1;
            }
        }
    }
}

void lookGwR(HDC MemDC) {
    for (int i = 0; i < Stage_GWr[Stage]; i++) { //왼쪽 화살표
        RECT& rect = Stage_gwr[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_GwR(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapGwr);

    for (int i = 0; i < Stage_GWr[Stage]; i++) {
        RECT& rect = Stage_gwr[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}