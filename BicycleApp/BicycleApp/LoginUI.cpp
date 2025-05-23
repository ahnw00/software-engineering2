#include "LoginUI.h"

LoginUI::LoginUI(Login& l) : loginCtrl(l) {}

void LoginUI::show(string ID, string PW)
{
	cout << "·Î±×ÀÎ\n";
	loginCtrl.login(ID, PW);

	cout << "> " << ID << " " << PW << "\n";
}
