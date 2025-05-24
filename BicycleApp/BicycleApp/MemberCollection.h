#pragma once

#include "Common.h"
#include "Member.h"

//클래스 전방 선언
class Member;

class MemberCollection
{
private:
	vector<Member> members;

public:
	void addMember(string ID, string PW, string PhoneNumber);
	Member* findMember(string ID, string PW);
};