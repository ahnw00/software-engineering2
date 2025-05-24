#include "Login.h"
#include "MemberCollection.h"
#include "SessionManager.h"

Login::Login(SessionManager& s, MemberCollection& m) : Session(s), Members(m) {}

void Login::login(string ID, string PW)
{
	Member* loginedMember = Members.findMember(ID, PW);
	Session.login(loginedMember);
}
