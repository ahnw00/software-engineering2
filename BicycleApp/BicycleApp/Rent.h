#pragma once

#include "SessionManager.h"
#include "BicycleCollection.h"

//Ŭ���� ���� ����
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