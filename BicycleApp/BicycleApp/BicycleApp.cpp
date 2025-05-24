#include "BicycleApp.h"
#include "Common.h"

BicycleApp::BicycleApp(SignUpUI& s, LoginUI& li, LogoutUI& lo, RegisterBicycleUI& rg, RentUI& rt, ListRentedUI& lr)
    : signUpUI(s), loginUI(li), logoutUI(lo), registerBicycleUI(rg), rentUI(rt), listRentedUI(lr) {}

void BicycleApp::doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ������" �޴� �κ�
            {
                // �ش� ��� ���� 
                string ID, PW, PN;
                in_fp >> ID >> PW >> PN;
                
                printOut(menu_level_1, menu_level_2);
                out_fp << "ȸ������\n";
                join(ID, PW, PN);
                break;
            }
            }
            break;
        
        case 2:
            switch (menu_level_2)
            {
            case 1:    // "2.1. �α���" �޴� �κ�
            {
                string ID, PW;
                in_fp >> ID >> PW;

                printOut(menu_level_1, menu_level_2);
                out_fp << "�α���\n";
                login(ID, PW);
                break;
            }
            case 2:    // "2.2. �α׾ƿ�" �޴� �κ�
            {
                printOut(menu_level_1, menu_level_2);
                out_fp << "�α׾ƿ�\n";
                logout();
                break;
            }
            }
            break;
        
        case 3:
            switch (menu_level_2)
            {
            case 1:    // "3.1. ������ ���" �޴� �κ�
            {
                string BikeID, BikeName;
                in_fp >> BikeID >> BikeName;

                printOut(menu_level_1, menu_level_2);
                out_fp << "������ ���\n";
                registerNewBicycle(BikeID, BikeName);
                break;
            }
            }
            break;
        
        case 4:
            switch (menu_level_2)
            {
            case 1:    // "4.1. ������ �뿩" �޴� �κ�
            {
                string BikeID;
                in_fp >> BikeID;

                printOut(menu_level_1, menu_level_2);
                out_fp << "������ �뿩\n";
                rent(BikeID);
                break;
            }
            }
            break;
        
        case 5:
            switch (menu_level_2)
            {
            case 1:    // "5.1. ������ �뿩 ����Ʈ" �޴� �κ�
            {
                printOut(menu_level_1, menu_level_2);
                out_fp << "������ �뿩 ����Ʈ\n";
                listRented();
                break;
            }
            }
            break;
        
        case 6:
            switch (menu_level_2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
            {
                is_program_exit = 1;
                printOut(menu_level_1, menu_level_2);
                out_fp << "����\n";
                break;
            }
            }
            break;
        
        }
        out_fp << "\n";
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

void BicycleApp::printOut(int menu1, int menu2)
{
    out_fp << menu1 << "." << menu2 << ". ";
}