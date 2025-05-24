#pragma once
#include "SessionManager.h"

//Ŭ���� ���� ����
class SessionManager;

class Logout
{
private:
	SessionManager& sessionManager;
	Member* logoutedMember;

public:
	Logout(SessionManager& s);
	void execute();
	string getLogoutedID();
};