#pragma once
#include "Logout.h"

//Ŭ���� ���� ����
class Logout;

class LogoutUI
{
private:
	Logout& LogoutCtrl;

public:
	LogoutUI(Logout& l);
	void show();
};