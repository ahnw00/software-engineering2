#pragma once
#include "BicycleCollection.h"

//Ŭ���� ���� ����
class BicycleCollection;

class RegisterBicycle
{
private:
	BicycleCollection& Bikes;

public:
	RegisterBicycle(BicycleCollection& b);
	void execute(string BikeID, string BikeName);
};