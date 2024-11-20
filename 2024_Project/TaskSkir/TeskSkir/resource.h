//{{NO_DEPENDENCIES}}
// Microsoft Visual C++에서 생성한 포함 파일입니다.
// TeskSkir.rc에서 사용되고 있습니다.
//
#define IDC_MYICON                      2
#define IDD_TESKSKIR_DIALOG             102
#define IDS_APP_TITLE                   103
#define IDD_ABOUTBOX                    103
#define IDM_ABOUT                       104
#define IDM_EXIT                        105
#define IDI_TESKSKIR                    107
#define IDI_SMALL                       108
#define IDC_TESKSKIR                    109
#define IDR_MAINFRAME                   128
//#define IDB_BITMAP1                     129
#define IDC_STATIC                      -1

#define START_X           80 // x 여백
#define START_Y           80 // y 여백
#define XPOS(x)   (START_X + (x) * INTERVAL) // 사각형 좌측 충돌용
#define YPOS(y)   (START_Y + (y) * INTERVAL) // 사각형 상단 충돌용
#define RXPOS(x)   (START_X + (x) * INTERVAL) // 사각형 우측 충돌용
#define BYPOS(y)   (START_Y + (y) * INTERVAL) // 사각형 하단 충돌용
#define GRAVITY 9.8 // 중력 정의
const int X_COUNT = 30; // 바둑판 x 칸수
const int Y_COUNT = 15; // 바둑판 y 칸수
const int INTERVAL = 60; // 바둑판모양 크기



// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NO_MFC                     1
#define _APS_NEXT_RESOURCE_VALUE        130
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           110
#endif
#endif
