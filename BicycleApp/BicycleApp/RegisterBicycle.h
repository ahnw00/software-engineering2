#pragma once
#include "BicycleCollection.h"

//클래스 전방 선언
class BicycleCollection;

class RegisterBicycle
{
private:
	BicycleCollection& bikes;

public:
	RegisterBicycle(BicycleCollection& b);
	void execute(string bikeID, string bikeName);
};