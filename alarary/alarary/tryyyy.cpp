#include "tryyyy.h"
#include <Windows.h>
#include <string>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
[STAThread]
void main (array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew alarary::tryyyy);
    
}
