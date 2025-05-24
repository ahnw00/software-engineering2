#include "LoginUI.h"

LoginUI::LoginUI(Login& l) : LoginCtrl(l) {}

void LoginUI::show(string ID, string PW)
{
	LoginCtrl.login(ID, PW);

	out_fp << "> " << ID << " " << PW << "\n";
}
