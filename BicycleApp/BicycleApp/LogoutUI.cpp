#include "LogoutUI.h"

LogoutUI::LogoutUI(Logout& l) : logoutCtrl(l) {}

void LogoutUI::show()
{
	cout << "·Î±×¾Æ¿ô\n";
	logoutCtrl.execute();

	cout << "> " << logoutCtrl.getLogoutedID() << "\n";
}
