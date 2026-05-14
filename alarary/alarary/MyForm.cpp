#include "MyForm.h"
#include <Windows.h>
#include <string>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main1(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew alarary::MyForm);
}