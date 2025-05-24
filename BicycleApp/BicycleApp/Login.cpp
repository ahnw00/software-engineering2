#include "Login.h"
#include "MemberCollection.h"
#include "SessionManager.h"

Login::Login(SessionManager& s, MemberCollection& m) : sessionManager(s), members(m) {}

void Login::login(string ID, string PW)
{
	Member* loginedMember = members.findMember(ID, PW);
	sessionManager.login(loginedMember);
}
