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

	//연산자 오버로딩
	bool operator<(const Bicycle& other) const;
};