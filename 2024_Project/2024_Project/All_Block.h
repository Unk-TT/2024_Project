#pragma once
#include "windows.h"

//브레이크 블럭 배열입니다.
extern RECT S1_bb[];
extern RECT S2_bb[];
extern RECT S3_bb[];
extern RECT S4_bb[];
extern RECT S5_bb[];

extern int Num_S1_Bb;
extern int Num_S2_Bb;
extern int Num_S3_Bb;
extern int Num_S4_Bb;
extern int Num_S5_Bb;

//전기 블럭 배열입니다.

extern RECT S1_ee[];
extern RECT S2_ee[];
extern RECT S3_ee[];
extern RECT S4_ee[];
extern RECT S5_ee[];

extern int Num_S1_Ee;
extern int Num_S2_Ee;
extern int Num_S3_Ee;
extern int Num_S4_Ee;
extern int Num_S5_Ee;

//기본 블럭 배열입니다.

extern RECT S1_rs[];
extern RECT S2_rs[];
extern RECT S3_rs[];
extern RECT S4_rs[];
extern RECT S5_rs[];

extern int Num_S1_Rt;
extern int Num_S2_Rt;
extern int Num_S3_Rt;
extern int Num_S4_Rt;
extern int Num_S5_Rt;

//스타 블럭 배열입니다.

extern RECT S1_ss[];
extern RECT S2_ss[];
extern RECT S3_ss[];
extern RECT S4_ss[];
extern RECT S5_ss[];

extern int Num_S1_St;
extern int Num_S2_St;
extern int Num_S3_St;
extern int Num_S4_St;
extern int Num_S5_St;

//점프 블럭 배열입니다.

extern RECT S1_jw[];
extern RECT S2_jw[];
extern RECT S3_jw[];
extern RECT S4_jw[];
extern RECT S5_jw[];

extern int Num_S1_JW;
extern int Num_S2_JW;
extern int Num_S3_JW;
extern int Num_S4_JW;
extern int Num_S5_JW;

//왼쪽 화살표 블럭 배열입니다.

extern RECT S1_gwl[];
extern RECT S2_gwl[];
extern RECT S3_gwl[];
extern RECT S4_gwl[];
extern RECT S5_gwl[];

extern int Num_S1_GWl;
extern int Num_S2_GWl;
extern int Num_S3_GWl;
extern int Num_S4_GWl;
extern int Num_S5_GWl;

//오른쪽 화살표 블럭 배열입니다.

extern RECT S1_gwr[];
extern RECT S2_gwr[];
extern RECT S3_gwr[];
extern RECT S4_gwr[];
extern RECT S5_gwr[];

extern int Num_S1_GWr;
extern int Num_S2_GWr;
extern int Num_S3_GWr;
extern int Num_S4_GWr;
extern int Num_S5_GWr;

void Wall();
void Star();
void Jump_Wall();
void Break_Wall();
void Ele_Wall();
void Go_Wall_L();
void Go_Wall_R();
void Move();
void Tele();
void Side_Item();
void Jump_Item();
void Dart_Wall();
void Tb_Wall();
void Tb_Throm();

void ReSet(HWND hWnd);
void nb_ReSet(HWND hWnd);
void restar();
void rebreak();
void reSide_Item();
void reJump_Item();

void lookWall(HDC MemDC);
void lookStar(HDC MemDC);
void lookJump(HDC MemDC);
void lookBreak(HDC MemDC);
void lookEe(HDC MemDC);
void lookGwL(HDC MemDC);
void lookGwR(HDC MemDC);
void lookMove(HDC MemDC);
void lookTele(HDC MemDC);
void lookTelew(HDC MemDC);
void lookSide(HDC MemDC);
void lookJi(HDC MemDC);
void lookDt_b(HDC MemDC);
void lookDt(HDC MemDC);
void lookFlash(HDC MemDC);
void lookTb(HDC MemDC);
void lookMove(HDC MemDC);
void lookMoves(HDC MemDC);

void Img_Wall(HDC MemDC, HDC MemDCw);
void Img_Star(HDC MemDC, HDC MemDCw);
void Img_Jw(HDC MemDC, HDC MemDCw);
void Img_Bb(HDC MemDC, HDC MemDCw);
void Img_Ee(HDC MemDC, HDC MemDCw);
void Img_GwL(HDC MemDC, HDC MemDCw);
void Img_GwR(HDC MemDC, HDC MemDCw);
void Img_Main(HDC MemDC, HDC MemDCw);
void Img_Select(HDC MemDC, HDC MemDCw);
void Img_Dart(HDC MemDC, HDC MemDCw);
void Img_Flash(HDC MemDC, HDC MemDCw);
void Img_Tele(HDC MemDC, HDC MemDCw);
void Img_Telew(HDC MemDC, HDC MemDCw);
void Img_Sidei(HDC MemDC, HDC MemDCw);
void Img_Jumpi(HDC MemDC, HDC MemDCw);
void Img_Throm(HDC MemDC, HDC MemDCw);
void Img_Move(HDC MemDC, HDC MemDCw);
void Img_Moves(HDC MemDC, HDC MemDCw);

DWORD WINAPI move_T(LPVOID param);
DWORD WINAPI move_dart(LPVOID param);
DWORD WINAPI Flash_th(LPVOID param);

void MainCheck(HDC MemDC);
void MainSelect(HDC MemDC);

void Img_EatStar(HDC MemDC, HDC MemDCw);
void Img_B_Break(HDC MemDC, HDC MemDCw);
void Img_Ball(HDC MemDC, HDC MemDCw);