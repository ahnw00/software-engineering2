#pragma once
#include "SessionManager.h"

//Ŭ���� ���� ����
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