#pragma once

#include "Common.h"
#include "Bicycle.h"

using namespace std;

//Member가 렌트한 자전거를 저장해두는 Collection Class
class RentedBicycleCollection
{
private:
	vector<Bicycle*> Rented;

public:
	void add(Bicycle* bike);
	void listRented() const;
};