#pragma once
#include "ListRented.h"

//Ŭ���� ���� ����
class ListRented;

class ListRentedUI
{
private:
	ListRented& ListRentedCtrl;

public:
	ListRentedUI(ListRented& l);
	void show();
};