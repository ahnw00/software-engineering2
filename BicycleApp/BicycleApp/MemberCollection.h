#pragma once

#include "Common.h"
#include "Member.h"

//Ŭ���� ���� ����
class Member;

class MemberCollection
{
private:
	vector<Member> members;

public:
	void addMember(string ID, string PW, string PhoneNumber);
	Member* findMember(string ID, string PW);
};