//KeyChain Project
//Martina Lehka, II. rocnik MOMP MFF UK
//ZS 2021/2
//Programovani 3

#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(cli::array<System::String^>^ args)
{
	//create a data folder
	_mkdir("C:\\Keychain_Data");
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	KeychainProject::LoginForm loginForm;
	Application::Run(% loginForm);

	return 0;
}