#include "ListRented.h"

ListRented::ListRented(SessionManager& s) : Session(s) {}

void ListRented::execute()
{
	Member* curMember = Session.CurMember;
	RentedBicycleCollection rentedList = curMember->getRentedCollection();
	rentedList.listRented();
}
