#pragma once

#include "MemberCollection.h"
#include "SessionManager.h"

//클래스 전방 선언
class MemberCollection;
class SessionManager;

class Login
{
private:
	SessionManager& sessionManager;
	MemberCollection& members;

public:
	Login(SessionManager& s, MemberCollection& m);

	void login(string ID, string PW);
};