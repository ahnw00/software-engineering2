#include "SessionManager.h"

void SessionManager::login(Member* m)
{
	curMember = m;
}

void SessionManager::logout()
{
	curMember = nullptr;
}
