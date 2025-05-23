#pragma once
#include "ListRented.h"

class ListRentedUI
{
private:
	ListRented& listRentedCtrl;

public:
	ListRentedUI(ListRented& l);
	void show();
};