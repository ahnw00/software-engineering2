#pragma once
#include "RegisterBicycle.h"

class RegisterBicycleUI
{
private:
	RegisterBicycle& regCtrl;

public:
	RegisterBicycleUI(RegisterBicycle& r);
	void show(string bikeID, string bikeName);
};