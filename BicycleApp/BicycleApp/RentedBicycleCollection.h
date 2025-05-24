#pragma once

#include <algorithm>

#include "Common.h"
#include "Bicycle.h"

using namespace std;

//Ŭ���� ���� ����
class Bicycle;

//Member�� ��Ʈ�� �����Ÿ� �����صδ� Collection Class
class RentedBicycleCollection
{
private:
	vector<Bicycle*> Rented;

public:
	void add(Bicycle* bike);
	void listRented() const;
};