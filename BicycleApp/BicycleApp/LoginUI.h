#pragma once
#include "Login.h"

class LoginUI
{
private:
	Login& LoginCtrl;

public:
	LoginUI(Login& l);
	void show(string ID, string PW);
};