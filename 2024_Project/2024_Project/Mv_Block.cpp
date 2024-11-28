#include "All_Block.h"
#include "Resource.h"
#include <wchar.h>

RECT S1_mv[] = {XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1};
RECT S2_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_mv[] = {
    { XPOS(6), YPOS(4), RXPOS(7) + 1, BYPOS(5) + 1 },
    { XPOS(7), YPOS(4), RXPOS(8) + 1, BYPOS(5) + 1 },
    { XPOS(8), YPOS(4), RXPOS(9) + 1, BYPOS(5) + 1 },
};
RECT S5_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_mv[] = {
    { XPOS(9), YPOS(8), RXPOS(10) + 1, BYPOS(9) + 1 },
    { XPOS(10), YPOS(8), RXPOS(11) + 1, BYPOS(9) + 1 },
    { XPOS(11), YPOS(8), RXPOS(12) + 1, BYPOS(9) + 1 },
};
RECT S10_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_mv[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_mv[] = { 
    {XPOS(4), YPOS(10), RXPOS(5) + 1, BYPOS(11) + 1 },
    {XPOS(5), YPOS(10), RXPOS(6) + 1, BYPOS(11) + 1 },
};
    
int Num_S1_Mv = sizeof(S1_mv) / sizeof(S1_mv[0]);
int Num_S2_Mv = sizeof(S2_mv) / sizeof(S2_mv[0]);
int Num_S3_Mv = sizeof(S3_mv) / sizeof(S3_mv[0]);
int Num_S4_Mv = sizeof(S4_mv) / sizeof(S4_mv[0]);
int Num_S5_Mv = sizeof(S5_mv) / sizeof(S5_mv[0]);
int Num_S6_Mv = sizeof(S6_mv) / sizeof(S6_mv[0]);
int Num_S7_Mv = sizeof(S7_mv) / sizeof(S7_mv[0]);
int Num_S8_Mv = sizeof(S8_mv) / sizeof(S8_mv[0]);
int Num_S9_Mv = sizeof(S9_mv) / sizeof(S9_mv[0]);
int Num_S10_Mv = sizeof(S10_mv) / sizeof(S10_mv[0]);
int Num_S11_Mv = sizeof(S11_mv) / sizeof(S11_mv[0]);
int Num_S12_Mv = sizeof(S12_mv) / sizeof(S12_mv[0]);
int Num_S13_Mv = sizeof(S13_mv) / sizeof(S13_mv[0]);

int Stage_Mv[] = {
    Num_S1_Mv,
    Num_S2_Mv,
    Num_S3_Mv,
    Num_S4_Mv,
    Num_S5_Mv,
    Num_S6_Mv,
    Num_S7_Mv,
    Num_S8_Mv,
    Num_S9_Mv,
    Num_S10_Mv,
    Num_S11_Mv,
    Num_S12_Mv,
    Num_S13_Mv,
};


RECT* Stage_mv[] = {
    S1_mv,
    S2_mv,
    S3_mv,
    S4_mv,
    S5_mv,
    S6_mv,
    S7_mv,
    S8_mv,
    S9_mv,
    S10_mv,
    S11_mv,
    S12_mv,
    S13_mv,
};

/*------------------------------------------위 mv와 동일하게---------------------------------------------------------*/

RECT S1_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_mv_St[] = { 
    { XPOS(6), YPOS(4), RXPOS(7) + 1, BYPOS(5) + 1 },
    { XPOS(7), YPOS(4), RXPOS(8) + 1, BYPOS(5) + 1 },
    { XPOS(8), YPOS(4), RXPOS(9) + 1, BYPOS(5) + 1 },
};
RECT S5_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_mv_St[] = {
    { XPOS(9), YPOS(8), RXPOS(10) + 1, BYPOS(9) + 1 },
    { XPOS(10), YPOS(8), RXPOS(11) + 1, BYPOS(9) + 1 },
    { XPOS(11), YPOS(8), RXPOS(12) + 1, BYPOS(9) + 1 },
};
RECT S10_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_mv_St[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_mv_St[] = { 
    {XPOS(4), YPOS(10), RXPOS(5) + 1, BYPOS(11) + 1 },
    {XPOS(5), YPOS(10), RXPOS(6) + 1, BYPOS(11) + 1 },
};

int Num_S1_Mv_St = sizeof(S1_mv_St) / sizeof(S1_mv_St[0]);
int Num_S2_Mv_St = sizeof(S2_mv_St) / sizeof(S2_mv_St[0]);
int Num_S3_Mv_St = sizeof(S3_mv_St) / sizeof(S3_mv_St[0]);
int Num_S4_Mv_St = sizeof(S4_mv_St) / sizeof(S4_mv_St[0]);
int Num_S5_Mv_St = sizeof(S5_mv_St) / sizeof(S5_mv_St[0]);
int Num_S6_Mv_St = sizeof(S6_mv_St) / sizeof(S6_mv_St[0]);
int Num_S7_Mv_St = sizeof(S7_mv_St) / sizeof(S7_mv_St[0]);
int Num_S8_Mv_St = sizeof(S8_mv_St) / sizeof(S8_mv_St[0]);
int Num_S9_Mv_St = sizeof(S9_mv_St) / sizeof(S9_mv_St[0]);
int Num_S10_Mv_St = sizeof(S10_mv_St) / sizeof(S10_mv_St[0]);
int Num_S11_Mv_St = sizeof(S11_mv_St) / sizeof(S11_mv_St[0]);
int Num_S12_Mv_St = sizeof(S12_mv_St) / sizeof(S12_mv_St[0]);
int Num_S13_Mv_St = sizeof(S13_mv_St) / sizeof(S13_mv_St[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern HBITMAP hBitmapMv, hBitmapMvs;
extern bool Stop, Stop2;
extern HDC MemDC;
bool turn = true;
extern bool Moveth;


int Stage_Mv_St[] = {
    Num_S1_Mv_St,
    Num_S2_Mv_St,
    Num_S3_Mv_St,
    Num_S4_Mv_St,
    Num_S5_Mv_St,
    Num_S6_Mv_St,
    Num_S7_Mv_St,
    Num_S8_Mv_St,
    Num_S9_Mv_St,
    Num_S10_Mv_St,
    Num_S11_Mv_St,
    Num_S12_Mv_St,
    Num_S13_Mv_St,
};


RECT* Stage_mv_St[] = {
    S1_mv_St,
    S2_mv_St,
    S3_mv_St,
    S4_mv_St,
    S5_mv_St,
    S6_mv_St,
    S7_mv_St,
    S8_mv_St,
    S9_mv_St,
    S10_mv_St,
    S11_mv_St,
    S12_mv_St,
    S13_mv_St,
};
//끝지점 종료지점 좌표 입력
RECT S1_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_mv_End[] = {
    { XPOS(21), YPOS(4), RXPOS(22) + 1, BYPOS(5) + 1 },
    { XPOS(22), YPOS(4), RXPOS(23) + 1, BYPOS(5) + 1 },
    { XPOS(23), YPOS(4), RXPOS(24) + 1, BYPOS(5) + 1 },
};
RECT S5_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_mv_End[] = {
    { XPOS(17), YPOS(8), RXPOS(18) + 1, BYPOS(9) + 1 },
    { XPOS(18), YPOS(8), RXPOS(19) + 1, BYPOS(9) + 1 },
    { XPOS(19), YPOS(8), RXPOS(20) + 1, BYPOS(9) + 1 },
};
RECT S10_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_mv_End[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_mv_End[] = { 
    {XPOS(8), YPOS(10), RXPOS(9) + 1, BYPOS(11) + 1 },
    {XPOS(9), YPOS(10), RXPOS(10) + 1, BYPOS(11) + 1 },
};



int Num_S1_Mv_End = sizeof(S1_mv_End) / sizeof(S1_mv_End[0]);
int Num_S2_Mv_End = sizeof(S2_mv_End) / sizeof(S2_mv_End[0]);
int Num_S3_Mv_End = sizeof(S3_mv_End) / sizeof(S3_mv_End[0]);
int Num_S4_Mv_End = sizeof(S4_mv_End) / sizeof(S4_mv_End[0]);
int Num_S5_Mv_End = sizeof(S5_mv_End) / sizeof(S5_mv_End[0]);
int Num_S6_Mv_End = sizeof(S6_mv_End) / sizeof(S6_mv_End[0]);
int Num_S7_Mv_End = sizeof(S7_mv_End) / sizeof(S7_mv_End[0]);
int Num_S8_Mv_End = sizeof(S8_mv_End) / sizeof(S8_mv_End[0]);
int Num_S9_Mv_End = sizeof(S9_mv_End) / sizeof(S9_mv_End[0]);
int Num_S10_Mv_End = sizeof(S10_mv_End) / sizeof(S10_mv_End[0]);
int Num_S11_Mv_End = sizeof(S11_mv_End) / sizeof(S11_mv_End[0]);
int Num_S12_Mv_End = sizeof(S12_mv_End) / sizeof(S12_mv_End[0]);
int Num_S13_Mv_End = sizeof(S13_mv_End) / sizeof(S13_mv_End[0]);

int Stage_Mv_End[] = {
    Num_S1_Mv_End,
    Num_S2_Mv_End,
    Num_S3_Mv_End,
    Num_S4_Mv_End,
    Num_S5_Mv_End,
    Num_S6_Mv_End,
    Num_S7_Mv_End,
    Num_S8_Mv_End,
    Num_S9_Mv_End,
    Num_S10_Mv_End,
    Num_S11_Mv_End,
    Num_S12_Mv_End,
    Num_S13_Mv_End,
};


RECT* Stage_mv_End[] = {
    S1_mv_End,
    S2_mv_End,
    S3_mv_End,
    S4_mv_End,
    S5_mv_End,
    S6_mv_End,
    S7_mv_End,
    S8_mv_End,
    S9_mv_End,
    S10_mv_End,
    S11_mv_End,
    S12_mv_End,
    S13_mv_End,
};

DWORD WINAPI move_T(LPVOID param) {
    for (int i = 0; i < Stage_Mv[Stage]; i++) {
        RECT* Main = &Stage_mv[Stage][i]; // 현재 위치
        RECT StartR = Stage_mv_St[Stage][i];
        RECT EndR = Stage_mv_End[Stage][i];   // 끝 위치

        if (turn) {
            if (Main->left < EndR.left) {
                Main->left += 2;
                Main->right += 2;
                if (Main->left >= EndR.left) {
                    Sleep(500);
                    Main->left -= 2;
                    Main->right -= 2;
                    turn = false;
                }
            }
        }
        else if (!turn) {
            if (Main->left > StartR.left) {
                Main->left -= 2;
                Main->right -= 2;
                if (Main->left <= StartR.left) {
                    Sleep(500);
                    turn = true;
                }
            }
        }
    }
    if (Moveth) {
        for (int j = 0; j < Stage_Mv[Stage]; j++) {
            RECT* Main = &Stage_mv[Stage][j]; // 현재 위치
            RECT StartR = Stage_mv_St[Stage][j];
            Main->left = StartR.left;
            Main->right = StartR.right;
        }
        turn = true;
        Sleep(100);
        Moveth = false;
    }

    return 0;
}

void Move() {
    for (int i = 0; i < Stage_Mv[Stage]; i++) {
        RECT rect = Stage_mv[Stage][i];

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

void lookMove(HDC MemDC) {
    for (int i = 0; i < Stage_Mv[Stage]; i++) { //움직이는 벽
        RECT& rect = Stage_mv[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_Move(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapMv);

    for (int i = 0; i < Stage_Mv[Stage]; i++) {
        RECT& rect = Stage_mv[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}
//무브 스타트의 제일 첫 블럭 -1, 마지막 블럭의 마지막 +1, y는 건들지 말고 x만
RECT S1_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_mvs[] = { 
    { XPOS(5), YPOS(4), RXPOS(6) + 1, BYPOS(5) + 1 },
    { XPOS(24), YPOS(4), RXPOS(25) + 1, BYPOS(5) + 1 },
};
RECT S5_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_mvs[] = {
    { XPOS(8), YPOS(8), RXPOS(9) + 1, BYPOS(9) + 1 },
    { XPOS(20), YPOS(8), RXPOS(21) + 1, BYPOS(9) + 1 },
};
RECT S10_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_mvs[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_mvs[] = {
    {XPOS(3), YPOS(10), RXPOS(4) + 1, BYPOS(11) + 1 },
    {XPOS(10), YPOS(10), RXPOS(11) + 1, BYPOS(11) + 1 },
};

int Num_S1_Mvs = sizeof(S1_mvs) / sizeof(S1_mvs[0]);
int Num_S2_Mvs = sizeof(S2_mvs) / sizeof(S2_mvs[0]);
int Num_S3_Mvs = sizeof(S3_mvs) / sizeof(S3_mvs[0]);
int Num_S4_Mvs = sizeof(S4_mvs) / sizeof(S4_mvs[0]);
int Num_S5_Mvs = sizeof(S5_mvs) / sizeof(S5_mvs[0]);
int Num_S6_Mvs = sizeof(S6_mvs) / sizeof(S6_mvs[0]);
int Num_S7_Mvs = sizeof(S7_mvs) / sizeof(S7_mvs[0]);
int Num_S8_Mvs = sizeof(S8_mvs) / sizeof(S8_mvs[0]);
int Num_S9_Mvs = sizeof(S9_mvs) / sizeof(S9_mvs[0]);
int Num_S10_Mvs = sizeof(S10_mvs) / sizeof(S10_mvs[0]);
int Num_S11_Mvs = sizeof(S11_mvs) / sizeof(S11_mvs[0]);
int Num_S12_Mvs = sizeof(S12_mvs) / sizeof(S12_mvs[0]);
int Num_S13_Mvs = sizeof(S13_mvs) / sizeof(S13_mvs[0]);

int Stage_Mvs[] = {
    Num_S1_Mvs,
    Num_S2_Mvs,
    Num_S3_Mvs,
    Num_S4_Mvs,
    Num_S5_Mvs,
    Num_S6_Mvs,
    Num_S7_Mvs,
    Num_S8_Mvs,
    Num_S9_Mvs,
    Num_S10_Mvs,
    Num_S11_Mvs,
    Num_S12_Mvs,
    Num_S13_Mvs,
};


RECT* Stage_mvs[] = {
    S1_mvs,
    S2_mvs,
    S3_mvs,
    S4_mvs,
    S5_mvs,
    S6_mvs,
    S7_mvs,
    S8_mvs,
    S9_mvs,
    S10_mvs,
    S11_mvs,
    S12_mvs,
    S13_mvs,
};

void lookMoves(HDC MemDC) {
    for (int i = 0; i < Stage_Mvs[Stage]; i++) { //움직이는 벽
        RECT& rect = Stage_mvs[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}
void Img_Moves(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapMvs);

    for (int i = 0; i < Stage_Mvs[Stage]; i++) {
        RECT& rect = Stage_mvs[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}