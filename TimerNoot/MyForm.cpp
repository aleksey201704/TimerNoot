#include "MyForm.h"
#include <Windows.h>

using namespace TimerNoot;

using namespace System;
using namespace System::Windows::Forms;

//[STAThread]
void main(/*array<String^>^ arg*/) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    
    TimerNoot::MyForm form; //WinFormsTest - ��� ������ �������
    Application::Run(% form);
}