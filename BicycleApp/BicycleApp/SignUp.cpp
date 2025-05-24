#include "SignUp.h"
#include "MemberCollection.h"

SignUp::SignUp(MemberCollection& members) : Members(members) {}

void SignUp::registerMember(string ID, string PW, string PhoneNumber)
{
	Members.addMember(ID, PW, PhoneNumber);
}
