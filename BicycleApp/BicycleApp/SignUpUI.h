#pragma once

#include "SignUp.h"

class SignUpUI
{
private:
	SignUp signUpCtrl;

public:
	SignUpUI(SignUp& s);
	void Show(string ID, string PW, string PN);
};