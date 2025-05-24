#include "RentedBicycleCollection.h"
#include "Bicycle.h"

void RentedBicycleCollection::add(Bicycle* bike)
{
	Rented.push_back(bike);
}

void RentedBicycleCollection::listRented() const
{
	vector<Bicycle*> sorted = Rented;
	sort(sorted.begin(), sorted.end());
	for (const auto& rentedBicycle : sorted)
	{
		out_fp << "> " << rentedBicycle->getID() << " " << rentedBicycle->getName();
		out_fp << "\n";
	}
}