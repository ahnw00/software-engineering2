#include "Rent.h"
#include "SessionManager.h"

Rent::Rent(SessionManager& s, BicycleCollection& b) : Session(s), Bikes(b) {}

string Rent::rentBicycle(string bikeID)
{
	Member* curMember = Session.CurMember;
	Bicycle* rentedBike = Bikes.findBike(bikeID);

	curMember->getRentedCollection().add(rentedBike);

	return rentedBike->getName();
}
