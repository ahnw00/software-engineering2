#pragma once

#include "MemberCollection.h"
#include "SessionManager.h"

class Login
{
private:
	SessionManager& sessionManager;
	MemberCollection& members;

public:
	Login(SessionManager& s, MemberCollection& m);

	void login(string ID, string PW);
};