#include "MemberCollection.h"
#include "Member.h"

void MemberCollection::addMember(string ID, string PW, string PhoneNumber)
{
	members.emplace_back(ID, PW, PhoneNumber);
}

Member* MemberCollection::findMember(string ID, string PW)
{
	for (auto& m : members)
	{
		if (ID == m.getID() && PW == m.getPW())
			return &m;
	}
	return nullptr;
}
