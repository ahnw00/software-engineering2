#pragma once

#include "Rent.h"

class RentUI
{
private:
	Rent RentCtrl;

public:
	RentUI(Rent& r);
	void show(string BikeID);
};