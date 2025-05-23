#pragma once

#include "Common.h"
#include "Member.h"

class MemberCollection
{
private:
	vector<Member> members = { Member("admin", "admin", "") };

public:
	void addMember(string ID, string PW, string PhoneNumber);
	Member* findMember(string ID, string PW);
};