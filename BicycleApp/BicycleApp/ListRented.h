#pragma once
#include "SessionManager.h"

class ListRented
{
private:
	SessionManager& Session;

public:
	ListRented(SessionManager& s);
	void execute();
};