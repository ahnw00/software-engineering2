#pragma once

#include "Common.h"

using namespace std;

class Bicycle
{
private:
	string BicycleID;
	string BicycleName;

public:
	Bicycle(string ID, string Name);
	
	string getID() const;
	string getName() const;
};