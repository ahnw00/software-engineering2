#pragma once

#include "Common.h"
#include "Member.h"

//Ŭ���� ���� ����
class Member;

class MemberCollection
{
private:
	vector<Member> Members;

public:
	void addMember(string ID, string PW, string PN);
	Member* findMember(string ID, string PW);
};