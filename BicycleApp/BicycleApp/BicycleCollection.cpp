#include "BicycleCollection.h"

void BicycleCollection::addBicycle(string ID, string Name)
{
	Bikes.emplace_back(ID, Name);
}

Bicycle* BicycleCollection::findBike(string ID)
{
	for (auto& bike : Bikes)
	{
		if (ID == bike.getID())
		{
			return &bike;
		}
	}
	return nullptr;
}
