#include "All_Block.h"
#include "Resource.h"
#include <wchar.h>

RECT S1_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S3_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S6_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S7_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S8_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S9_fs_on[] = {
    { XPOS(16), YPOS(13), RXPOS(17) + 1, BYPOS(14) + 1 },
    { XPOS(19), YPOS(13), RXPOS(20) + 1, BYPOS(14) + 1 },
    { XPOS(22), YPOS(13), RXPOS(23) + 1, BYPOS(14) + 1 },
};
RECT S10_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S11_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S12_fs_on[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_fs_on[] = {
    {XPOS(18), YPOS(13), RXPOS(19) + 1, BYPOS(14) + 1 },
};

int Num_S1_Fs_on = sizeof(S1_fs_on) / sizeof(S1_fs_on[0]);
int Num_S2_Fs_on = sizeof(S2_fs_on) / sizeof(S2_fs_on[0]);
int Num_S3_Fs_on = sizeof(S3_fs_on) / sizeof(S3_fs_on[0]);
int Num_S4_Fs_on = sizeof(S4_fs_on) / sizeof(S4_fs_on[0]);
int Num_S5_Fs_on = sizeof(S5_fs_on) / sizeof(S5_fs_on[0]);
int Num_S6_Fs_on = sizeof(S6_fs_on) / sizeof(S6_fs_on[0]);
int Num_S7_Fs_on = sizeof(S7_fs_on) / sizeof(S7_fs_on[0]);
int Num_S8_Fs_on = sizeof(S8_fs_on) / sizeof(S8_fs_on[0]);
int Num_S9_Fs_on = sizeof(S9_fs_on) / sizeof(S9_fs_on[0]);
int Num_S10_Fs_on = sizeof(S10_fs_on) / sizeof(S10_fs_on[0]);
int Num_S11_Fs_on = sizeof(S11_fs_on) / sizeof(S11_fs_on[0]);
int Num_S12_Fs_on = sizeof(S12_fs_on) / sizeof(S12_fs_on[0]);
int Num_S13_Fs_on = sizeof(S13_fs_on) / sizeof(S13_fs_on[0]);

int Stage_Fs_on[] = {
    Num_S1_Fs_on,
    Num_S2_Fs_on,
    Num_S3_Fs_on,
    Num_S4_Fs_on,
    Num_S5_Fs_on,
    Num_S6_Fs_on,
    Num_S7_Fs_on,
    Num_S8_Fs_on,
    Num_S9_Fs_on,
    Num_S10_Fs_on,
    Num_S11_Fs_on,
    Num_S12_Fs_on,
    Num_S13_Fs_on,
};


RECT* Stage_fs_on[] = {
    S1_fs_on,
    S2_fs_on,
    S3_fs_on,
    S4_fs_on,
    S5_fs_on,
    S6_fs_on,
    S7_fs_on,
    S8_fs_on,
    S9_fs_on,
    S10_fs_on,
    S11_fs_on,
    S12_fs_on,
    S13_fs_on,
};


extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern HBITMAP hBitmapfs_on, hBitmapfs_off, Selecth;
extern bool Stop, Stop2;
extern HDC MemDC;
extern bool on_off;
extern bool Moveth;


DWORD WINAPI Flash_th(LPVOID param) {
    for (int i = 0; i < Stage_Fs_on[Stage]; i++) {
        RECT Main = Stage_fs_on[Stage][i];
        if (on_off) {
            if (ball.bottom >= Main.top && ball.top < Main.top &&
                ball.left + 15 >= Main.left && ball.right - 15 <= Main.right) {
                ball.bottom = Main.top;
                ball.top = ball.bottom - 20;
                PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
                Speed1 = -40; // 공이 튀어오르게 -로 설정
                Speed2 = -40;
                OutputDebugString(TEXT("Top collision detected\n"));

            }
            // 사각형의 좌측과 충돌하는 경우
            if (ball.right >= Main.left && ball.left < Main.left &&
                ball.bottom > Main.top + 10 && ball.top < Main.bottom - 10) {
                ball.right = Main.left;
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
            if (ball.top <= Main.bottom && ball.bottom >= Main.bottom &&
                ball.left + 15 >= Main.left && ball.right - 15 <= Main.right) {
                ball.top = Main.bottom;
                ball.bottom = ball.top + 20;
                PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
                ball.top += 1;
                ball.bottom += 1;
                Speed1 = 0; // 공이 바로 떨어지게
                Speed2 = 0;
            }
            // 사각형의 우측과 충돌하는 경우
            if (ball.left <= Main.right && ball.right >= Main.right &&
                ball.bottom > Main.top + 10 && ball.top < Main.bottom - 10) {
                ball.left = Main.right;
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
        else {
            if (ball.bottom >= Main.top && ball.top < Main.top &&
                ball.left + 15 >= Main.left && ball.right - 15 <= Main.right) {
            }
            // 사각형의 좌측과 충돌하는 경우
            if (ball.right >= Main.left && ball.left < Main.left &&
                ball.bottom > Main.top + 10 && ball.top < Main.bottom - 10) {
            }
            // 하단 충돌 처리 (공이 사각형의 하단에 맞을 때)
            if (ball.top <= Main.bottom && ball.bottom >= Main.bottom &&
                ball.left + 15 >= Main.left && ball.right - 15 <= Main.right) {
            }
            // 사각형의 우측과 충돌하는 경우
            if (ball.left <= Main.right && ball.right >= Main.right &&
                ball.bottom > Main.top + 10 && ball.top < Main.bottom - 10) {
            }
        }
    }
    if (Moveth) {
        on_off = true;
        Sleep(100);
    }

    return 0;
}


void lookFlash(HDC MemDC) {
    for (int i = 0; i < Stage_Fs_on[Stage]; i++) { //움직이는 벽
        RECT& rect = Stage_fs_on[Stage][i];
        Rectangle(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // 벽 선을 윈도우 색상으로 없애기
    }
}

void Img_Flash(HDC MemDC, HDC MemDCw) {
    if (on_off) {
        Selecth = hBitmapfs_on;
    }
    else {
        Selecth = hBitmapfs_off;
    }
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, Selecth);

    for (int i = 0; i < Stage_Fs_on[Stage]; i++) {
        RECT& rect = Stage_fs_on[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}