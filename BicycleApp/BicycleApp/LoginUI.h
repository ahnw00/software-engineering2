#pragma once
#include "Login.h"

class LoginUI
{
private:
	Login& loginCtrl;

public:
	LoginUI(Login& l);
	void show(string ID, string PW);
};