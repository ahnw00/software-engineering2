#include "RentedBicycleCollection.h"

void RentedBicycleCollection::add(Bicycle* bike)
{
	Rented.push_back(bike);
}

void RentedBicycleCollection::listRented() const
{
	for (const auto& rentedBicycle : Rented)
	{
		cout << "> " << rentedBicycle->getID() << " " << rentedBicycle->getName();
		cout << "\n";
	}
}
