#pragma once
#include "ListRented.h"

//Ŭ���� ���� ����
class ListRented;

class ListRentedUI
{
private:
	ListRented& listRentedCtrl;

public:
	ListRentedUI(ListRented& l);
	void show();
};