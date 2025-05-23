#pragma once

#include "MemberCollection.h"

class SignUp
{
private:
	MemberCollection& memberCollection;

public:
	SignUp(MemberCollection& members);
	void registerMember(string ID, string PW, string PhoneNumber);
};