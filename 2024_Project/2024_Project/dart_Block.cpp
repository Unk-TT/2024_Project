#include "All_Block.h"
#include "Resource.h"

//돌기위한 블럭
RECT S1_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_dt_b[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_dt_b[] = {
    { XPOS(3), YPOS(13), RXPOS(6) + 1, BYPOS(14) + 1},
    { XPOS(20), YPOS(11), RXPOS(21) + 1, BYPOS(12) + 1},
    { XPOS(25), YPOS(13), RXPOS(26) + 1, BYPOS(14) + 1},
};
RECT S11_dt_b[] = {
    { XPOS(5), YPOS(12), RXPOS(8) + 1, BYPOS(13) + 1},
    { XPOS(18), YPOS(6), RXPOS(21) + 1, BYPOS(7) + 1},
};
RECT S12_dt_b[] = {
    { XPOS(1), YPOS(1), RXPOS(28) + 1, BYPOS(13) + 1},
    { XPOS(1), YPOS(1), RXPOS(28) + 1, BYPOS(13) + 1},
};
RECT S13_dt_b[] = { XPOS(6), YPOS(14), RXPOS(11) + 1, BYPOS(15) + 1 };

RECT* Stage_dt_b[] = {
    S1_dt_b,
    S2_dt_b,
    S3_dt_b,
    S4_dt_b,
    S5_dt_b,
    S6_dt_b,
    S7_dt_b,
    S8_dt_b,
    S9_dt_b,
    S10_dt_b,
    S11_dt_b,
    S12_dt_b,
    S13_dt_b,
};

//도는 표창블럭
RECT S1_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_dt[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_dt[] = {
    { XPOS(2) + 30, YPOS(12) + 30, RXPOS(3) + 31, BYPOS(13) + 31 },
    { XPOS(19) + 30, YPOS(10) + 30, RXPOS(20) + 31, BYPOS(11) + 31 },
    { XPOS(24) + 30, YPOS(12) + 30, RXPOS(25) + 31, BYPOS(13) + 31 },
};
RECT S11_dt[] = {
    { XPOS(4) + 30, YPOS(11) + 30, RXPOS(5) + 31, BYPOS(12) + 31 },
    { XPOS(17) + 30, YPOS(5) + 30, RXPOS(18) + 31, BYPOS(6) + 31 },
};
RECT S12_dt[] = {
    { XPOS(0) + 30, YPOS(0) + 30, RXPOS(1) + 31, BYPOS(1) + 31 },
    { XPOS(27) + 30, YPOS(12) + 30, RXPOS(28) + 31, BYPOS(13) + 31 },
};
RECT S13_dt[] = { XPOS(5) + 30, YPOS(13) + 30, RXPOS(6) + 31, BYPOS(14) + 31 };

//표창블럭 기준점 위 표창과 동일
RECT S1_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_dt_s[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S10_dt_s[] = {
    { XPOS(2) + 30, YPOS(12) + 30, RXPOS(3) + 31, BYPOS(13) + 31 },
    { XPOS(19) + 30, YPOS(10) + 30, RXPOS(20) + 31, BYPOS(11) + 31 },
    { XPOS(24) + 30, YPOS(12) + 30, RXPOS(25) + 31, BYPOS(13) + 31 },
};
RECT S11_dt_s[] = {
    { XPOS(4) + 30, YPOS(11) + 30, RXPOS(5) + 31, BYPOS(12) + 31 },
    { XPOS(17) + 30, YPOS(5) + 30, RXPOS(18) + 31, BYPOS(6) + 31 },
};
RECT S12_dt_s[] = {
    { XPOS(0) + 30, YPOS(0) + 30, RXPOS(1) + 31, BYPOS(1) + 31 },
    { XPOS(27) + 30, YPOS(12) + 30, RXPOS(28) + 31, BYPOS(13) + 31 },
};
RECT S13_dt_s[] = { XPOS(5) + 30, YPOS(13) + 30, RXPOS(6) + 31, BYPOS(14) + 31 };

int Num_S1_Dt = sizeof(S1_dt) / sizeof(S1_dt[0]);
int Num_S2_Dt = sizeof(S2_dt) / sizeof(S2_dt[0]);
int Num_S3_Dt = sizeof(S3_dt) / sizeof(S3_dt[0]);
int Num_S4_Dt = sizeof(S4_dt) / sizeof(S4_dt[0]);
int Num_S5_Dt = sizeof(S5_dt) / sizeof(S5_dt[0]);
int Num_S6_Dt = sizeof(S6_dt) / sizeof(S6_dt[0]);
int Num_S7_Dt = sizeof(S7_dt) / sizeof(S7_dt[0]);
int Num_S8_Dt = sizeof(S8_dt) / sizeof(S8_dt[0]);
int Num_S9_Dt = sizeof(S9_dt) / sizeof(S9_dt[0]);
int Num_S10_Dt = sizeof(S10_dt) / sizeof(S10_dt[0]);
int Num_S11_Dt = sizeof(S11_dt) / sizeof(S11_dt[0]);
int Num_S12_Dt = sizeof(S12_dt) / sizeof(S12_dt[0]);
int Num_S13_Dt = sizeof(S13_dt) / sizeof(S13_dt[0]);

extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern bool Elect; // 닿으면 죽는 판정임 TeskSkir에서 추가하던가 해야됨
bool tru[13] = { true, true, true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true };
bool td[13] = { false, false, false, false, false, false, false, false, false, false, false, false, false };
bool tld[13] = { false, false, false, false, false, false, false, false, false, false, false, false, false };
bool tu[13] = { false, false, false, false, false, false, false, false, false, false, false, false, false };
extern bool Dart;
extern bool b_ball;

extern int h_Width;  // 한 프레임의 가로 크기
extern int h_Height; // 한 프레임의 세로 크기
extern int F_frame;   // 현재 프레임 인덱스
extern int T_frame;
extern HBITMAP hBitmapDart;

int Stage_Dt[] = {
    Num_S1_Dt,
    Num_S2_Dt,
    Num_S3_Dt,
    Num_S4_Dt,
    Num_S5_Dt,
    Num_S6_Dt,
    Num_S7_Dt,
    Num_S8_Dt,
    Num_S9_Dt,
    Num_S10_Dt,
    Num_S11_Dt,
    Num_S12_Dt,
    Num_S13_Dt,
};


RECT* Stage_dt[] = {
    S1_dt,
    S2_dt,
    S3_dt,
    S4_dt,
    S5_dt,
    S6_dt,
    S7_dt,
    S8_dt,
    S9_dt,
    S10_dt,
    S11_dt,
    S12_dt,
    S13_dt,
};

RECT* Stage_dt_s[] = {
    S1_dt_s,
    S2_dt_s,
    S3_dt_s,
    S4_dt_s,
    S5_dt_s,
    S6_dt_s,
    S7_dt_s,
    S8_dt_s,
    S9_dt_s,
    S10_dt_s,
    S11_dt_s,
    S12_dt_s,
    S13_dt_s,
};

DWORD WINAPI move_dart(LPVOID param) {
    for (int i = 0; i < Stage_Dt[Stage]; i++) {
        RECT* Main = &Stage_dt[Stage][i]; // 현재 위치
        RECT StartR = Stage_dt_s[Stage][i];
        RECT Mainb = Stage_dt_b[Stage][i];

        if (tru[i]) {
            if (Main->left + 15 < Mainb.right - 15) {
                Main->left += 2;
                Main->right += 2;
                if (Main->left + 15 >= Mainb.right - 15) {
                    td[i] = true;
                    tru[i] = false;                }
            }
        }
        else if (td[i]) {
            if (Main->top + 15 < Mainb.bottom - 15) {
                Main->top += 2;
                Main->bottom += 2;
                if (Main->top + 15 >= Mainb.bottom - 15) {
                    tld[i] = true;
                    td[i] = false;
                }
            }
        }
        else if (tld[i]) {
            if (Main->right - 15 > Mainb.left + 15) {
                Main->left -= 2;
                Main->right -= 2;
                if (Main->right - 15 <= Mainb.left + 15) {
                    tu[i] = true;
                    tld[i] = false;
                }
            }
        }
        else if (tu[i]) {
            if (Main->bottom - 15 > Mainb.top + 15) {
                Main->top -= 2;
                Main->bottom -= 2;
                if (Main->bottom - 15 <= Mainb.top + 15) {
                    tru[i] = true;
                    tu[i] = false;
                }
            }
        }
    }
    if (Dart) {
        for (int j = 0; j < Stage_Dt[Stage]; j++) {
            RECT* Main = &Stage_dt[Stage][j]; // 현재 위치
            RECT StartR = Stage_dt_s[Stage][j];
            Main->left = StartR.left;
            Main->right = StartR.right;
            Main->top = StartR.top;
            Main->bottom = StartR.bottom;
            tru[j] = true;
            tu[j], tld[j], td[j] = false;
        }
        Sleep(100);
        Dart = false;
    }
    return 0;
}

void Dart_Wall() {
    for (int i = 0; i < Stage_Dt[Stage]; i++) {
        RECT& rect = Stage_dt[Stage][i];

        // 상단 충돌 처리 (공이 사각형의 상단에 맞을 때)
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            Elect = true;
            b_ball = true;
        }
        // 사각형의 좌측과 충돌하는 경우
        if (ball.right >= rect.left && ball.left < rect.left &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            Elect = true;
            b_ball = true;
        }
        // 하단 충돌 처리 (공이 사각형의 하단에 맞을 때)
        if (ball.top <= rect.bottom && ball.bottom >= rect.bottom &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            Elect = true;
            b_ball = true;
        }
        // 사각형의 우측과 충돌하는 경우
        if (ball.left <= rect.right && ball.right >= rect.right &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            Elect = true;
            b_ball = true;
        }
    }
}

void lookDt(HDC MemDC) {
    for (int i = 0; i < Stage_Dt[Stage]; i++) {
        RECT& rect = Stage_dt[Stage][i];
        Ellipse(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}
void lookDt_b(HDC MemDC) { //도는 블럭 확인용
    for (int i = 0; i < Stage_Dt[Stage]; i++) {
        RECT& rect = Stage_dt_b[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_Dart(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapDart);

    for (int i = 0; i < Stage_Dt[Stage]; i++) {
        RECT& rect = Stage_dt[Stage][i];

        //스프라이트비트맵 시작 좌표 계산
        int spriteX = (F_frame % T_frame) * h_Width;
        int spriteY = (F_frame / T_frame) * h_Height;

        TransparentBlt(MemDC, rect.left, rect.top, h_Width, h_Height, MemDCw, spriteX, spriteY, h_Width, h_Height, RGB(255, 255, 255));

    }
    SelectObject(MemDCw, OldBitmap);
}

/*
void Img_Ee(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapEe);

    for (int i = 0; i < Stage_Dt[Stage]; i++) {
        RECT& rect = Stage_dt[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}*/