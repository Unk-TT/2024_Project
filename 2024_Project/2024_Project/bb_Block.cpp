#include "All_Block.h"
#include "Resource.h"

RECT S1_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S2_bb[] = { XPOS(7), YPOS(13), RXPOS(8) + 1, BYPOS(14) + 1 };
RECT S3_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S4_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S5_bb[] = { //�극��ũ ���� �迭
    //��� ���
    { XPOS(10), YPOS(10), RXPOS(11) + 1, BYPOS(11) + 1},
    { XPOS(11), YPOS(10), RXPOS(12) + 1, BYPOS(11) + 1},
    { XPOS(12), YPOS(10), RXPOS(13) + 1, BYPOS(11) + 1},
    { XPOS(13), YPOS(10), RXPOS(14) + 1, BYPOS(11) + 1},
    { XPOS(14), YPOS(10), RXPOS(15) + 1, BYPOS(11) + 1},
    { XPOS(15), YPOS(10), RXPOS(16) + 1, BYPOS(11) + 1},
    { XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1},
    { XPOS(17), YPOS(10), RXPOS(18) + 1, BYPOS(11) + 1},
    { XPOS(21), YPOS(8), RXPOS(22) + 1, BYPOS(9) + 1},
    { XPOS(21), YPOS(9), RXPOS(22) + 1, BYPOS(10) + 1},
    { XPOS(21), YPOS(10), RXPOS(22) + 1, BYPOS(11) + 1},
};
RECT S6_bb[] = { 
    { XPOS(7), YPOS(2), RXPOS(8) + 1, BYPOS(3) + 1},//����
    { XPOS(10), YPOS(2), RXPOS(11) + 1, BYPOS(3) + 1},
    { XPOS(13), YPOS(2), RXPOS(14) + 1, BYPOS(3) + 1},
    { XPOS(16), YPOS(2), RXPOS(17) + 1, BYPOS(3) + 1},
    { XPOS(7), YPOS(10), RXPOS(8) + 1, BYPOS(11) + 1},//�ǾƷ�
    { XPOS(10), YPOS(10), RXPOS(11) + 1, BYPOS(11) + 1},
    { XPOS(13), YPOS(10), RXPOS(14) + 1, BYPOS(11) + 1},
    { XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1},
    { XPOS(10), YPOS(6), RXPOS(11) + 1, BYPOS(7) + 1},//�߰�
    { XPOS(13), YPOS(6), RXPOS(14) + 1, BYPOS(7) + 1},
    { XPOS(16), YPOS(6), RXPOS(17) + 1, BYPOS(7) + 1},
    { XPOS(19), YPOS(6), RXPOS(20) + 1, BYPOS(7) + 1},
};
RECT S7_bb[] = { XPOS(6), YPOS(2), RXPOS(7) + 1, BYPOS(3) + 1 };
RECT S8_bb[] = { 
    { XPOS(6), YPOS(7), RXPOS(7) + 1, BYPOS(8) + 1},
    { XPOS(3), YPOS(11), RXPOS(4) + 1, BYPOS(12) + 1},
    { XPOS(20), YPOS(9), RXPOS(21) + 1, BYPOS(10) + 1},
};
RECT S9_bb[] = { XPOS(6), YPOS(13), RXPOS(7) + 1, BYPOS(14) + 1 };
RECT S10_bb[] = {
    { XPOS(4), YPOS(7), RXPOS(5) + 1, BYPOS(8) + 1},
    { XPOS(5), YPOS(7), RXPOS(6) + 1, BYPOS(8) + 1},
};
RECT S11_bb[] = {
    { XPOS(5), YPOS(1), RXPOS(6) + 1, BYPOS(2) + 1}, // ���
    { XPOS(7), YPOS(2), RXPOS(8) + 1, BYPOS(3) + 1},
    { XPOS(15), YPOS(13), RXPOS(16) + 1, BYPOS(14) + 1}, //������ �ϴ�
    { XPOS(17), YPOS(13), RXPOS(18) + 1, BYPOS(14) + 1},
    { XPOS(19), YPOS(13), RXPOS(20) + 1, BYPOS(14) + 1},
    { XPOS(23), YPOS(13), RXPOS(24) + 1, BYPOS(14) + 1},
    { XPOS(25), YPOS(13), RXPOS(26) + 1, BYPOS(14) + 1},
    { XPOS(16), YPOS(10), RXPOS(17) + 1, BYPOS(11) + 1}, //������ �ߴ�
    { XPOS(18), YPOS(10), RXPOS(19) + 1, BYPOS(11) + 1},
    { XPOS(23), YPOS(8), RXPOS(24) + 1, BYPOS(9) + 1},
    { XPOS(28), YPOS(4), RXPOS(29) + 1, BYPOS(5) + 1},
};
RECT S12_bb[] = { XPOS(-99), YPOS(-99), RXPOS(-99) + 1, BYPOS(-99) + 1 };
RECT S13_bb[] = {
    {XPOS(18), YPOS(10), RXPOS(19) + 1, BYPOS(11) + 1 },
    {XPOS(19), YPOS(10), RXPOS(20) + 1, BYPOS(11) + 1 },
    {XPOS(20), YPOS(10), RXPOS(21) + 1, BYPOS(11) + 1 },
};


int Num_S1_Bb = sizeof(S1_bb) / sizeof(S1_bb[0]);
int Num_S2_Bb = sizeof(S2_bb) / sizeof(S2_bb[0]);
int Num_S3_Bb = sizeof(S3_bb) / sizeof(S3_bb[0]);
int Num_S4_Bb = sizeof(S4_bb) / sizeof(S4_bb[0]);
int Num_S5_Bb = sizeof(S5_bb) / sizeof(S5_bb[0]);
int Num_S6_Bb = sizeof(S6_bb) / sizeof(S6_bb[0]);
int Num_S7_Bb = sizeof(S7_bb) / sizeof(S7_bb[0]);
int Num_S8_Bb = sizeof(S8_bb) / sizeof(S8_bb[0]);
int Num_S9_Bb = sizeof(S9_bb) / sizeof(S9_bb[0]);
int Num_S10_Bb = sizeof(S10_bb) / sizeof(S10_bb[0]);
int Num_S11_Bb = sizeof(S11_bb) / sizeof(S11_bb[0]);
int Num_S12_Bb = sizeof(S12_bb) / sizeof(S12_bb[0]);
int Num_S13_Bb = sizeof(S13_bb) / sizeof(S13_bb[0]);


extern RECT ball;
extern double Speed1;
extern double Speed2;
extern int Stage;
extern int Count;
extern HBITMAP hBitmapBb, hBitmapB_Br;
extern bool Stop, Stop2;

extern int B_Width;  // B�� ���� ũ��
extern int B_Height; // B�� ���� ũ��
extern int BF_frame;   // B�� ���� ������
extern int BT_frame; // B�� �� ������ ����
RECT B_Break[] = { 0, 0, 0, 0 };
extern bool B_Br; // B�� ��������Ʈ ���� ����

int Stage_Bb[] = {
    Num_S1_Bb,
    Num_S2_Bb,
    Num_S3_Bb,
    Num_S4_Bb,
    Num_S5_Bb,
    Num_S6_Bb,
    Num_S7_Bb,
    Num_S8_Bb,
    Num_S9_Bb,
    Num_S10_Bb,
    Num_S11_Bb,
    Num_S12_Bb,
    Num_S13_Bb,
};


RECT* Stage_bb[] = {
    S1_bb,
    S2_bb,
    S3_bb,
    S4_bb,
    S5_bb,
    S6_bb,
    S7_bb,
    S8_bb,
    S9_bb,
    S10_bb,
    S11_bb,
    S12_bb,
    S13_bb,
};

void Break_Wall() {
    for (int i = 0; i < Stage_Bb[Stage]; i++) {
        RECT& rect = Stage_bb[Stage][i];
        // �μ����� ��� ���� ó��, ��ܸ�
        if (ball.bottom >= rect.top && ball.top < rect.top &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            B_Break->left = Stage_bb[Stage][i].left;
            B_Break->right = Stage_bb[Stage][i].right;
            B_Break->top = Stage_bb[Stage][i].top;
            B_Break->bottom = Stage_bb[Stage][i].bottom;
            B_Br = true;
            for (int j = i; j < Stage_Bb[Stage] - 1; j++) {
                Stage_bb[Stage][j] = Stage_bb[Stage][j + 1];
            }
            Stage_Bb[Stage]--;
            i--;
            Speed1 = -40; // ���� Ƣ������� -�� ����
            Speed2 = -40;
        }
        if (ball.right >= rect.left && ball.left < rect.left &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            ball.right = rect.left;
            ball.left = ball.right - 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Stop = false;
            Stop2 = false;
            for (int j = 0; j < 15; j++) { // �浹 �� �������� ��������
                ball.left -= 1;
                ball.right -= 1;
            }
        }
        // �ϴ� �浹 ó�� (���� �簢���� �ϴܿ� ���� ��)
        if (ball.top <= rect.bottom && ball.bottom >= rect.bottom &&
            ball.left + 15 >= rect.left && ball.right - 15 <= rect.right) {
            ball.top = rect.bottom;
            ball.bottom = ball.top + 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            ball.top += 1;
            ball.bottom += 1;
            Speed1 = 0; // ���� �ٷ� ��������
            Speed2 = 0;
        }
        // �簢���� ������ �浹�ϴ� ���
        if (ball.left <= rect.right && ball.right >= rect.right &&
            ball.bottom > rect.top + 10 && ball.top < rect.bottom - 10) {
            ball.left = rect.right;
            ball.right = ball.left + 20;
            PlaySound(TEXT("Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Stop = false;
            Stop2 = false;
            for (int j = 0; j < 15; j++) { // �浹 �� �������� ��������
                ball.left += 1;
                ball.right += 1;
            }
        }
    }
}

void lookBreak(HDC MemDC) {
    for (int i = 0; i < Stage_Bb[Stage]; i++) { //�μ���
        RECT& rect = Stage_bb[Stage][i];
        Ellipse(MemDC, rect.left, rect.top, rect.right, rect.bottom);
        FillRect(MemDC, &rect, (HBRUSH)(COLOR_WINDOW + 1)); // �� ���� ������ �������� ���ֱ�
    }
}

void Img_Bb(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapBb);

    for (int i = 0; i < Stage_Bb[Stage]; i++) {
        RECT& rect = Stage_bb[Stage][i];
        BitBlt(MemDC, rect.left, rect.top, 123, 160, MemDCw, 0, 0, SRCCOPY);
    }
    SelectObject(MemDCw, OldBitmap);
}

void Img_B_Break(HDC MemDC, HDC MemDCw) {
    if (B_Br) {
        HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapB_Br);

        RECT& rect = B_Break[0];

        //��������Ʈ��Ʈ�� ���� ��ǥ ���
        int spriteX = (BF_frame % BT_frame) * B_Width;
        int spriteY = (BF_frame / BT_frame) * B_Height;

        TransparentBlt(MemDC, rect.left - 80, rect.top - 60, B_Width, B_Height, MemDCw, spriteX, spriteY, B_Width, B_Height, RGB(255, 255, 255));

        SelectObject(MemDCw, OldBitmap);
        if (BF_frame == BT_frame - 1) { B_Br = false; BF_frame = 0; }
    }
}