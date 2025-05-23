#pragma once

// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "SignUpUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "RegisterBicycleUI.h"
#include "RentUI.h"
#include "ListRentedUI.h"

class BicycleApp
{
private:
	// 변수 선언
	ifstream in_fp;
	ofstream out_fp;

	SignUpUI& signUpUI;
	LoginUI& loginUI;
	LogoutUI& logoutUI;
	RegisterBicycleUI& registerBicycleUI;
	RentUI& rentUI;
	ListRentedUI& listRentedUI;

public:
	// 생성자
	BicycleApp(SignUpUI& s, LoginUI& li, LogoutUI& lo,
		RegisterBicycleUI& rg, RentUI& rt, ListRentedUI& lr);

	// 함수 선언
	void doTask();
	//void program_exit();

	void join(string ID, string PW, string PN);
	void login(string ID, string PW);
	void logout();
	void registerNewBicycle(string BikeID, string BikeName);
	void rent(string BikeID);
	void listRented();
};