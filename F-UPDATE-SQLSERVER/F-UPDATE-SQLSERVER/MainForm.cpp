#include "MainForm.h"

using namespace System;

[STAThreadAttribute]
int WinMain()
{
	System::Windows::Forms::Application::Run(gcnew FUPDATESQLSERVER::MainForm);
	return 0;
}