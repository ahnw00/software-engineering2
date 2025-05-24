#include "RegisterBicycleUI.h"

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& r) : regCtrl(r) {}

void RegisterBicycleUI::show(string bikeID, string bikeName)
{
	regCtrl.execute(bikeID, bikeName);

	out_fp << "> " << bikeID << " " << bikeName << "\n";
}
