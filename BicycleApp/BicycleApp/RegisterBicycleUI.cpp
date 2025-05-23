#include "RegisterBicycleUI.h"

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& r) : regCtrl(r) {}

void RegisterBicycleUI::show(string bikeID, string bikeName)
{
	cout << "자전거 대여\n";
	regCtrl.execute(bikeID, bikeName);

	cout << "> " << bikeID << " " << bikeName << "\n";
}
