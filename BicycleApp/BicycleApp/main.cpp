#include "Common.h"
#include "BicycleApp.h"

using namespace std;

int main()
{
	SessionManager session;

	MemberCollection members;
	BicycleCollection bikes;

	SignUp signUp(members);
	Login login(session, members);
	Logout logout(session);
	RegisterBicycle registerBicycle(bikes);
	Rent rent(session, bikes);
	ListRented listRented(session);

	SignUpUI signUpUI(signUp);
	LoginUI loginUI(login);
	LogoutUI logoutUI(logout);
	RegisterBicycleUI registerBicycleUI(registerBicycle);
	RentUI rentUI(rent);
	ListRentedUI listRentedUI(listRented);

	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	members.addMember("admin", "admin", "");

	BicycleApp app(signUpUI, loginUI, logoutUI, registerBicycleUI, rentUI, listRentedUI);
	app.doTask();

	in_fp.close();
	out_fp.close();

	return 0;
}