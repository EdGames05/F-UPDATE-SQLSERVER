#include "MainForm.h"

using namespace System;

// Esto deshabilita la depuraci�n cuando la aplicaci�n se despliega en Release
[assembly:System::Diagnostics::DebuggableAttribute(true, true)];
[STAThreadAttribute]
int WinMain()
{
	System::Windows::Forms::Application::Run(gcnew FUPDATESQLSERVER::MainForm);
	return 0;
}