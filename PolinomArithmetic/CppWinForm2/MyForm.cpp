#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CppWinForm2::MyForm form;
	Application::Run(%form);
}
