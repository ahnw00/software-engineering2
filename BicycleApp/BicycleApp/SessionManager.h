#pragma once
#include "Member.h"

class SessionManager
{
public:
	Member* CurMember = nullptr;

	void login(Member* m);
	void logout();
};