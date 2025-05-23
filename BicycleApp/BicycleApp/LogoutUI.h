#pragma once
#include "Logout.h"

class LogoutUI
{
private:
	Logout& logoutCtrl;

public:
	LogoutUI(Logout& l);
	void show();
};