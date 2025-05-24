#pragma once
#include "RegisterBicycle.h"

class RegisterBicycleUI
{
private:
	RegisterBicycle& RegCtrl;

public:
	RegisterBicycleUI(RegisterBicycle& r);
	void show(string BikeID, string BikeName);
};