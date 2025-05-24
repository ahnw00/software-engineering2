#include "ListRentedUI.h"
#include "ListRented.h"

ListRentedUI::ListRentedUI(ListRented& l) : ListRentedCtrl(l) {}

void ListRentedUI::show()
{
	ListRentedCtrl.execute();
}
