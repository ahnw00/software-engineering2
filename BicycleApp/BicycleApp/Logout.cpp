#include "Logout.h"
#include "SessionManager.h"

Logout::Logout(SessionManager& s) : Session(s), LogoutedMember(nullptr) {}

void Logout::execute()
{
	LogoutedMember = Session.CurMember;
	Session.logout();
}

string Logout::getLogoutedID()
{
	return LogoutedMember->getID();
}
