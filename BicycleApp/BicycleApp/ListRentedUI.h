#pragma once
#include "ListRented.h"

//클래스 전방 선언
class ListRented;

class ListRentedUI
{
private:
	ListRented& ListRentedCtrl;

public:
	ListRentedUI(ListRented& l);
	void show();
};