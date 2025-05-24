#include "RegisterBicycleUI.h"

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& r) : RegCtrl(r) {}

void RegisterBicycleUI::show(string bikeID, string bikeName)
{
	RegCtrl.execute(bikeID, bikeName);

	out_fp << "> " << bikeID << " " << bikeName << "\n";
}
