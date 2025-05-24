#include "LogoutUI.h"
#include "Logout.h"

LogoutUI::LogoutUI(Logout& l) : logoutCtrl(l) {}

void LogoutUI::show()
{
	logoutCtrl.execute();

	out_fp << "> " << logoutCtrl.getLogoutedID() << "\n";
}
