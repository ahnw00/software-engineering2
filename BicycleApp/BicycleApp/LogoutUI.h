#pragma once
#include "Logout.h"

//Ŭ���� ���� ����
class Logout;

class LogoutUI
{
private:
	Logout& logoutCtrl;

public:
	LogoutUI(Logout& l);
	void show();
};