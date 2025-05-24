#pragma once

#include "Common.h"
#include "Member.h"

//클래스 전방 선언
class Member;

class MemberCollection
{
private:
	vector<Member> Members;

public:
	void addMember(string ID, string PW, string PN);
	Member* findMember(string ID, string PW);
};