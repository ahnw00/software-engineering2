#include "ListRentedUI.h"

ListRentedUI::ListRentedUI(ListRented& l) : listRentedCtrl(l) {}

void ListRentedUI::show()
{
	cout << "������ �뿩 ����Ʈ\n";
	listRentedCtrl.execute();
}
