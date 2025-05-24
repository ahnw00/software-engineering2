#include "RentUI.h"

RentUI::RentUI(Rent& r) : RentCtrl(r) {}

void RentUI::show(string bikeID)
{
	string RentedBikeName = RentCtrl.rentBicycle(bikeID);

	out_fp << "> " << bikeID << " " << RentedBikeName << "\n";
}
