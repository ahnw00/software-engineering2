#include "LoginUI.h"

LoginUI::LoginUI(Login& l) : loginCtrl(l) {}

void LoginUI::show(string ID, string PW)
{
	loginCtrl.login(ID, PW);

	out_fp << "> " << ID << " " << PW << "\n";
}
