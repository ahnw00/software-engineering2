#include "Member.h"

Member::Member(string ID, string PW, string PhoneNumber)
	: ID(ID), PW(PW), PhoneNumber(PhoneNumber) {}

string Member::getID() const
{
	return ID;
}

string Member::getPW() const
{
	return PW;
}

RentedBicycleCollection& Member::getRentedCollection()
{
	return rentedBicycles;
}
