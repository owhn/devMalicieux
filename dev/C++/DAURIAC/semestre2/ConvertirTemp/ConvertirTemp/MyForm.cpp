#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ConvertirTemp::MyForm form; // MonProjet est le nom de mon projet (à adapter)
	Application::Run(% form);
}