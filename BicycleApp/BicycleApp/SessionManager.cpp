#include "SessionManager.h"

void SessionManager::login(Member* m)
{
	CurMember = m;
}

void SessionManager::logout()
{
	CurMember = nullptr;
}
