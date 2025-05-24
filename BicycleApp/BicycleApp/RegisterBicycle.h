#pragma once
#include "BicycleCollection.h"

//클래스 전방 선언
class BicycleCollection;

class RegisterBicycle
{
private:
	BicycleCollection& Bikes;

public:
	RegisterBicycle(BicycleCollection& b);
	void execute(string BikeID, string BikeName);
};