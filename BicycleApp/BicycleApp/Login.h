#pragma once

#include "MemberCollection.h"
#include "SessionManager.h"

//Ŭ���� ���� ����
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