#include "RegisterBicycle.h"

RegisterBicycle::RegisterBicycle(BicycleCollection& b) : bikes(b) {}

void RegisterBicycle::execute(string bikeID, string bikeName)
{
	bikes.addBicycle(bikeID, bikeName);
}
