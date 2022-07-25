#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KeychainProject::LoginForm loginForm;
	//Application::Run(% loginForm);

	loginForm.ShowDialog();

	KeychainProject::MainForm mainForm;
	Application::Run(% mainForm);
}