#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	cppGraphiqueTest::MyForm form; // MonProjet est le nom de mon projet (� adapter)
	Application::Run(% form);
}