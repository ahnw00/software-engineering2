#pragma once

#include "Common.h"
#include "Bicycle.h"

using namespace std;

//�����ڰ� ������ �� �ִ� ������ �ݷ���
class BicycleCollection
{
private:
	vector<Bicycle> bikes;

public:
	void addBicycle(string ID, string Name);
	Bicycle* findBike(string ID);
};