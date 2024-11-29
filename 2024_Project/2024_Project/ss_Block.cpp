#include "All_Block.h"
#include "Resource.h"

//��Ÿ�� �迭�Դϴ�.

RECT S1_ss[] = { //��Ÿ���� �迭
    { XPOS(6), YPOS(5), RXPOS(7) + 1, BYPOS(6) + 1},
    { XPOS(6), YPOS(6), RXPOS(7) + 1, BYPOS(7) + 1},
    { XPOS(5), YPOS(5), RXPOS(6) + 1, BYPOS(6) + 1},
    { XPOS(5), YPOS(6), RXPOS(6) + 1, BYPOS(7) + 1},
    { XPOS(22), YPOS(6), RXPOS(23) + 1, BYPOS(7) + 1},
    { XPOS(22), YPOS(5), RXPOS(23) + 1, BYPOS(6) + 1},
    { XPOS(23), YPOS(6), RXPOS(24) + 1, BYPOS(7) + 1},
    { XPOS(23), YPOS(5), RXPOS(24) + 1, BYPOS(6) + 1},
};
RECT S2_ss[] = { //��Ÿ���� �迭
    { XPOS(10), YPOS(7), RXPOS(11) + 1, BYPOS(8) + 1},
    { XPOS(11), YPOS(6), RXPOS(12) + 1, BYPOS(7) + 1},
    { XPOS(12), YPOS(5), RXPOS(13) + 1, BYPOS(6) + 1},
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
RECT S3_ss[] = { //��Ÿ���� �迭
    { XPOS(3), YPOS(11), RXPOS(4) + 1, BYPOS(12) + 1},
    { XPOS(4), YPOS(11), RXPOS(5) + 1, BYPOS(12) + 1},
    { XPOS(5), YPOS(11), RXPOS(6) + 1, BYPOS(12) + 1},
    { XPOS(3), YPOS(12), RXPOS(4) + 1, BYPOS(13) + 1},
    { XPOS(4), YPOS(12), RXPOS(5) + 1, BYPOS(13) + 1},
    { XPOS(5), YPOS(12), RXPOS(6) + 1, BYPOS(13) + 1},
};
RECT S4_ss[] = { XPOS(24), YPOS(10), RXPOS(25) + 1, BYPOS(11) + 1 };
RECT S5_ss[] = { //��Ÿ���� �迭
    { XPOS(24), YPOS(10), RXPOS(25) + 1, BYPOS(11) + 1},
};
RECT S6_ss[] = {
    { XPOS(24), YPOS(1), RXPOS(25) + 1, BYPOS(2) + 1},
    { XPOS(4), YPOS(5), RXPOS(5) + 1, BYPOS(6) + 1},
    { XPOS(24), YPOS(9), RXPOS(25) + 1, BYPOS(10) + 1},
};
RECT S7_ss[] = {
    { XPOS(8), YPOS(12), RXPOS(9) + 1, BYPOS(13) + 1},
    { XPOS(22), YPOS(12), RXPOS(23) + 1, BYPOS(13) + 1},
};
RECT S8_ss[] = { 
    { XPOS(16), YPOS(2), RXPOS(17) + 1, BYPOS(3) + 1},
    { XPOS(16), YPOS(3), RXPOS(17) + 1, BYPOS(4) + 1},
    { XPOS(16), YPOS(7), RXPOS(17) + 1, BYPOS(8) + 1},
    { XPOS(16), YPOS(8), RXPOS(17) + 1, BYPOS(9) + 1},
    { XPOS(16), YPOS(9), RXPOS(17) + 1, BYPOS(10) + 1},
};
RECT S9_ss[] = {
    { XPOS(24), YPOS(5), RXPOS(25) + 1, BYPOS(6) + 1},
    { XPOS(24), YPOS(6), RXPOS(25) + 1, BYPOS(7) + 1},
    { XPOS(4), YPOS(10), RXPOS(5) + 1, BYPOS(11) + 1},
};
RECT S10_ss[] = {
    { XPOS(3), YPOS(2), RXPOS(4) + 1, BYPOS(3) + 1},
    { XPOS(1), YPOS(3), RXPOS(2) + 1, BYPOS(4) + 1},
    { XPOS(5), YPOS(3), RXPOS(6) + 1, BYPOS(4) + 1},
    { XPOS(28), YPOS(1), RXPOS(29) + 1, BYPOS(2) + 1},
    { XPOS(23), YPOS(3), RXPOS(24) + 1, BYPOS(4) + 1},
    { XPOS(27), YPOS(5), RXPOS(28) + 1, BYPOS(6) + 1},
    { XPOS(28), YPOS(12), RXPOS(29) + 1, BYPOS(13) + 1},
    { XPOS(4), YPOS(12), RXPOS(5) + 1, BYPOS(13) + 1},
};
RECT S11_ss[] = {
    { XPOS(2), YPOS(0), RXPOS(3) + 1, BYPOS(1) + 1}, // ����
    { XPOS(3), YPOS(5), RXPOS(4) + 1, BYPOS(6) + 1},
    { XPOS(13), YPOS(12), RXPOS(14) + 1, BYPOS(13) + 1},
    { XPOS(9), YPOS(2), RXPOS(10) + 1, BYPOS(3) + 1},
    { XPOS(22), YPOS(7), RXPOS(23) + 1, BYPOS(8) + 1}, // �ߴ�
    { XPOS(28), YPOS(6), RXPOS(29) + 1, BYPOS(7) + 1}, // ����
    { XPOS(28), YPOS(7), RXPOS(29) + 1, BYPOS(8) + 1},
    { XPOS(28), YPOS(8), RXPOS(29) + 1, BYPOS(9) + 1},
    { XPOS(28), YPOS(9), RXPOS(29) + 1, BYPOS(10) + 1},
    { XPOS(28), YPOS(10), RXPOS(29) + 1, BYPOS(11) + 1},
};
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
extern HBITMAP hBitmapStar, hBitmapEatStar;

extern int Star_Width;  // �� �������� ���� ũ��
extern int Star_Height; // �� �������� ���� ũ��
extern int StarF_frame;   // ���� ������
extern int StarT_frame; // �� ������ ����
RECT EatStar[] = { 0, 0, 0, 0 };
extern bool Eats;

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

//��Ÿ�� ����
void Star() {
    {
        for (int i = 0; i < Stage_St[Stage]; i++) {
            RECT& rect = Stage_ss[Stage][i];

            // ��Ÿ ���� �浹 ó��
            if (ball.bottom >= rect.top && ball.top <= rect.bottom &&
                ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
                PlaySound(TEXT("Star.wav"), NULL, SND_FILENAME | SND_ASYNC);
                Count++; // ��Ÿ�� �浹�ϸ� ī��Ʈ ����
                EatStar->left = Stage_ss[Stage][i].left;
                EatStar->right = Stage_ss[Stage][i].right;
                EatStar->top = Stage_ss[Stage][i].top;
                EatStar->bottom = Stage_ss[Stage][i].bottom;
                Eats = true;
                for (int j = i; j < Stage_St[Stage] - 1; j++) {
                    Stage_ss[Stage][j] = Stage_ss[Stage][j + 1];
                }
                Stage_St[Stage]--;
                i--;
            }
        }
    }
}

//��Ÿ���� ȭ��� ������, ������ �ʰ�
void lookStar(HDC MemDC) {
    for (int i = 0; i < Stage_St[Stage]; i++) {
        RECT& rect = Stage_ss[Stage][i];
        Ellipse(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // �� ���� ������ �������� ���ֱ�
    }
}

//��Ÿ�� ��Ʈ��
void Img_Star(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapStar);

        for (int i = 0; i < Stage_St[Stage]; i++) {
            RECT& rect = Stage_ss[Stage][i];
            BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
        }
    SelectObject(MemDCw, OldBitmap);
}

void Img_EatStar(HDC MemDC, HDC MemDCw) {
    if (Eats) {
        HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapEatStar);

        RECT& rect = EatStar[0];

        //��������Ʈ��Ʈ�� ���� ��ǥ ���
        int spriteX = (StarF_frame % StarT_frame) * Star_Width;
        int spriteY = (StarF_frame / StarT_frame) * Star_Height;

        TransparentBlt(MemDC, rect.left - 90, rect.top - 90, Star_Width, Star_Height, MemDCw, spriteX, spriteY, Star_Width, Star_Height, RGB(255, 255, 255));

        SelectObject(MemDCw, OldBitmap);
        if (StarF_frame == StarT_frame - 1) { Eats = false; StarF_frame = 0; }
    }
    
}