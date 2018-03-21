#include "QintC.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	//Code khởi chạy giao diện windows form
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	QIntCalculator::QintC form;
	Application::Run(%form);
	//Không đụng tới

}
