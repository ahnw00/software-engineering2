#include "SignUp.h"
#include "MemberCollection.h"

SignUp::SignUp(MemberCollection& members) : memberCollection(members) {}

void SignUp::registerMember(string ID, string PW, string PhoneNumber)
{
	memberCollection.addMember(ID, PW, PhoneNumber);
}
