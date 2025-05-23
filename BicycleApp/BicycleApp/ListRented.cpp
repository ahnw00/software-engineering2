#include "ListRented.h"

ListRented::ListRented(SessionManager& s) : session(s) {}

void ListRented::execute()
{
	Member* curMember = session.curMember;
	RentedBicycleCollection rentedList = curMember->getRentedCollection();
	rentedList.listRented();
}
