#include "RegisterBicycle.h"
#include "BicycleCollection.h"

RegisterBicycle::RegisterBicycle(BicycleCollection& b) : Bikes(b) {}

void RegisterBicycle::execute(string bikeID, string bikeName)
{
	Bikes.addBicycle(bikeID, bikeName);
}
