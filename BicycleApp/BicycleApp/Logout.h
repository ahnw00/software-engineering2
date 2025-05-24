#pragma once
#include "SessionManager.h"

//클래스 전방 선언
class SessionManager;

class Logout
{
private:
	SessionManager& Session;
	Member* LogoutedMember;

public:
	Logout(SessionManager& s);
	void execute();
	string getLogoutedID();
};