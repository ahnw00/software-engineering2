#include "ListRentedUI.h"

ListRentedUI::ListRentedUI(ListRented& l) : listRentedCtrl(l) {}

void ListRentedUI::show()
{
	cout << "자전거 대여 리스트\n";
	listRentedCtrl.execute();
}
