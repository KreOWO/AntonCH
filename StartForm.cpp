#include "StartForm.h"

#include "StartForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Запустите форму
    AntonCH::StartForm form;  // Замените AntonCH на ваше пространство имён, если оно другое
    Application::Run(% form);
}