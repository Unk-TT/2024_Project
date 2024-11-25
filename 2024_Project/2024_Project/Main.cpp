#include "All_Block.h"
#include "Resource.h"

extern int Stage;
extern HBITMAP hBitmapMain, hBitmapMains;
extern int x, y;
extern double Speed1, Speed2;
extern RECT ball;
HWND hWnd;

RECT S_Start_B[] = {
    {XPOS(-99), YPOS(-99), XPOS(-99) + 20 , YPOS(-99) + 20},
    {XPOS(14.33), YPOS(7.33), XPOS(14.33) + 20 , YPOS(7.33) + 20},
    { XPOS(11.33), YPOS(11.33), XPOS(11.33) + 20 , YPOS(11.33) + 20 },
    { XPOS(9.33), YPOS(4.33), XPOS(9.33) + 20 , YPOS(4.33) + 20 },
    { XPOS(6.33), YPOS(0.33), XPOS(6.33) + 20 , YPOS(0.33) + 20 },
    { XPOS(4.33), YPOS(7.33), XPOS(4.33) + 20 , YPOS(7.33) + 20 },
    { XPOS(4.33), YPOS(1.33), XPOS(4.33) + 20 , YPOS(1.33) + 20 },
    { XPOS(4.33), YPOS(9.33), XPOS(4.33) + 20 , YPOS(9.33) + 20 },
    { XPOS(0.33), YPOS(1.33), XPOS(0.33) + 20 , YPOS(1.33) + 20 },
    { XPOS(0.33), YPOS(1.33), XPOS(0.33) + 20 , YPOS(1.33) + 20 },
    { XPOS(0.33), YPOS(1.33), XPOS(0.33) + 20 , YPOS(1.33) + 20 },
    { XPOS(0.33), YPOS(1.33), XPOS(0.33) + 20 , YPOS(1.33) + 20 },
    { XPOS(0.33), YPOS(1.33), XPOS(0.33) + 20 , YPOS(1.33) + 20 },
    { XPOS(13.33), YPOS(13.33), XPOS(13.33) + 20 , YPOS(13.33) + 20 },
};

RECT Select_Re[] = {
    {80, 80, 145, 145},
    {125, 270, 309, 455},
    {370, 270, 555, 455},
    {615, 270, 800, 455},
    {860, 270, 1045, 455},
    {1105, 270, 1290, 455},
    {1350, 270, 1535, 455},
    {1595, 270, 1780, 455},
    {125, 489, 309, 674},
    {370, 489, 555, 674},
    {615, 489, 800, 674},
    {860, 489, 1045, 674},
    {1105, 489, 1290, 674},
    {1350, 489, 1535, 674},
};

int Select_St[] = {
    99,
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
};

void MainCheck(HDC MemDC) {
    if (Stage == 99) {
        MoveToEx(MemDC, x, y, NULL);
        RECT Mouse{ x, y, x + 1, y + 1 };
        RECT Mainb = { 79, 636, 671, 800 };
        RECT rect;
        if (IntersectRect(&rect, &Mainb, &Mouse)) {
            PlaySound(TEXT("B_Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Stage = 98;
            x = 0;
            y = 0;
        }
    }
}
void MainSelect(HDC MemDC) {
    if (Stage == 98) {
        MoveToEx(MemDC, x, y, NULL);
        RECT Mouse{ x, y, x + 1, y + 1 };
        RECT rect;
        for (int i = 0; i < 14; i++) {
            RECT Sel = Select_Re[i];
            if (IntersectRect(&rect, &Sel, &Mouse)) {
                PlaySound(TEXT("B_Bauns.wav"), NULL, SND_FILENAME | SND_ASYNC);
                Stage = Select_St[i];
                ball = S_Start_B[i];
                Speed1 = 0;
                Speed2 = 0;
                x = 0;
                y = 0;
            }
        }
    }
}

void Img_Main(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapMain);
    if (Stage == 99) {
        BitBlt(MemDC, XPOS(0), YPOS(0), RXPOS(X_COUNT - 1), BYPOS(Y_COUNT - 1), MemDCw, 0, 0, SRCCOPY);
        SelectObject(MemDCw, OldBitmap);
    }
}
void Img_Select(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapMains);
    if (Stage == 98) {
        BitBlt(MemDC, XPOS(0), YPOS(0), RXPOS(X_COUNT - 1), BYPOS(Y_COUNT - 1), MemDCw, 0, 0, SRCCOPY);
        SelectObject(MemDCw, OldBitmap);
    }
}