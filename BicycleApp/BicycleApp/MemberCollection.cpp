#include "MemberCollection.h"
#include "Member.h"

void MemberCollection::addMember(string ID, string PW, string PhoneNumber)
{
	Members.emplace_back(ID, PW, PhoneNumber);
}

Member* MemberCollection::findMember(string ID, string PW)
{
	for (auto& m : Members)
	{
		if (ID == m.getID() && PW == m.getPW())
			return &m;
	}
	return nullptr;
}
