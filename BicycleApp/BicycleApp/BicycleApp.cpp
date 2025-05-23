#include "BicycleApp.h"

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
        printOut(menu_level_1, menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ������" �޴� �κ�
            {
                // �ش� ��� ���� 
                string ID, PW, PN;
                in_fp >> ID >> PW >> PN;
                
                cout << "ȸ������\n";
                join(ID, PW, PN);
                break;
            }
            }
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:    // "2.1. �α���" �޴� �κ�
            {
                string ID, PW;
                in_fp >> ID >> PW;

                cout << "�α���\n";
                login(ID, PW);
                break;
            }
            case 2:    // "2.2. �α׾ƿ�" �޴� �κ�
            {
                cout << "�α׾ƿ�\n";
                logout();
                break;
            }
            }
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:    // "3.1. ������ ���" �޴� �κ�
            {
                string BikeID, BikeName;

                cout << "������ ���\n";
                registerNewBicycle(BikeID, BikeName);
                break;
            }
            }
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:    // "4.1. ������ �뿩" �޴� �κ�
            {
                string BikeID;

                cout << "������ �뿩\n";
                rent(BikeID);
                break;
            }
            }
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:    // "5.1. ������ �뿩 ����Ʈ" �޴� �κ�
            {
                cout << "������ �뿩 ����Ʈ\n";
                listRented();
                break;
            }
            }
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
            {
                is_program_exit = 1;
                cout << "����\n";
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
