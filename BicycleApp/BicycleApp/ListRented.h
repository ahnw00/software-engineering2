#pragma once
#include "SessionManager.h"

class ListRented
{
private:
	SessionManager& session;

public:
	ListRented(SessionManager& s);
	void execute();
};