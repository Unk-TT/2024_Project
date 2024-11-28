#include "All_Block.h"
#include "Resource.h"

//아이템블럭 배열입니다.

RECT S1_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_ji[] = { 
    { XPOS(6), YPOS(10), RXPOS(7) + 1, BYPOS(11) + 1},
    { XPOS(6), YPOS(7), RXPOS(7) + 1, BYPOS(8) + 1},
    { XPOS(4), YPOS(4), RXPOS(5) + 1, BYPOS(5) + 1},
};
RECT S8_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_ji[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_ji[] = { XPOS(5), YPOS(13), RXPOS(6) + 1, BYPOS(14) + 1 };

int Num_S1_Ji = sizeof(S1_ji) / sizeof(S1_ji[0]);
int Num_S2_Ji = sizeof(S2_ji) / sizeof(S2_ji[0]);
int Num_S3_Ji = sizeof(S3_ji) / sizeof(S3_ji[0]);
int Num_S4_Ji = sizeof(S4_ji) / sizeof(S4_ji[0]);
int Num_S5_Ji = sizeof(S5_ji) / sizeof(S5_ji[0]);
int Num_S6_Ji = sizeof(S6_ji) / sizeof(S6_ji[0]);
int Num_S7_Ji = sizeof(S7_ji) / sizeof(S7_ji[0]);
int Num_S8_Ji = sizeof(S8_ji) / sizeof(S8_ji[0]);
int Num_S9_Ji = sizeof(S9_ji) / sizeof(S9_ji[0]);
int Num_S10_Ji = sizeof(S10_ji) / sizeof(S10_ji[0]);
int Num_S11_Ji = sizeof(S11_ji) / sizeof(S11_ji[0]);
int Num_S12_Ji = sizeof(S12_ji) / sizeof(S12_ji[0]);
int Num_S13_Ji = sizeof(S13_ji) / sizeof(S13_ji[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern bool Jump_Ball;
extern bool Side_Ball;
extern HBITMAP hBitmapjumpi;

int Stage_Ji[] = {
    Num_S1_Ji,
    Num_S2_Ji,
    Num_S3_Ji,
    Num_S4_Ji,
    Num_S5_Ji,
    Num_S6_Ji,
    Num_S7_Ji,
    Num_S8_Ji,
    Num_S9_Ji,
    Num_S10_Ji,
    Num_S11_Ji,
    Num_S12_Ji,
    Num_S13_Ji,
};


RECT* Stage_ji[] = {
    S1_ji,
    S2_ji,
    S3_ji,
    S4_ji,
    S5_ji,
    S6_ji,
    S7_ji,
    S8_ji,
    S9_ji,
    S10_ji,
    S11_ji,
    S12_ji,
    S13_ji,
};

//아이템 블럭 로직
void Jump_Item() {
    {
        for (int i = 0; i < Stage_Ji[Stage]; i++) {
            RECT& rect = Stage_ji[Stage][i];

            // 아이템 블럭과 충돌 처리
            if (ball.bottom >= rect.top && ball.top <= rect.bottom &&
                ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
                Jump_Ball = true;
                Side_Ball = false;

                for (int j = i; j < Stage_Ji[Stage] - 1; j++) {
                    Stage_ji[Stage][j] = Stage_ji[Stage][j + 1];
                }
                Stage_Ji[Stage]--;
                i--;
            }
        }
    }
}

//아이템 블럭을 화면상 있지만, 보이지 않게
void lookJi(HDC MemDC) {
    for (int i = 0; i < Stage_Ji[Stage]; i++) {
        RECT& rect = Stage_ji[Stage][i];
        Ellipse(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

//스타블럭 비트맵
void Img_Jumpi(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapjumpi);

        for (int i = 0; i < Stage_Ji[Stage]; i++) {
            RECT& rect = Stage_ji[Stage][i];
            BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
        }
    SelectObject(MemDCw, OldBitmap);
}