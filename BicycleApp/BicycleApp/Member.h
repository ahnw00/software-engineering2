#pragma once

#include <string>

#include "RentedBicycleCollection.h"

using namespace std;

class Member 
{
private:
	string ID;
	string PW;
	string PhoneNumber;
	RentedBicycleCollection rentedBicycles;

public:
	Member(string ID, string PW, string PhoneNumber);

	string getID() const;
	string getPW() const;

	RentedBicycleCollection& getRentedCollection();
};