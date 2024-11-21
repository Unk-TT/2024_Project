#include "All_Block.h"
#include "Resource.h"

extern int Stage;
extern HBITMAP hBitmapMain;

void Img_Main(HDC MemDC, HDC MemDCw) {
    HBITMAP OldBitmap = (HBITMAP)SelectObject(MemDCw, hBitmapMain);
    if (Stage == 99) {
        BitBlt(MemDC, XPOS(0), YPOS(0), RXPOS(X_COUNT - 1), BYPOS(Y_COUNT - 1), MemDCw, 0, 0, SRCCOPY);
        SelectObject(MemDCw, OldBitmap);
    }
}