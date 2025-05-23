#pragma once
#include "Member.h"

class SessionManager
{
public:
	Member* curMember = nullptr;

	void login(Member* m);
	void logout();
};