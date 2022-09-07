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