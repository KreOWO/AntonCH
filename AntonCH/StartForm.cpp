#include "StartForm.h"

#include "StartForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // ��������� �����
    AntonCH::StartForm form;  // �������� AntonCH �� ���� ������������ ���, ���� ��� ������
    Application::Run(% form);
}