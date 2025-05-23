#include "BicycleCollection.h"

void BicycleCollection::addBicycle(string ID, string Name)
{
	bikes.emplace_back(ID, Name);
}

Bicycle* BicycleCollection::findBike(string ID)
{
	for (auto& bike : bikes)
	{
		if (ID == bike.getID())
		{
			return &bike;
		}
	}
	return nullptr;
}
