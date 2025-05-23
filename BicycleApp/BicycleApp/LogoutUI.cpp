#include "LogoutUI.h"

LogoutUI::LogoutUI(Logout& l) : logoutCtrl(l) {}

void LogoutUI::show()
{
	cout << "�α׾ƿ�\n";
	logoutCtrl.execute();

	cout << "> " << logoutCtrl.getLogoutedID() << "\n";
}
