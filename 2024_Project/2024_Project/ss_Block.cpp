#include "All_Block.h"
#include "Resource.h"

//스타블럭 배열입니다.

RECT S1_ss[] = { //스타블럭의 배열
    { XPOS(6), YPOS(5), RXPOS(7) + 1, BYPOS(6) + 1},
    { XPOS(6), YPOS(6), RXPOS(7) + 1, BYPOS(7) + 1},
    { XPOS(5), YPOS(5), RXPOS(6) + 1, BYPOS(6) + 1},
    { XPOS(5), YPOS(6), RXPOS(6) + 1, BYPOS(7) + 1},
    { XPOS(22), YPOS(6), RXPOS(23) + 1, BYPOS(7) + 1},
    { XPOS(22), YPOS(5), RXPOS(23) + 1, BYPOS(6) + 1},
    { XPOS(23), YPOS(6), RXPOS(24) + 1, BYPOS(7) + 1},
    { XPOS(23), YPOS(5), RXPOS(24) + 1, BYPOS(6) + 1},
};
RECT S2_ss[] = { //스타블럭의 배열
    { XPOS(10), YPOS(6), RXPOS(11) + 1, BYPOS(7) + 1},
    { XPOS(11), YPOS(5), RXPOS(12) + 1, BYPOS(6) + 1},
    { XPOS(12), YPOS(4), RXPOS(13) + 1, BYPOS(5) + 1},
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
RECT S3_ss[] = { //스타블럭의 배열
    { XPOS(3), YPOS(11), RXPOS(4) + 1, BYPOS(12) + 1},
    { XPOS(4), YPOS(11), RXPOS(5) + 1, BYPOS(12) + 1},
    { XPOS(5), YPOS(11), RXPOS(6) + 1, BYPOS(12) + 1},
    { XPOS(3), YPOS(12), RXPOS(4) + 1, BYPOS(13) + 1},
    { XPOS(4), YPOS(12), RXPOS(5) + 1, BYPOS(13) + 1},
    { XPOS(5), YPOS(12), RXPOS(6) + 1, BYPOS(13) + 1},
};
RECT S4_ss[] = { XPOS(24), YPOS(10), RXPOS(25) + 1, BYPOS(11) + 1 };
RECT S5_ss[] = { //스타블럭의 배열
    { XPOS(5), YPOS(9), RXPOS(6) + 1, BYPOS(10) + 1},
    { XPOS(6), YPOS(5), RXPOS(7) + 1, BYPOS(6) + 1},
    { XPOS(8), YPOS(4), RXPOS(9) + 1, BYPOS(5) + 1},
    { XPOS(26), YPOS(6), RXPOS(27) + 1, BYPOS(7) + 1},
    { XPOS(8), YPOS(9), RXPOS(9) + 1, BYPOS(10) + 1},
    { XPOS(10), YPOS(12), RXPOS(11) + 1, BYPOS(13) + 1},
    { XPOS(14), YPOS(12), RXPOS(15) + 1, BYPOS(13) + 1},
    { XPOS(18), YPOS(12), RXPOS(19) + 1, BYPOS(13) + 1},
    { XPOS(22), YPOS(12), RXPOS(23) + 1, BYPOS(13) + 1},
    { XPOS(25), YPOS(12), RXPOS(26) + 1, BYPOS(13) + 1},
    { XPOS(26), YPOS(12), RXPOS(27) + 1, BYPOS(13) + 1},
    { XPOS(27), YPOS(12), RXPOS(28) + 1, BYPOS(13) + 1},
    { XPOS(25), YPOS(11), RXPOS(26) + 1, BYPOS(12) + 1},
    { XPOS(26), YPOS(11), RXPOS(27) + 1, BYPOS(12) + 1},
    { XPOS(27), YPOS(11), RXPOS(28) + 1, BYPOS(12) + 1},
};
RECT S6_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_ss[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };

int Num_S1_St = sizeof(S1_ss) / sizeof(S1_ss[0]);
int Num_S2_St = sizeof(S2_ss) / sizeof(S2_ss[0]);
int Num_S3_St = sizeof(S3_ss) / sizeof(S3_ss[0]);
int Num_S4_St = sizeof(S4_ss) / sizeof(S4_ss[0]);
int Num_S5_St = sizeof(S5_ss) / sizeof(S5_ss[0]);
int Num_S6_St = sizeof(S6_ss) / sizeof(S6_ss[0]);
int Num_S7_St = sizeof(S7_ss) / sizeof(S7_ss[0]);
int Num_S8_St = sizeof(S8_ss) / sizeof(S8_ss[0]);
int Num_S9_St = sizeof(S9_ss) / sizeof(S9_ss[0]);
int Num_S10_St = sizeof(S10_ss) / sizeof(S10_ss[0]);
int Num_S11_St = sizeof(S11_ss) / sizeof(S11_ss[0]);
int Num_S12_St = sizeof(S12_ss) / sizeof(S12_ss[0]);
int Num_S13_St = sizeof(S13_ss) / sizeof(S13_ss[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern HBITMAP hBitmapStar;

int Stage_St[] = {
    Num_S1_St,
    Num_S2_St,
    Num_S3_St,
    Num_S4_St,
    Num_S5_St,
    Num_S6_St,
    Num_S7_St,
    Num_S8_St,
    Num_S9_St,
    Num_S10_St,
    Num_S11_St,
    Num_S12_St,
    Num_S13_St,
};


RECT* Stage_ss[] = {
    S1_ss,
    S2_ss,
    S3_ss,
    S4_ss,
    S5_ss,
    S6_ss,
    S7_ss,
    S8_ss,
    S9_ss,
    S10_ss,
    S11_ss,
    S12_ss,
    S13_ss,
};

//스타블럭 로직
void Star() {
    {
        for (int i = 0; i < Stage_St[Stage]; i++) {
            RECT& rect = Stage_ss[Stage][i];

            // 스타 블럭과 충돌 처리
            if (ball.bottom >= rect.top && ball.top <= rect.bottom &&
                ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
                PlaySound(TEXT("Star.wav"), NULL, SND_FILENAME | SND_ASYNC);
                Count++; // 스타와 충돌하면 카운트 증가

                for (int j = i; j < Stage_St[Stage] - 1; j++) {
                    Stage_ss[Stage][j] = Stage_ss[Stage][j + 1];
                }
                Stage_St[Stage]--;
                i--;
            }
        }
    }
}

//스타블럭을 화면상 있지만, 보이지 않게
void lookStar(HDC MemDC) {
    for (int i = 0; i < Stage_St[Stage]; i++) {
        RECT& rect = Stage_ss[Stage][i];
        Ellipse(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

//스타블럭 비트맵
void Img_Star(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapStar);

        for (int i = 0; i < Stage_St[Stage]; i++) {
            RECT& rect = Stage_ss[Stage][i];
            BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
        }
    SelectObject(MemDCw, OldBitmap);
}