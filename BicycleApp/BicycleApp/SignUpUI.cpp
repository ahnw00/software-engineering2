#include "SignUpUI.h"

SignUpUI::SignUpUI(SignUp& s) : SignUpCtrl(s) {}

void SignUpUI::Show(string ID, string PW, string PN)
{
	SignUpCtrl.registerMember(ID, PW, PN);
	
	out_fp << "> " << ID << " " << PW << " " << PN << "\n";
}
