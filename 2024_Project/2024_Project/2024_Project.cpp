// 2024_Project.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "Msimg32.lib")
#include "windows.h"
#include "framework.h"
#include "2024_Project.h"
#include "math.h"
#include <mmsystem.h>
#include "resource1.h"
#include "All_Block.h" // 모든 블럭 헤더
#pragma comment(lib, "winmm.lib")
#define MAX_LOADSTRING 100

// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.
WCHAR szTitle[MAX_LOADSTRING];                  // 제목 표시줄 텍스트입니다.
WCHAR szWindowClass[MAX_LOADSTRING];            // 기본 창 클래스 이름입니다.

// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: 여기에 코드를 입력합니다.

    // 전역 문자열을 초기화합니다.
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_MY2024PROJECT, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // 애플리케이션 초기화를 수행합니다:
    if (!InitInstance(hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_MY2024PROJECT));

    MSG msg;
    // 기본 메시지 루프입니다:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int)msg.wParam;
}



//
//  함수: MyRegisterClass()
//
//  용도: 창 클래스를 등록합니다.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_MY2024PROJECT));
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_MY2024PROJECT);
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   함수: InitInstance(HINSTANCE, int)
//
//   용도: 인스턴스 핸들을 저장하고 주 창을 만듭니다.
//
//   주석:
//
//        이 함수를 통해 인스턴스 핸들을 전역 변수에 저장하고
//        주 프로그램 창을 만든 다음 표시합니다.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
    hInst = hInstance; // 인스턴스 핸들을 전역 변수에 저장합니다.

    HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

    if (!hWnd)
    {
        return FALSE;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return TRUE;
}

// Stage 7 까지 완성 (S8), 8스테이지 만들어야 됨 (s9)

int Stage = 99; //스테이지 확인용
const int Dead = YPOS(20);
RECT ball; // 내가 움직일 공의 구조체
double Speed1 = 0.0; //자유낙하 공식의 초기 속도 (top)
double Speed2 = 0.0; //자유낙하 공식의 초기 속도 (bottom)
bool K_Left = false;
bool K_Right = false;
bool Stop, Stop2 = false; // 자유낙하 멈춰!
bool Elect = false;
int Count; //게임 끝내는 걸 확인하는 함수 (별 획득 확인)
HBITMAP MyBitmap, OldBitmap;
HBITMAP hBitmapWall, hBitmapStar, hBitmapJw, hBitmapGwl, hBitmapBb, hBitmapEe, hBitmapMain, hBitmapGwr, hBitmapDart, hBitmapfs_on, hBitmapfs_off, Selecth, hBitmapthrom, hBitmapbh, hBitmapwh, hBitmapsidei, hBitmapjumpi, hBitmapMv, hBitmapMvs, hBitmapMains, hBitmapEatStar, hBitmapB_Br, hBitmapball;
int MBR;
int x, y, ex, ey;
bool Moveth = false; //스레드 무브블럭 초기화
bool Dart = false; //스레드 다트블럭 초기화
double LeftSpeed, RightSpeed = 0.0;
bool dead = false; // 죽음 판정
int idkh; //깜박이블럭 타이머
bool on_off = true;
int ClearCount; //클리어 타이머
RECT balls; //죽을때 ball의 좌표를 저장
bool ballcheck = true; //true일때 balls에 ball의 좌표를 저장하고 소리 출력
bool no_dead = false;

bool Side_Ball = false; // 블랙 on
bool Jump_Ball = false;
bool SuperJump = false;
DWORD L_keydt = 0;
DWORD L_keyut = 0;
DWORD L_Firstkey = 0;
bool L_SuperSide = false;
bool L_keyd = true;
DWORD R_keydt = 0;
DWORD R_keyut = 0;
DWORD R_Firstkey = 0;
bool R_SuperSide = false;
bool R_keyd = true;
double Pspeed = 10.0;
COLORREF Tr1 = RGB(246, 240, 8);
DWORD L_k; //화살표 블럭 꾹
DWORD R_k; //화살표 블럭 꾹
DWORD S_ipt; //아이템 블럭 꾹
DWORD J_ipt; //아이템 블럭 꾹

///// 스프라이트 비트맵용 변수 /////
int h_Width = 60;  // 다트블럭 가로 크기
int h_Height = 60; // 다트블럭 세로 크기
int F_frame = 0;   // 다트블럭 현재 프레임
int T_frame = 4; // 다트블럭 총 프레임 개수

int Star_Width = 240;  // 스타블럭 가로 크기
int Star_Height = 240; // 스타블럭 세로 크기
int StarF_frame = 0;   // 스타블럭 현재 프레임
int StarT_frame = 23; // 스타블럭 총 프레임 개수
bool Eats = false; // 스타블럭 스프라이트 시작 조건

int B_Width = 240;  // B블럭 가로 크기
int B_Height = 240; // B블럭 세로 크기
int BF_frame = 0;   // B블럭 현재 프레임
int BT_frame = 25; // B블럭 총 프레임 개수
bool B_Br = false; // B블럭 스프라이트 시작 조건

int b_Width = 240;  // 볼 가로 크기
int b_Height = 240; // 볼 세로 크기
int bF_frame = 0;   // 볼 현재 프레임
int bT_frame = 42; // 볼 총 프레임 개수
bool b_ball = false; //  스프라이트 시작 조건


void LoadBit() {
    hBitmapWall = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP1));
    hBitmapStar = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP3));
    hBitmapJw = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP4));
    hBitmapGwl = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP5));
    hBitmapBb = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP7));
    hBitmapEe = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP6));
    hBitmapMain = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP8));
    hBitmapGwr = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP9));
    hBitmapDart = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP10));
    hBitmapfs_on = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP11));
    hBitmapfs_off = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP12));
    hBitmapthrom = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP13));
    hBitmapbh = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP14));
    hBitmapwh = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP15));
    hBitmapsidei = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP16));
    hBitmapjumpi = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP17));
    hBitmapMv = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP18));
    hBitmapMvs = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP2));
    hBitmapMains = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP19));
    hBitmapEatStar = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP20));
    hBitmapB_Br = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP21));
    hBitmapball = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP22));
}
void DelBit() {
    DeleteObject(hBitmapWall);
    DeleteObject(hBitmapStar);
    DeleteObject(hBitmapJw);
    DeleteObject(hBitmapGwl);
    DeleteObject(hBitmapBb);
    DeleteObject(hBitmapEe);
    DeleteObject(hBitmapMain);
    DeleteObject(hBitmapGwr);
    DeleteObject(hBitmapDart);
    DeleteObject(hBitmapfs_on);
    DeleteObject(hBitmapfs_off);
    DeleteObject(Selecth);
    DeleteObject(hBitmapthrom);
    DeleteObject(hBitmapbh);
    DeleteObject(hBitmapwh);
    DeleteObject(hBitmapsidei);
    DeleteObject(hBitmapjumpi);
    DeleteObject(hBitmapMains);
    DeleteObject(hBitmapEatStar);
    DeleteObject(hBitmapB_Br);
    DeleteObject(hBitmapball);
}

/*ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ이미지 생성ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ*/




LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_CREATE:
    {
        LoadBit();
        if (Stage == 0) {
            ball.left = XPOS(14.33);
            ball.top = YPOS(9.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 1) {
            ball.left = XPOS(11.33);
            ball.top = YPOS(11.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 2) {
            ball.left = XPOS(9.33);
            ball.top = YPOS(4.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 3) {
            ball.left = XPOS(6.33);
            ball.top = YPOS(0.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 4) {
            ball.left = XPOS(4.33);
            ball.top = YPOS(7.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 5) {
            ball.left = XPOS(4.33);
            ball.top = YPOS(1.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 6) {
            ball.left = XPOS(4.33);
            ball.top = YPOS(9.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 7) {
            ball.left = XPOS(12.33);
            ball.top = YPOS(5.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 8) {
            ball.left = XPOS(8.33);
            ball.top = YPOS(2.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 9) {
            ball.left = XPOS(14.33);
            ball.top = YPOS(6.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 10) {
            ball.left = XPOS(14.33);
            ball.top = YPOS(6.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 11) {
            ball.left = XPOS(14.33);
            ball.top = YPOS(6.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        else if (Stage == 12) {
            ball.left = XPOS(13.33);
            ball.top = YPOS(13.33);
            ball.right = ball.left + 20;
            ball.bottom = ball.top + 20;
        }
        SetTimer(hWnd, 1, 1, NULL);
        SetTimer(hWnd, 2, 100, NULL);
    }
    break;
    case WM_LBUTTONDOWN:
    {
        x = LOWORD(lParam);
        y = HIWORD(lParam);
    }
    break;
    case WM_RBUTTONDOWN:
    {
        ex = LOWORD(lParam);
        ey = HIWORD(lParam);
    }
    break;
    case WM_KEYDOWN:
    {
        switch (wParam)
        {
        case VK_LEFT:
            if (!K_Left) { // 키가 처음 눌린 경우에만
                L_keydt = timeGetTime(); // 눌렀을 때 시간 저장
            }
            K_Left = true;
            if (Side_Ball) {
                S_ipt = timeGetTime();
                if (L_keydt - L_keyut <= 150 && L_Firstkey <= 250 && S_ipt - L_keydt < 1) {
                    L_SuperSide = true;
                    L_keyut = 0; // SuperSide가 작동이 안되게
                }
            }
            if (Jump_Ball) {
                J_ipt = timeGetTime();
                if (L_keydt - L_keyut <= 150 && L_Firstkey <= 250 && J_ipt - L_keydt < 1) {
                    SuperJump = true;
                    L_keyut = 0; // SuperSide가 작동이 안되게
                }
            }
            break;
        case VK_RIGHT:
        {
            if (!K_Right) { // 키가 처음 눌린 경우에만
                R_keydt = timeGetTime(); // 눌렀을 때 시간 저장
            }
            K_Right = true;
            if (Side_Ball) {
                S_ipt = timeGetTime();
                if (R_keydt - R_keyut <= 150 && R_Firstkey <= 250 && S_ipt - R_keydt < 1) {
                    R_SuperSide = true;
                    R_keyut = 0; // SuperSide가 작동이 안되게
                }
            }
            if (Jump_Ball) {
                J_ipt = timeGetTime();
                if (R_keydt - R_keyut <= 150 && R_Firstkey <= 250 && J_ipt - R_keydt < 1) {
                    SuperJump = true;
                    R_keyut = 0; // SuperSide가 작동이 안되게
                }
            }
        }
        break;
        case VK_UP:
        {
            Side_Ball = true; // 테스트용
            //Stage = 99;
        }
        break;
        case VK_DOWN:
        {
            Jump_Ball = true;
        }
        break;
        case VK_ESCAPE: {
            if (Stage >= 0 && Stage <= 12) {
                nb_ReSet(hWnd);
                Stage = 98;
            }
            else if (Stage == 98) {
                PlaySound(TEXT("Select.wav"), NULL, SND_FILENAME | SND_ASYNC);
                Stage = 99;
            }
        }
        break;
        }
        break;
    }
    break;
    case WM_KEYUP:
    {
        switch (wParam)
        {
        case VK_LEFT:
            K_Left = false;
            L_keyut = timeGetTime(); // 땠을 때 시간 저장
            L_Firstkey = L_keyut - L_keydt; //눌렀을때의 총 시간 = 땐시간 - 누른시간
            break;
        case VK_RIGHT:
            K_Right = false;
            R_keyut = timeGetTime(); // 땠을 때 시간 저장
            R_Firstkey = R_keyut - R_keydt; //눌렀을때의 총 시간 = 땐시간 - 누른시간
            break;
        }
    }
    break;
    case WM_TIMER:
    {
        //스프라이트 이미지 갱신 속도
        if (wParam == 2) {
            F_frame = (F_frame + 1) % T_frame;
        }
        if (Eats) {
            StarF_frame = (StarF_frame + 1) % StarT_frame;
        }
        if (B_Br) {
            BF_frame = (BF_frame + 1) % BT_frame;
        }
        if (b_ball) {
            bF_frame = (bF_frame + 1) % bT_frame;
        }
        
        //깜빡이블럭 on off 속도 조절 낮으면 빠르게, 높으면 느리게
        if (idkh < 1000 ) {
            idkh += 1;
            if (idkh >= 200 && on_off) {
                on_off = false;
                idkh = 0;
            }
            if (idkh >= 150 && !on_off) {
                on_off = true;
                idkh = 0;
            }
        }
        //왼쪽 방향키 가속도
        if (K_Left)
        {
            if (L_SuperSide) {
                ball.left -= LeftSpeed + Pspeed;
                ball.right -= LeftSpeed + Pspeed;
            }
            else if (SuperJump) {
                Jump_Ball = false;
                SuperJump = false;
                Speed1 = -40;
                Speed2 = -40;
            }
            else { //천천히 속도 증가
                ball.left -= LeftSpeed;
                ball.right -= LeftSpeed;

                if (LeftSpeed < 3.0) {
                    LeftSpeed += 0.3;
                }
                else {
                    LeftSpeed = 3.0;
                }
            }
        }
        else { //왼쪽 방향키 가속도 천천히 속도 감소
            ball.left -= LeftSpeed;
            ball.right -= LeftSpeed;

            if (LeftSpeed > 0.0) {
                LeftSpeed -= 0.2;
            }
            else {
                LeftSpeed = 0.0;
            }
        }
        //오른쪽 방향키 가속도
        if (K_Right)
        {
            if (R_SuperSide) {
                ball.left += RightSpeed + Pspeed;
                ball.right += RightSpeed + Pspeed;
            }
            else if (SuperJump) {
                Jump_Ball = false;
                SuperJump = false;
                Speed1 = -40;
                Speed2 = -40;
            }
            else { //천천히 속도 증가
                ball.left += RightSpeed;
                ball.right += RightSpeed;

                if (RightSpeed < 3.0) {
                    RightSpeed += 0.3;
                }
                else {
                    RightSpeed = 3.0;
                }
            }
        }
        else { //오른쪽 방향키 가속도 천천히 속도 감소
            ball.left += RightSpeed;
            ball.right += RightSpeed;

            if (RightSpeed > 0.0) {
                RightSpeed -= 0.2;
            }
            else {
                RightSpeed = 0.0;
            }
        }
        //속도증가 아이템 사용 시 속도 시간 제한 
        if (R_SuperSide) {
            Pspeed -= 0.3;
            if (Pspeed <= 0.0) {
                Side_Ball = false;
                L_SuperSide = false;
                R_SuperSide = false;
                Pspeed = 10.0;
            }
        }
        else if (L_SuperSide) {
            Pspeed -= 0.3;
            if (Pspeed <= 0.0) {
                Side_Ball = false;
                L_SuperSide = false;
                R_SuperSide = false;
                Pspeed = 10.0;
            }
        }

        //전기블럭 닿으면? 사실상 닿으면 죽는 블럭 전부 포함
        if (Elect) { //찌릿찌릿 on
            if (Elect && ballcheck) {
                balls = ball;
                PlaySound(TEXT("DeadS.wav"), NULL, SND_FILENAME | SND_ASYNC);
                ballcheck = false;
            }
            
            ball = { XPOS(99), YPOS(-99), RXPOS(99) + 1, BYPOS(-99) + 1 };
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    Speed1 = 0;
                    Speed2 = 0;
                    idkh = 0;
                    ReSet(hWnd);
                    Elect = false;
                    ballcheck = true;
                    ClearCount = 0;
                }
            }
        }
        // 떨어졌으면?
        if (dead) { //죽음 on
            PlaySound(TEXT("DeadS.wav"), NULL, SND_FILENAME | SND_ASYNC);
            Speed1 = 0;
            Speed2 = 0;
            idkh = 0;
            Sleep(400);
            ReSet(hWnd);
            dead = false;
        }

        //화살표 블럭 설정
        if (!Stop && !Stop2) {
            ball.top += Speed1 * 0.15 + 0.5 * GRAVITY * pow(0.15, 2); //자유낙하 공식 볼 상단용  값을 수정하면 빨리 떨어짐
            Speed1 += GRAVITY * 0.15;

            ball.bottom += Speed2 * 0.15 + 0.5 * GRAVITY * pow(0.15, 2); //자유낙하 공식 볼 하단용
            Speed2 += GRAVITY * 0.15;
        }
        else if (Stop) { //땡!
            L_k = timeGetTime();
            R_k = timeGetTime();
            RightSpeed = 0.0;
            LeftSpeed = 0.0;
            ball.left -= 5;
            ball.right -= 5;
            if (K_Left || K_Right) {
                //stop 시간 - 눌렀던 키 시간 <= 200 일때만 (움직이는 상태로 화살표 블럭에 닿을 시 바로 떨어지기 방지)
                if (L_k - L_keydt <= 200 || R_k - R_keydt <= 200) {
                    Stop = false;
                    Speed1 = 0;
                    Speed2 = 0;
                }
            }
        }
        else if (Stop2) {
            L_k = timeGetTime();
            R_k = timeGetTime();
            RightSpeed = 0.0;
            LeftSpeed = 0.0;
            ball.left += 5;
            ball.right += 5;
            if (K_Left || K_Right) {
                //stop 시간 - 눌렀던 키 시간 <= 200 일때만 (움직이는 상태로 화살표 블럭에 닿을 시 바로 떨어지기 방지)
                if (L_k - L_keydt <= 200 || R_k - R_keydt <= 200) {
                    Stop2 = false;
                    Speed1 = 0;
                    Speed2 = 0;
                }
            }
        }

        //스테이지 99이나 98이 아니면 블럭 로직 추가
        if (Stage != 99 && Stage != 98) {
            Wall();
            Star();
            Jump_Wall();
            Break_Wall();
            Ele_Wall();
            Go_Wall_L();
            Go_Wall_R();
            Move();
            Tele();
            Side_Item();
            Jump_Item();
            Dart_Wall();
            Tb_Wall();
            Tb_Throm();
        }

        InvalidateRect(hWnd, NULL, FALSE);

        //스테이지 클리어 조건
        if (Count == 8 && Stage == 0)
        {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(11.33);
                    ball.top = YPOS(11.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
        }
        else if (Count == 12 && Stage == 1)
        {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(9.33);
                    ball.top = YPOS(4.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
        }
        else if (Count == 6 && Stage == 2)
        {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(6.33);
                    ball.top = YPOS(0.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
        }
        else if (Count == 1 && Stage == 3)
        {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(4.33);
                    ball.top = YPOS(7.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
        }
        else if (Count == 1 && Stage == 4) {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(4.33);
                    ball.top = YPOS(1.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
        }
        else if (Count == 3 && Stage == 5) {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(4.33);
                    ball.top = YPOS(9.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
        }
        else if (Count == 2 && Stage == 6) {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(12.33);
                    ball.top = YPOS(5.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
        }
        else if (Count == 5 && Stage == 7) {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(14.33);
                    ball.top = YPOS(6.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
        }
        else if (Count == 3 && Stage == 8) {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(8.33);
                    ball.top = YPOS(2.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
            }
        else if (Count == 8 && Stage == 9) {
            no_dead = true;
            if (ClearCount < 100) {
                ClearCount += 1;
                if (ClearCount > 50) {
                    nb_ReSet(hWnd);
                    Stage += 1;
                    ball.left = XPOS(8.33);
                    ball.top = YPOS(2.33);
                    ball.right = ball.left + 20;
                    ball.bottom = ball.top + 20;
                    ClearCount = 0;
                    no_dead = false;
                }
            }
            }
        //스테이지 클리어! 나중에 쓰자
       /* else if (Count == 15 && Stage == 4)
        {
            nb_ReSet(hWnd);
            KillTimer(hWnd, 1);
            MBR = MessageBox(hWnd, L"스테이지 클리어! 처음부터 다시 하시겠습니까?", L"축하합니다!", MB_YESNO);
            if (MBR == IDYES) {
                Stage = 0;
                Stop = false;
                Stop2 = false;
                Speed1 = 0;
                Speed2 = 0;
                K_Left = false;
                K_Right = false;

                SetTimer(hWnd, 1, 1, NULL);
                ball.left = XPOS(14.33);
                ball.top = YPOS(9.33);
                ball.right = ball.left + 20;
                ball.bottom = ball.top + 20;
                break;
            }
            else {
                MBR = MessageBox(hWnd, L"메인화면으로 다시 가시겠습니까?", L"축하합니다!", MB_YESNO);
                if (MBR == IDYES) {
                    Stop = false;
                    Stop2 = false;
                    Speed1 = 0;
                    Speed2 = 0;
                    K_Left = false;
                    K_Right = false;
                    x = 0;
                    y = 0;
                    ReSet(hWnd);
                    SetTimer(hWnd, 1, 1, NULL);
                    Stage = 99;
                    break;
                }
                else { PostQuitMessage(0); break; }
            }
        }*/

        //사망 판정 dead가 켜지고 코드 한바퀴 돈 후 위쪽 if (dead)
        if (ball.bottom > Dead || ball.left < XPOS(-1)) { //사망 판정
            if (Stage != 99 && Stage != 98) {
                dead = true;
            }
        }

        //0~12(1~13)스테이지일때 스레드 만들기
        if (Stage >= 0 && Stage <= 12) {
            CreateThread(NULL, 0, move_T, (LPVOID)lParam, 0, NULL);
            CreateThread(NULL, 0, move_dart, (LPVOID)lParam, 0, NULL);
            CreateThread(NULL, 0, Flash_th, (LPVOID)lParam, 0, NULL);
        }
    }
    break;
    case WM_COMMAND:
    {
        int wmId = LOWORD(wParam);
        // 메뉴 선택을 구문 분석합니다:
        switch (wmId)
        {
        case IDM_ABOUT:
            DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
            break;
        case IDM_EXIT:
            DestroyWindow(hWnd);
            break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
        }
    }
    break;
    case WM_PAINT:
    {
        //블럭 색상 만들기
        if (Side_Ball) {
            Tr1 = RGB(5, 5, 5);
            InvalidateRect(hWnd, NULL, FALSE);
        }
        else if (Jump_Ball) {
            Tr1 = RGB(0, 255, 0);
            InvalidateRect(hWnd, NULL, FALSE);
        }
        else {
            Tr1 = RGB(246, 240, 8);
            InvalidateRect(hWnd, NULL, FALSE);
        }

        PAINTSTRUCT ps;
        HDC hdc, MemDC, MemDCw;
        HBITMAP BackBit, oldBackBit;
        RECT bufferRT;
        HBRUSH myBrush, osBrush;

        hdc = BeginPaint(hWnd, &ps);
        GetClientRect(hWnd, &bufferRT);

        MemDC = CreateCompatibleDC(hdc); // 메모리 DC 생성
        MemDCw = CreateCompatibleDC(MemDC); //MemDC의 중간단계 HDC
        BackBit = CreateCompatibleBitmap(hdc, bufferRT.right, bufferRT.bottom); // 윈도우 크기에 맞는 비트맵 생성
        oldBackBit = (HBITMAP)SelectObject(MemDC, BackBit); // 생성한 비트맵을 메모리 DC에 선택
        PatBlt(MemDC, 0, 0, bufferRT.right, bufferRT.bottom, WHITENESS); // 메모리 DC를 흰색으로 초기화

        myBrush = CreateSolidBrush(Tr1);
        osBrush = (HBRUSH)SelectObject(MemDC, myBrush);

        //블럭 바둑판
        if (Stage == 11) {
            for (int x = 0; x < X_COUNT; x += 2) { //사각형의 좌측 변 위치 확인용
                MoveToEx(MemDC, XPOS(x), YPOS(0), NULL);
                LineTo(MemDC, XPOS(x), YPOS(Y_COUNT - 1));
            }
            for (int x = 1; x < X_COUNT; x += 2) { //사각형의 우측 변 위치 확인용
                MoveToEx(MemDC, RXPOS(x), BYPOS(0), NULL);
                LineTo(MemDC, RXPOS(x), BYPOS(Y_COUNT - 1));
            }
            for (int y = 0; y < Y_COUNT; y += 2) { //사각형의 상단 변 위치 확인용
                MoveToEx(MemDC, XPOS(0), YPOS(y), NULL);
                LineTo(MemDC, XPOS(X_COUNT - 1), YPOS(y));
            }
            for (int y = 1; y < Y_COUNT; y += 2) { //사각형의 하단 변 위치 확인용
                MoveToEx(MemDC, RXPOS(0), BYPOS(y), NULL);
                LineTo(MemDC, RXPOS(X_COUNT - 1), BYPOS(y));
            }
        }
        
        //메인화면 선택
        if (Stage == 99) {
            MainCheck(MemDC);
        }
        if (Stage == 98) {
            MainSelect(MemDC);
        }
        
        //look 블럭 위치 확인용 확인할려면 해당 블럭 fillrect 주석처리
        if (Stage >= 0 && Stage <= 12) {
            lookWall(MemDC);
            lookJump(MemDC);
            lookStar(MemDC);
            lookBreak(MemDC);
            lookEe(MemDC);
            lookGwL(MemDC);
            lookGwR(MemDC);
            lookMove(MemDC);
            lookTele(MemDC);
            lookTelew(MemDC);
            lookSide(MemDC);
            lookJi(MemDC);
            //lookDt(MemDC);
            lookDt_b(MemDC);
            lookFlash(MemDC);
            lookTb(MemDC);
            lookMove(MemDC);
            lookMoves(MemDC);
        }

        //블럭 이미지 처리
        if (Stage >= 0 && Stage <= 12) {
            Img_Star(MemDC, MemDCw);
            Img_Dart(MemDC, MemDCw);
            Img_Wall(MemDC, MemDCw);
            Img_Jw(MemDC, MemDCw);
            Img_Bb(MemDC, MemDCw);
            Img_Ee(MemDC, MemDCw);
            Img_GwL(MemDC, MemDCw);
            Img_GwR(MemDC, MemDCw);
            Img_Flash(MemDC, MemDCw);
            Img_Throm(MemDC, MemDCw);
            Img_Tele(MemDC, MemDCw);
            Img_Telew(MemDC, MemDCw);
            Img_Sidei(MemDC, MemDCw);
            Img_Jumpi(MemDC, MemDCw);
            Img_Move(MemDC, MemDCw);
            Img_Moves(MemDC, MemDCw);
            Img_EatStar(MemDC, MemDCw);
            Img_B_Break(MemDC, MemDCw);
            Img_Ball(MemDC, MemDCw);
        }
        
        //볼 죽으면 윈도우색상으로
        if (Stage >= 0 && Stage <= 12) {
            Ellipse(MemDC, ball.left, ball.top, ball.right, ball.bottom); //볼
            if (Elect || dead) {
                FillRect(MemDC, &ball, (HBRUSH)(COLOR_WINDOW +1));
            }
        }
        
        //메인화면 이미지
        if (Stage == 99) {
            Img_Main(MemDC, MemDCw);
        }
        if (Stage == 98) {
            Img_Select(MemDC, MemDCw);
        }

        //좌표찾기
        /*if (Stage == 98) {
            wchar_t buf[128] = { 0, };
            wsprintf(buf, L"x : %d // y: %d", x, y);
            TextOut(MemDC, x, y, buf, lstrlenW(buf));
        }*/

        BitBlt(hdc, 0, 0, bufferRT.right, bufferRT.bottom, MemDC, 0, 0, SRCCOPY); //메모리 DC에 그려진 그림을 실제 화면의 DC로 복사

        SelectObject(MemDCw, OldBitmap);
        DeleteDC(MemDCw);
        DeleteObject(MyBitmap);
        SelectObject(MemDC, oldBackBit); //이전에 선택된 비트맵으로 다시 복원
        DeleteObject(BackBit); //우리가 사용한 비트맵 객체를 삭제
        SelectObject(MemDC, osBrush);
        DeleteObject(myBrush);
        DeleteDC(MemDC); //자원 해체

        EndPaint(hWnd, &ps);
    }
    break;
    case WM_DESTROY:
        DelBit();
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// 정보 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}