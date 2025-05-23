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
