#pragma once

#include "SessionManager.h"
#include "BicycleCollection.h"

//Ŭ���� ���� ����
class SessionManager;

class Rent
{
private:
	SessionManager& sessionManager;
	BicycleCollection& bikes;

public:
	Rent(SessionManager& s, BicycleCollection& b);
	string rentBicycle(string bikeID);
};