#include "Logout.h"

Logout::Logout(SessionManager& s) : sessionManager(s), logoutedMember(nullptr) {}

void Logout::execute()
{
	logoutedMember = sessionManager.curMember;
	sessionManager.logout();
}

string Logout::getLogoutedID()
{
	return logoutedMember->getID();
}
