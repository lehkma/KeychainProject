#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KeychainProject::LoginForm form;
	Application::Run(% form);
}

