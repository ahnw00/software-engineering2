#pragma once

#include "Common.h"
#include "Bicycle.h"

using namespace std;

//관리자가 접근할 수 있는 자전거 콜렉션
class BicycleCollection
{
private:
	vector<Bicycle> bikes;

public:
	void addBicycle(string ID, string Name);
	Bicycle* findBike(string ID);
};