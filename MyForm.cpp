#include "MyForm.h"
#include <dos.h>
#include <stdio.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main() {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	KeyMaster::MyForm form;

	Application::Run(% form);

}
