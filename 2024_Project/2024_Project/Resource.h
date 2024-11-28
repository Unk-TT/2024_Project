//{{NO_DEPENDENCIES}}
// Microsoft Visual C++에서 생성한 포함 파일입니다.
// 다음에서 사용 2024_Project.rc

#define IDS_APP_TITLE			103

#define IDR_MAINFRAME			128
#define IDD_MY2024PROJECT_DIALOG	102
#define IDD_ABOUTBOX			103
#define IDM_ABOUT				104
#define IDM_EXIT				105
#define IDI_MY2024PROJECT			107
#define IDI_SMALL				108
#define IDC_MY2024PROJECT			109
#define IDC_MYICON				2
#ifndef IDC_STATIC
#define IDC_STATIC				-1
#endif
// 다음은 새 개체에 사용할 기본값입니다.
//

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

#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS

#define _APS_NO_MFC					130
#define _APS_NEXT_RESOURCE_VALUE	129
#define _APS_NEXT_COMMAND_VALUE		32771
#define _APS_NEXT_CONTROL_VALUE		1000
#define _APS_NEXT_SYMED_VALUE		110
#endif
#endif
