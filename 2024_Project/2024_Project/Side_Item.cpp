#include "All_Block.h"
#include "Resource.h"

//아이템블럭 배열입니다.

RECT S1_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_si[] = {
    { XPOS(13), YPOS(1), RXPOS(14) + 1, BYPOS(2) + 1},
    { XPOS(13), YPOS(5), RXPOS(14) + 1, BYPOS(6) + 1},
    { XPOS(13), YPOS(9), RXPOS(14) + 1, BYPOS(10) + 1},    
};
RECT S7_si[] = { XPOS(15), YPOS(12), RXPOS(16) + 1, BYPOS(13) + 1 };
RECT S8_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_si[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_si[] = { XPOS(16), YPOS(13), RXPOS(17) + 1, BYPOS(14) + 1 };

int Num_S1_Si = sizeof(S1_si) / sizeof(S1_si[0]);
int Num_S2_Si = sizeof(S2_si) / sizeof(S2_si[0]);
int Num_S3_Si = sizeof(S3_si) / sizeof(S3_si[0]);
int Num_S4_Si = sizeof(S4_si) / sizeof(S4_si[0]);
int Num_S5_Si = sizeof(S5_si) / sizeof(S5_si[0]);
int Num_S6_Si = sizeof(S6_si) / sizeof(S6_si[0]);
int Num_S7_Si = sizeof(S7_si) / sizeof(S7_si[0]);
int Num_S8_Si = sizeof(S8_si) / sizeof(S8_si[0]);
int Num_S9_Si = sizeof(S9_si) / sizeof(S9_si[0]);
int Num_S10_Si = sizeof(S10_si) / sizeof(S10_si[0]);
int Num_S11_Si = sizeof(S11_si) / sizeof(S11_si[0]);
int Num_S12_Si = sizeof(S12_si) / sizeof(S12_si[0]);
int Num_S13_Si = sizeof(S13_si) / sizeof(S13_si[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern bool Side_Ball;
extern bool Jump_Ball;
extern HBITMAP hBitmapsidei;

int Stage_Si[] = {
    Num_S1_Si,
    Num_S2_Si,
    Num_S3_Si,
    Num_S4_Si,
    Num_S5_Si,
    Num_S6_Si,
    Num_S7_Si,
    Num_S8_Si,
    Num_S9_Si,
    Num_S10_Si,
    Num_S11_Si,
    Num_S12_Si,
    Num_S13_Si,
};


RECT* Stage_si[] = {
    S1_si,
    S2_si,
    S3_si,
    S4_si,
    S5_si,
    S6_si,
    S7_si,
    S8_si,
    S9_si,
    S10_si,
    S11_si,
    S12_si,
    S13_si,
};

//아이템 블럭 로직
void Side_Item() {
    {
        for (int i = 0; i < Stage_Si[Stage]; i++) {
            RECT& rect = Stage_si[Stage][i];

            // 아이템 블럭과 충돌 처리
            if (ball.bottom >= rect.top && ball.top <= rect.bottom &&
                ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
                Side_Ball = true;
                Jump_Ball = false;

                for (int j = i; j < Stage_Si[Stage] - 1; j++) {
                    Stage_si[Stage][j] = Stage_si[Stage][j + 1];
                }
                Stage_Si[Stage]--;
                i--;
            }
        }
    }
}

//아이템 블럭을 화면상 있지만, 보이지 않게
void lookSide(HDC MemDC) {
    for (int i = 0; i < Stage_Si[Stage]; i++) {
        RECT& rect = Stage_si[Stage][i];
        Ellipse(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

//스타블럭 비트맵
void Img_Sidei(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapsidei);

        for (int i = 0; i < Stage_Si[Stage]; i++) {
            RECT& rect = Stage_si[Stage][i];
            BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
        }
    SelectObject(MemDCw, OldBitmap);
}