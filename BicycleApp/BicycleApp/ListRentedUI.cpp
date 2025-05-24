#include "ListRentedUI.h"
#include "ListRented.h"

ListRentedUI::ListRentedUI(ListRented& l) : listRentedCtrl(l) {}

void ListRentedUI::show()
{
	listRentedCtrl.execute();
}
