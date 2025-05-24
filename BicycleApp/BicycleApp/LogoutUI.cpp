#include "LogoutUI.h"
#include "Logout.h"

LogoutUI::LogoutUI(Logout& l) : LogoutCtrl(l) {}

void LogoutUI::show()
{
	LogoutCtrl.execute();

	out_fp << "> " << LogoutCtrl.getLogoutedID() << "\n";
}
