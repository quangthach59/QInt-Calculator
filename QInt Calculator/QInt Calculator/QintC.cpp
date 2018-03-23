#include "QintC.h"
using namespace QIntCalculator;
[STAThreadAttribute]
void Main()
{
	//Code khởi chạy giao diện windows form
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	QIntCalculator::QintC form;
	Application::Run(%form);
	//Không đụng tới
}
#pragma region "Thao tác với controls"
System::Void QintC::btnA_Click(Object^  sender, EventArgs^  e) {
	if (btnA->Enabled == true) AddToInput("A");
}
System::Void QintC::btnB_Click(Object^  sender, EventArgs^  e) {
	if (btnB->Enabled == true) AddToInput("B");
}
System::Void QintC::btnC_Click(Object^  sender, EventArgs^  e) {
	if (btnC->Enabled == true) AddToInput("C");
}
System::Void QintC::btnD_Click(Object^  sender, EventArgs^  e) {
	if (btnD->Enabled == true) AddToInput("D");
}
System::Void QintC::btnE_Click(Object^  sender, EventArgs^  e) {
	if (btnE->Enabled == true) AddToInput("E");
}
System::Void QintC::btnF_Click(Object^  sender, EventArgs^  e) {
	if (btnF->Enabled == true) AddToInput("F");
}
System::Void QintC::btn0_Click(Object^  sender, EventArgs^  e) {
	AddToInput("0");
}
System::Void QintC::btn1_Click(Object^  sender, EventArgs^  e) {
	AddToInput("1");
}
System::Void QintC::btn2_Click(Object^  sender, EventArgs^  e) {
	if (btn2->Enabled == true) AddToInput("2");
}
System::Void QintC::btn3_Click(Object^  sender, EventArgs^  e) {
	if (btn3->Enabled == true) AddToInput("3");
}
System::Void QintC::btn4_Click(Object^  sender, EventArgs^  e) {
	if (btn4->Enabled == true) AddToInput("4");
}
System::Void QintC::btn5_Click(Object^  sender, EventArgs^  e) {
	if (btn5->Enabled == true) AddToInput("5");
}
System::Void QintC::btn6_Click(Object^  sender, EventArgs^  e) {
	if (btn6->Enabled == true) AddToInput("6");
}
System::Void QintC::btn7_Click(Object^  sender, EventArgs^  e) {
	if (btn7->Enabled == true) AddToInput("7");
}
System::Void QintC::btn8_Click(Object^  sender, EventArgs^  e) {
	if (btn8->Enabled == true) AddToInput("8");
}
System::Void QintC::btn9_Click(Object^  sender, EventArgs^  e) {
	if (btn9->Enabled == true) AddToInput("9");
}
System::Void QintC::btnAdd_Click(Object^  sender, EventArgs^  e) {
	AddToInput("+");
}
System::Void QintC::btnSubtract_Click(Object^  sender, EventArgs^  e) {
	AddToInput("-");
}
System::Void QintC::btnMultiply_Click(Object^  sender, EventArgs^  e) {
	AddToInput("*");
}
System::Void QintC::btnDivide_Click(Object^  sender, EventArgs^  e) {
	AddToInput("/");
}
System::Void QintC::btnAnd_Click(Object^  sender, EventArgs^  e) {
	if (btnAnd->Enabled == true) AddToInput("&");
}
System::Void QintC::btnOr_Click(Object^  sender, EventArgs^  e) {
	if (btnOr->Enabled == true) AddToInput("|");
}
System::Void QintC::btnXor_Click(Object^  sender, EventArgs^  e) {
	if (btnXor->Enabled == true) AddToInput("^");
}
System::Void QintC::btnNot_Click(Object^  sender, EventArgs^  e) {
	if (btnNot->Enabled == true) AddToInput("~");
}
System::Void QintC::btnClear_Click(Object^  sender, EventArgs^  e) {
	instance->tbInput->Clear();
	instance->tbOutput->Clear();
}
System::Void QintC::btnDel_Click(Object^  sender, EventArgs^  e) {
	int pos = instance->tbInput->SelectionStart;
	if (pos > 0)
	{
		instance->tbInput->Text = instance->tbInput->Text->Substring(0, pos - 1) + instance->tbInput->Text->Substring(pos);
		instance->tbInput->SelectionStart = pos - 1;
	}
}
System::Void QintC::rbHEX_CheckedChanged(Object^  sender, EventArgs^  e) {
	btnClear_Click(sender, e);
	btnA->Enabled = true;
	btnB->Enabled = true;
	btnC->Enabled = true;
	btnD->Enabled = true;
	btnE->Enabled = true;
	btnF->Enabled = true;
	btnSLeft->Enabled = false;
	btnSRight->Enabled = false;
	btnAnd->Enabled = false;
	btnOr->Enabled = false;
	btnXor->Enabled = false;
	btnNot->Enabled = false;
	btn2->Enabled = true;
	btn3->Enabled = true;
	btn4->Enabled = true;
	btn5->Enabled = true;
	btn6->Enabled = true;
	btn7->Enabled = true;
	btn8->Enabled = true;
	btn9->Enabled = true;
}
System::Void QintC::rbDEC_CheckedChanged(Object^  sender, EventArgs^  e) {
	btnClear_Click(sender, e);
	btnA->Enabled = false;
	btnB->Enabled = false;
	btnC->Enabled = false;
	btnD->Enabled = false;
	btnE->Enabled = false;
	btnF->Enabled = false;
	btnSLeft->Enabled = false;
	btnSRight->Enabled = false;
	btnAnd->Enabled = false;
	btnOr->Enabled = false;
	btnXor->Enabled = false;
	btnNot->Enabled = false;
	btn2->Enabled = true;
	btn3->Enabled = true;
	btn4->Enabled = true;
	btn5->Enabled = true;
	btn6->Enabled = true;
	btn7->Enabled = true;
	btn8->Enabled = true;
	btn9->Enabled = true;
}
System::Void QintC::rbBIN_CheckedChanged(Object^  sender, EventArgs^  e) {
	btnClear_Click(sender, e);
	btnA->Enabled = false;
	btnB->Enabled = false;
	btnC->Enabled = false;
	btnD->Enabled = false;
	btnE->Enabled = false;
	btnF->Enabled = false;
	btnSLeft->Enabled = true;
	btnSRight->Enabled = true;
	btnAnd->Enabled = true;
	btnOr->Enabled = true;
	btnXor->Enabled = true;
	btnNot->Enabled = true;
	btn2->Enabled = false;
	btn3->Enabled = false;
	btn4->Enabled = false;
	btn5->Enabled = false;
	btn6->Enabled = false;
	btn7->Enabled = false;
	btn8->Enabled = false;
	btn9->Enabled = false;
}
System::Void QintC::QintC_Load(Object^  sender, EventArgs^  e) {
}
#pragma  endregion
