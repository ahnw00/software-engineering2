#include "RentUI.h"

RentUI::RentUI(Rent& r) : rentCtrl(r) {}

void RentUI::show(string bikeID)
{
	string RentedBikeName = rentCtrl.rentBicycle(bikeID);

	out_fp << "> " << bikeID << " " << RentedBikeName << "\n";
}
