#include "SignUpUI.h"

SignUpUI::SignUpUI(SignUp& s) : signUpCtrl(s) {}

void SignUpUI::Show(string ID, string PW, string PN)
{
	signUpCtrl.registerMember(ID, PW, PN);
	
	out_fp << "> " << ID << " " << PW << " " << PN << "\n";
}
