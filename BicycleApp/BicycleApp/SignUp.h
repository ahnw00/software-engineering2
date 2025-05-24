#pragma once

#include "MemberCollection.h"

//클래스 전방 선언
class MemberCollection;

class SignUp
{
private:
	MemberCollection& Members;

public:
	SignUp(MemberCollection& members);
	void registerMember(string ID, string PW, string PhoneNumber);
};