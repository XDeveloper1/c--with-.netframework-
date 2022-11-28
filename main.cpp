
#include "loginform.h"

#include "registerfrom.h"
using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	sca::loginform loginfrom;
	
	User^ user = nullptr;
	
	while (true) {
		sca::loginform lf;
		lf.ShowDialog();

		if (lf.switchtoregister) 
		{
			sca::registerfrom rf;
			rf.ShowDialog();
			if (rf.switchtologin) 
			{
				continue;
			}
			else
			{
				user = rf.user;
				break;
			}
		}
		else {
			user = lf.user;
			break;
		}
	}

	
	
}