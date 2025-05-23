#include "Rent.h"

Rent::Rent(SessionManager& s, BicycleCollection& b) : sessionManager(s), bikes(b) {}

string Rent::rentBicycle(string bikeID)
{
	Member* curMember = sessionManager.curMember;
	Bicycle* rentedBike = bikes.findBike(bikeID);

	curMember->getRentedCollection().add(rentedBike);

	return rentedBike->getName();
}
