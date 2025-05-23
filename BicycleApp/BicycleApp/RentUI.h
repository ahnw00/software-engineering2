#pragma once

#include "Rent.h"

class RentUI
{
private:
	Rent rentCtrl;

public:
	RentUI(Rent& r);
	void show(string bikeID);
};