#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(cli::array<System::String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	KeychainProject::LoginForm loginForm;
	Application::Run(% loginForm);

	return 0;
}