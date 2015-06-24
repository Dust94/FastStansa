#include "AcessFormh.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	StansaGUI::AcessFormh myForm;
	Application::Run(%myForm);
}