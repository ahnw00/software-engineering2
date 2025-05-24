#pragma once
#include "Logout.h"

//클래스 전방 선언
class Logout;

class LogoutUI
{
private:
	Logout& logoutCtrl;

public:
	LogoutUI(Logout& l);
	void show();
};