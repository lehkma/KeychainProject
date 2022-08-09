#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	KeychainProject::LoginForm loginForm;
	loginForm.ShowDialog();
	User^ usr = loginForm.usr;

	if (usr != nullptr) {
		KeychainProject::MainForm mainForm(usr);
		Application::Run(% mainForm);
	}

	return 0;
}