#pragma once
#include "BicycleCollection.h"

class RegisterBicycle
{
private:
	BicycleCollection& bikes;

public:
	RegisterBicycle(BicycleCollection& b);
	void execute(string bikeID, string bikeName);
};