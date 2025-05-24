#pragma once

#include "SessionManager.h"
#include "BicycleCollection.h"

//클래스 전방 선언
class SessionManager;

class Rent
{
private:
	SessionManager& Session;
	BicycleCollection& Bikes;

public:
	Rent(SessionManager& s, BicycleCollection& b);
	string rentBicycle(string BikeID);
};