#pragma once
#include "BicycleCollection.h"

//Ŭ���� ���� ����
class BicycleCollection;

class RegisterBicycle
{
private:
	BicycleCollection& bikes;

public:
	RegisterBicycle(BicycleCollection& b);
	void execute(string bikeID, string bikeName);
};