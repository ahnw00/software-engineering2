#include "Bicycle.h"

Bicycle::Bicycle(string ID, string Name)
	: BicycleID(ID), BicycleName(Name) {}

string Bicycle::getID() const
{
	return BicycleID;
}

string Bicycle::getName() const
{
	return BicycleName;
}

bool Bicycle::operator<(const Bicycle& other) const 
{
	if (getID() < other.getID()) return true;
	if (getID() == other.getID()) return getName() < other.getName();
	return false;
}
