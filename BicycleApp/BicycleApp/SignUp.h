#pragma once

#include "MemberCollection.h"

//Ŭ���� ���� ����
class MemberCollection;

class SignUp
{
private:
	MemberCollection& Members;

public:
	SignUp(MemberCollection& members);
	void registerMember(string ID, string PW, string PhoneNumber);
};