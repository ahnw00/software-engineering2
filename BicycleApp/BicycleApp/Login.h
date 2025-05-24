#pragma once

#include "MemberCollection.h"
#include "SessionManager.h"

//Ŭ���� ���� ����
class MemberCollection;
class SessionManager;

class Login
{
private:
	SessionManager& Session;
	MemberCollection& Members;

public:
	Login(SessionManager& s, MemberCollection& m);

	void login(string ID, string PW);
};