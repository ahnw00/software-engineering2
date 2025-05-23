#include "BicycleApp.h"

BicycleApp::BicycleApp(SignUpUI& s, LoginUI& li, LogoutUI& lo, RegisterBicycleUI& rg, RentUI& rt, ListRentedUI& lr)
    : signUpUI(s), loginUI(li), logoutUI(lo), registerBicycleUI(rg), rentUI(rt), listRentedUI(lr) {}

void BicycleApp::doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;
        printOut(menu_level_1, menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입" 메뉴 부분
            {
                // 해당 기능 수행 
                string ID, PW, PN;
                in_fp >> ID >> PW >> PN;
                
                cout << "회원가입\n";
                join(ID, PW, PN);
                break;
            }
            }
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:    // "2.1. 로그인" 메뉴 부분
            {
                string ID, PW;
                in_fp >> ID >> PW;

                cout << "로그인\n";
                login(ID, PW);
                break;
            }
            case 2:    // "2.2. 로그아웃" 메뉴 부분
            {
                cout << "로그아웃\n";
                logout();
                break;
            }
            }
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:    // "3.1. 자전거 등록" 메뉴 부분
            {
                string BikeID, BikeName;

                cout << "자전거 등록\n";
                registerNewBicycle(BikeID, BikeName);
                break;
            }
            }
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:    // "4.1. 자전거 대여" 메뉴 부분
            {
                string BikeID;

                cout << "자전거 대여\n";
                rent(BikeID);
                break;
            }
            }
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:    // "5.1. 자전거 대여 리스트" 메뉴 부분
            {
                cout << "자전거 대여 리스트\n";
                listRented();
                break;
            }
            }
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료“ 메뉴 부분
            {
                is_program_exit = 1;
                cout << "종료\n";
                break;
            }
            }
        }
        }
    }
}

void BicycleApp::join(string ID, string PW, string PN)
{
    signUpUI.Show(ID, PW, PN);
}

void BicycleApp::login(string ID, string PW)
{
    loginUI.show(ID, PW);
}

void BicycleApp::logout()
{
    logoutUI.show();
}

void BicycleApp::registerNewBicycle(string BikeID, string BikeName)
{
    registerBicycleUI.show(BikeID, BikeName);
}

void BicycleApp::rent(string BikeID)
{
    rentUI.show(BikeID);
}

void BicycleApp::listRented()
{
    listRentedUI.show();
}

void printOut(int menu1, int menu2)
{
    cout << menu1 << "." << menu2 << ". ";
}
