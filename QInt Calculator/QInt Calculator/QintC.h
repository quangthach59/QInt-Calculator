#define _CRT_SECURE_NO_WARNINGS
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::IO;
#include <string>
#include <vector>
#include "Qint.h"
namespace QIntCalculator {
	using namespace QIntCalculator;
	ref class QintC : public System::Windows::Forms::Form
	{
	public:
		static QintC^ instance;
		QintC(void)
		{
			InitializeComponent();
			instance = this;
		};
#pragma region	Items declaration
		System::Windows::Forms::TextBox^  tbInput;
		System::Windows::Forms::TextBox^  tbOutput;
		System::Windows::Forms::Label^  label1;
		System::Windows::Forms::RadioButton^  rbHEX;
		System::Windows::Forms::RadioButton^  rbDEC;
		System::Windows::Forms::RadioButton^  rbBIN;
		System::Windows::Forms::Button^  btnImport;
		System::Windows::Forms::Button^  btnA;
		System::Windows::Forms::Button^  btnB;
		System::Windows::Forms::Button^  btnC;
		System::Windows::Forms::Button^  btnD;
		System::Windows::Forms::Button^  btnE;
		System::Windows::Forms::Button^  btnF;
		System::Windows::Forms::Button^  btnSRight;
		System::Windows::Forms::Button^  btnSLeft;
		System::Windows::Forms::Button^  btnNot;
		System::Windows::Forms::Button^  btnXor;
		System::Windows::Forms::Button^  btnOr;
		System::Windows::Forms::Button^  btnAnd;
		System::Windows::Forms::Button^  btnClear;
		System::Windows::Forms::Button^  btnDel;
		System::Windows::Forms::Button^  btnDivide;
		System::Windows::Forms::Button^  btnMultiply;
		System::Windows::Forms::Button^  btnSubtract;
		System::Windows::Forms::Button^  btnEqual;
		System::Windows::Forms::Button^  btnAdd;
		System::Windows::Forms::Button^  btn0;
		System::Windows::Forms::Button^  btn9;
		System::Windows::Forms::Button^  btn8;
		System::Windows::Forms::Button^  btn7;
		System::Windows::Forms::Button^  btn6;
		System::Windows::Forms::Button^  btn5;
		System::Windows::Forms::Button^  btn4;
		System::Windows::Forms::Button^  btn3;
		System::Windows::Forms::Button^  btn2;
	public: System::Windows::Forms::OpenFileDialog^  ofdData;

	public:
		System::Windows::Forms::Button^  btn1;
#pragma endregion
	protected:
		~QintC()
		{
			if (components)
			{
				delete components;
			}
		};
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->tbInput = (gcnew System::Windows::Forms::TextBox());
			this->tbOutput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rbHEX = (gcnew System::Windows::Forms::RadioButton());
			this->rbDEC = (gcnew System::Windows::Forms::RadioButton());
			this->rbBIN = (gcnew System::Windows::Forms::RadioButton());
			this->btnImport = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnSRight = (gcnew System::Windows::Forms::Button());
			this->btnSLeft = (gcnew System::Windows::Forms::Button());
			this->btnNot = (gcnew System::Windows::Forms::Button());
			this->btnXor = (gcnew System::Windows::Forms::Button());
			this->btnOr = (gcnew System::Windows::Forms::Button());
			this->btnAnd = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->ofdData = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// tbInput
			// 
			this->tbInput->AcceptsReturn = true;
			this->tbInput->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tbInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbInput->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->tbInput->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbInput->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbInput->Location = System::Drawing::Point(0, 0);
			this->tbInput->Multiline = true;
			this->tbInput->Name = L"tbInput";
			this->tbInput->ReadOnly = true;
			this->tbInput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbInput->Size = System::Drawing::Size(359, 141);
			this->tbInput->TabIndex = 0;
			this->tbInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbOutput
			// 
			this->tbOutput->AcceptsReturn = true;
			this->tbOutput->BackColor = System::Drawing::SystemColors::ControlDark;
			this->tbOutput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbOutput->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbOutput->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbOutput->Location = System::Drawing::Point(0, 142);
			this->tbOutput->Multiline = true;
			this->tbOutput->Name = L"tbOutput";
			this->tbOutput->ReadOnly = true;
			this->tbOutput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbOutput->Size = System::Drawing::Size(359, 147);
			this->tbOutput->TabIndex = 1;
			this->tbOutput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 298);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Input as:";
			// 
			// rbHEX
			// 
			this->rbHEX->AutoSize = true;
			this->rbHEX->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbHEX->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rbHEX->Location = System::Drawing::Point(90, 296);
			this->rbHEX->Name = L"rbHEX";
			this->rbHEX->Size = System::Drawing::Size(58, 25);
			this->rbHEX->TabIndex = 3;
			this->rbHEX->Text = L"HEX";
			this->rbHEX->UseVisualStyleBackColor = true;
			this->rbHEX->CheckedChanged += gcnew System::EventHandler(this, &QintC::rbHEX_CheckedChanged);
			// 
			// rbDEC
			// 
			this->rbDEC->AutoSize = true;
			this->rbDEC->Checked = true;
			this->rbDEC->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbDEC->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rbDEC->Location = System::Drawing::Point(154, 296);
			this->rbDEC->Name = L"rbDEC";
			this->rbDEC->Size = System::Drawing::Size(57, 25);
			this->rbDEC->TabIndex = 4;
			this->rbDEC->TabStop = true;
			this->rbDEC->Text = L"DEC";
			this->rbDEC->UseVisualStyleBackColor = true;
			this->rbDEC->CheckedChanged += gcnew System::EventHandler(this, &QintC::rbDEC_CheckedChanged);
			// 
			// rbBIN
			// 
			this->rbBIN->AutoSize = true;
			this->rbBIN->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbBIN->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rbBIN->Location = System::Drawing::Point(217, 296);
			this->rbBIN->Name = L"rbBIN";
			this->rbBIN->Size = System::Drawing::Size(55, 25);
			this->rbBIN->TabIndex = 5;
			this->rbBIN->Text = L"BIN";
			this->rbBIN->UseVisualStyleBackColor = true;
			this->rbBIN->CheckedChanged += gcnew System::EventHandler(this, &QintC::rbBIN_CheckedChanged);
			// 
			// btnImport
			// 
			this->btnImport->AutoSize = true;
			this->btnImport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnImport->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImport->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnImport->Location = System::Drawing::Point(274, 292);
			this->btnImport->Name = L"btnImport";
			this->btnImport->Size = System::Drawing::Size(73, 33);
			this->btnImport->TabIndex = 6;
			this->btnImport->Text = L"Import";
			this->btnImport->UseVisualStyleBackColor = true;
			this->btnImport->Click += gcnew System::EventHandler(this, &QintC::btnImport_Click);
			// 
			// btnA
			// 
			this->btnA->Enabled = false;
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA->ForeColor = System::Drawing::SystemColors::Window;
			this->btnA->Location = System::Drawing::Point(5, 331);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(53, 40);
			this->btnA->TabIndex = 23;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = true;
			this->btnA->Click += gcnew System::EventHandler(this, &QintC::btnA_Click);
			// 
			// btnB
			// 
			this->btnB->Enabled = false;
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB->ForeColor = System::Drawing::SystemColors::Window;
			this->btnB->Location = System::Drawing::Point(64, 331);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(53, 40);
			this->btnB->TabIndex = 24;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = true;
			this->btnB->Click += gcnew System::EventHandler(this, &QintC::btnB_Click);
			// 
			// btnC
			// 
			this->btnC->Enabled = false;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->ForeColor = System::Drawing::SystemColors::Window;
			this->btnC->Location = System::Drawing::Point(123, 331);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(53, 40);
			this->btnC->TabIndex = 25;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &QintC::btnC_Click);
			// 
			// btnD
			// 
			this->btnD->Enabled = false;
			this->btnD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnD->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnD->ForeColor = System::Drawing::SystemColors::Window;
			this->btnD->Location = System::Drawing::Point(182, 331);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(53, 40);
			this->btnD->TabIndex = 26;
			this->btnD->Text = L"D";
			this->btnD->UseVisualStyleBackColor = true;
			this->btnD->Click += gcnew System::EventHandler(this, &QintC::btnD_Click);
			// 
			// btnE
			// 
			this->btnE->Enabled = false;
			this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnE->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnE->ForeColor = System::Drawing::SystemColors::Window;
			this->btnE->Location = System::Drawing::Point(241, 331);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(53, 40);
			this->btnE->TabIndex = 27;
			this->btnE->Text = L"E";
			this->btnE->UseVisualStyleBackColor = true;
			this->btnE->Click += gcnew System::EventHandler(this, &QintC::btnE_Click);
			// 
			// btnF
			// 
			this->btnF->Enabled = false;
			this->btnF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnF->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnF->ForeColor = System::Drawing::SystemColors::Window;
			this->btnF->Location = System::Drawing::Point(300, 331);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(53, 40);
			this->btnF->TabIndex = 28;
			this->btnF->Text = L"F";
			this->btnF->UseVisualStyleBackColor = true;
			this->btnF->Click += gcnew System::EventHandler(this, &QintC::btnF_Click);
			// 
			// btnSRight
			// 
			this->btnSRight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSRight->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSRight->ForeColor = System::Drawing::SystemColors::Window;
			this->btnSRight->Location = System::Drawing::Point(123, 515);
			this->btnSRight->Name = L"btnSRight";
			this->btnSRight->Size = System::Drawing::Size(53, 40);
			this->btnSRight->TabIndex = 52;
			this->btnSRight->Text = L">>";
			this->btnSRight->UseVisualStyleBackColor = true;
			this->btnSRight->Click += gcnew System::EventHandler(this, &QintC::btnSRight_Click);
			// 
			// btnSLeft
			// 
			this->btnSLeft->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSLeft->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSLeft->ForeColor = System::Drawing::SystemColors::Window;
			this->btnSLeft->Location = System::Drawing::Point(64, 515);
			this->btnSLeft->Name = L"btnSLeft";
			this->btnSLeft->Size = System::Drawing::Size(53, 40);
			this->btnSLeft->TabIndex = 51;
			this->btnSLeft->Text = L"<<";
			this->btnSLeft->UseVisualStyleBackColor = true;
			this->btnSLeft->Click += gcnew System::EventHandler(this, &QintC::btnSLeft_Click);
			// 
			// btnNot
			// 
			this->btnNot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNot->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNot->ForeColor = System::Drawing::SystemColors::Window;
			this->btnNot->Location = System::Drawing::Point(182, 377);
			this->btnNot->Name = L"btnNot";
			this->btnNot->Size = System::Drawing::Size(53, 40);
			this->btnNot->TabIndex = 50;
			this->btnNot->Text = L"~";
			this->btnNot->UseVisualStyleBackColor = true;
			this->btnNot->Click += gcnew System::EventHandler(this, &QintC::btnNot_Click);
			// 
			// btnXor
			// 
			this->btnXor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnXor->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXor->ForeColor = System::Drawing::SystemColors::Window;
			this->btnXor->Location = System::Drawing::Point(182, 423);
			this->btnXor->Name = L"btnXor";
			this->btnXor->Size = System::Drawing::Size(53, 40);
			this->btnXor->TabIndex = 49;
			this->btnXor->Text = L"^";
			this->btnXor->UseVisualStyleBackColor = true;
			this->btnXor->Click += gcnew System::EventHandler(this, &QintC::btnXor_Click);
			// 
			// btnOr
			// 
			this->btnOr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOr->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOr->ForeColor = System::Drawing::SystemColors::Window;
			this->btnOr->Location = System::Drawing::Point(182, 469);
			this->btnOr->Name = L"btnOr";
			this->btnOr->Size = System::Drawing::Size(53, 40);
			this->btnOr->TabIndex = 48;
			this->btnOr->Text = L"|";
			this->btnOr->UseVisualStyleBackColor = true;
			this->btnOr->Click += gcnew System::EventHandler(this, &QintC::btnOr_Click);
			// 
			// btnAnd
			// 
			this->btnAnd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnd->ForeColor = System::Drawing::SystemColors::Window;
			this->btnAnd->Location = System::Drawing::Point(182, 515);
			this->btnAnd->Name = L"btnAnd";
			this->btnAnd->Size = System::Drawing::Size(53, 40);
			this->btnAnd->TabIndex = 47;
			this->btnAnd->Text = L"&&";
			this->btnAnd->UseVisualStyleBackColor = true;
			this->btnAnd->Click += gcnew System::EventHandler(this, &QintC::btnAnd_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::DarkRed;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::SystemColors::Window;
			this->btnClear->Location = System::Drawing::Point(300, 377);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(53, 40);
			this->btnClear->TabIndex = 46;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &QintC::btnClear_Click);
			// 
			// btnDel
			// 
			this->btnDel->BackColor = System::Drawing::Color::DarkRed;
			this->btnDel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDel->ForeColor = System::Drawing::SystemColors::Window;
			this->btnDel->Location = System::Drawing::Point(241, 377);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(53, 40);
			this->btnDel->TabIndex = 45;
			this->btnDel->Text = L"◄";
			this->btnDel->UseVisualStyleBackColor = false;
			this->btnDel->Click += gcnew System::EventHandler(this, &QintC::btnDel_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->ForeColor = System::Drawing::SystemColors::Window;
			this->btnDivide->Location = System::Drawing::Point(300, 423);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(53, 40);
			this->btnDivide->TabIndex = 43;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &QintC::btnDivide_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->ForeColor = System::Drawing::SystemColors::Window;
			this->btnMultiply->Location = System::Drawing::Point(241, 423);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(53, 40);
			this->btnMultiply->TabIndex = 42;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &QintC::btnMultiply_Click);
			// 
			// btnSubtract
			// 
			this->btnSubtract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->ForeColor = System::Drawing::SystemColors::Window;
			this->btnSubtract->Location = System::Drawing::Point(300, 469);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(53, 40);
			this->btnSubtract->TabIndex = 41;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = true;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &QintC::btnSubtract_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::Color::SteelBlue;
			this->btnEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->ForeColor = System::Drawing::SystemColors::Window;
			this->btnEqual->Location = System::Drawing::Point(241, 515);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(112, 40);
			this->btnEqual->TabIndex = 44;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			this->btnEqual->Click += gcnew System::EventHandler(this, &QintC::btnEqual_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::Window;
			this->btnAdd->Location = System::Drawing::Point(241, 469);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(53, 40);
			this->btnAdd->TabIndex = 40;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &QintC::btnAdd_Click);
			// 
			// btn0
			// 
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::Window;
			this->btn0->Location = System::Drawing::Point(5, 515);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(53, 40);
			this->btn0->TabIndex = 31;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &QintC::btn0_Click);
			// 
			// btn9
			// 
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::Window;
			this->btn9->Location = System::Drawing::Point(123, 377);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(53, 40);
			this->btn9->TabIndex = 39;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &QintC::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::Window;
			this->btn8->Location = System::Drawing::Point(64, 377);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(53, 40);
			this->btn8->TabIndex = 38;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &QintC::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::Window;
			this->btn7->Location = System::Drawing::Point(5, 377);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(53, 40);
			this->btn7->TabIndex = 37;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &QintC::btn7_Click);
			// 
			// btn6
			// 
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::Window;
			this->btn6->Location = System::Drawing::Point(123, 423);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(53, 40);
			this->btn6->TabIndex = 36;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &QintC::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::Window;
			this->btn5->Location = System::Drawing::Point(64, 423);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(53, 40);
			this->btn5->TabIndex = 35;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &QintC::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::Window;
			this->btn4->Location = System::Drawing::Point(5, 423);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(53, 40);
			this->btn4->TabIndex = 34;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &QintC::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::Window;
			this->btn3->Location = System::Drawing::Point(123, 469);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(53, 40);
			this->btn3->TabIndex = 33;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &QintC::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::Window;
			this->btn2->Location = System::Drawing::Point(64, 469);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(53, 40);
			this->btn2->TabIndex = 32;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &QintC::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::Window;
			this->btn1->Location = System::Drawing::Point(5, 469);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(53, 40);
			this->btn1->TabIndex = 30;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &QintC::btn1_Click);
			// 
			// ofdData
			// 
			this->ofdData->Filter = L"Text file (.txt)|*.txt";
			this->ofdData->InitialDirectory = L"Environment.CurrentDirectory + \"\\\\\"";
			this->ofdData->Title = L"\"Select text file to open\"";
			// 
			// QintC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(359, 561);
			this->Controls->Add(this->btnSRight);
			this->Controls->Add(this->btnSLeft);
			this->Controls->Add(this->btnNot);
			this->Controls->Add(this->btnXor);
			this->Controls->Add(this->btnOr);
			this->Controls->Add(this->btnAnd);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnF);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnD);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnB);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->btnImport);
			this->Controls->Add(this->rbBIN);
			this->Controls->Add(this->rbDEC);
			this->Controls->Add(this->rbHEX);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbOutput);
			this->Controls->Add(this->tbInput);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"QintC";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"QInt Calculator";
			this->Load += gcnew System::EventHandler(this, &QintC::QintC_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &QintC::QintC_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void AddToInput(String^ s) {
		instance->tbInput->Paste(s);
	};
	public:
		//Chuyển đổi System::String → string C++
		string Str_to_str(String^ s);
		//Chuyển đổi string C++ → System::String
		String^ str_to_Str(string s);

		string Multiply(string &a);
		string Power(int n);
		string Sum(string a, string b);
		string NoName(string a);
		string BinToDecStr(vector<bool> Bin);
		Qint BinToDec(vector<bool> x);
		int IntDiv2(string &Dec);
		vector<bool> StrDecToBin(string Dec);
		vector<bool> DecToBin(Qint Q);
		char BitTo1Hex(bool bit[4]);
		string BinToHex(vector<bool> Bin);
		string Translate(char Hex);
		string HexToBin_Str(string H);
		vector<bool> StrBinToBin(string bin);
		vector<bool> HexToBin(string H);
		string DecToHex(Qint x);
		Qint HexToDec(string Hex);
		void PrintQInt(Qint Q);
		int GetBit(Qint a, int i);
		string BinToStrBin(vector<bool> x);
		//Tổ hợp hàm chuỗi 2 -> chuỗi 10
		string StrBinToStrDec(string Bin);
		//Tổ hợp hàm chuỗi 10 -> chuỗi 2
		string StrDecToStrBin(string Dec);
		//Tổ hợp hàm chuỗi 2 -> chuỗi 16
		string StrBinToStrHex(string Bin);
		//Tổ hợp hàm chuỗi 16 -> chuỗi 2
		string StrHexToStrBin(string Hex);
		//Tổ Hợp hàm chuỗi 10 -> chuỗi 16
		string StrDecToStrHex(string Dec);
		//Tổ hợp hàm chuỗi 16 -> chuỗi 10
		string StrHexToStrDec(string Hex);

		//Tổ hợp hàm dịch trái Qint
		//n là số lần muốn dịch
		string ShiftLeft_StrDec(string Dec, int n);
		//Tổ hợp hàm dịch phải Qint
		//n là số lần muốn dịch
		string ShiftRight_StrDec(string Dec, int n);

		//Tổ hợp hàm AND string Dec
		string AndStrDec(string Dec1, string Dec2);
		//Tổ hợp hàm OR string Dec
		string OrStrDec(string Dec1, string Dec2);
		//Tổ hợp hàm XOR string Dec
		string XorStrDec(string Dec1, string Dec2);
		//Tổ hợp hàm NOT string Dec
		string NotStrDec(string Dec);

		//Tổ hợp hàm cộng 2 chuỗi Dec
		string SumStrDec(string Dec1, string Dec2);
		//Tổ hợp hàm trừ 2 chuỗi Dec
		string SubtractStrDec(string Dec1, string Dec2);
		void timViTriSet(int &vitri, int i);
		void ScanQInt(Qint &x);
		//void operator~();
		//Đầu vào chuỗi, trả về vector kiểu chuỗi các thành phần biểu thức
		vector<string> GetStringInput(string s);
		//Xử lí chuỗi đọc từ tập tin, các đối tượng cách nhau bởi khoảng trắng
		vector<string> GetStringInputFromFile(string s);
		vector<bool> addBIN(vector<bool> a, vector<bool> b);
		vector<bool> subtractBIN(vector<bool> a, vector<bool> b);

		// Phép AND nhị phân
		vector<bool> andBIN(vector<bool> a, vector<bool> b);
		vector<bool> orBIN(vector<bool> a, vector<bool> b);
		vector<bool> xorBIN(vector<bool> a, vector<bool> b);
		vector<bool> notBIN(vector<bool> a);

		vector<bool> divideBIN(vector<bool> Q, vector<bool> M);
		vector<bool> shiftLEFT(vector<bool> a, int b);
		vector<bool> tachBIT(vector <bool> a, int x, int y);
		vector<bool> ganBIT(vector <bool> a, vector<bool> b);
		//Trả về hệ cơ số đang nhập lấy từ radio button, giá trị 2/10/16
		int GetNumeralSystemInput();
		//Xử lí vector kiểu chuỗi chứa các thành phần biểu thức, trả về kết quả
		string EquationProcess(vector<string> s);
		void WriteAnswerToFile(String^ ans);
		void ShowAnswer(String^ ans);

	private: System::Void QintC_Load(Object^  sender, EventArgs^  e);
	private: System::Void btnA_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnB_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnC_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnD_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnE_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnF_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn0_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn1_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn2_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn3_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn4_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn5_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn6_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn7_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn8_Click(Object^  sender, EventArgs^  e);
	private: System::Void btn9_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnAdd_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnSubtract_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnMultiply_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnDivide_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnAnd_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnOr_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnXor_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnNot_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnClear_Click(Object^  sender, EventArgs^  e);
	private: System::Void btnDel_Click(Object^  sender, EventArgs^  e);
	private: System::Void rbHEX_CheckedChanged(Object^  sender, EventArgs^  e);
	private: System::Void rbDEC_CheckedChanged(Object^  sender, EventArgs^  e);
	private: System::Void rbBIN_CheckedChanged(Object^  sender, EventArgs^  e);
	private: System::Void btnSLeft_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnSRight_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void QintC_KeyPress(Object^  sender, KeyPressEventArgs^  e) {
		switch (e->KeyChar)
		{
		case '0': btn0_Click(sender, e); break;
		case '1': btn1_Click(sender, e); break;
		case '2': btn2_Click(sender, e); break;
		case '3': btn3_Click(sender, e); break;
		case '4': btn4_Click(sender, e); break;
		case '5': btn5_Click(sender, e); break;
		case '6': btn6_Click(sender, e); break;
		case '7': btn7_Click(sender, e); break;
		case '8': btn8_Click(sender, e); break;
		case '9': btn9_Click(sender, e); break;
		case 'A': case 'a': btnA_Click(sender, e); break;
		case 'B': case 'b': btnB_Click(sender, e); break;
		case 'C': case 'c': btnC_Click(sender, e); break;
		case 'D': case 'd': btnD_Click(sender, e); break;
		case 'E': case 'e': btnE_Click(sender, e); break;
		case 'F': case 'f': btnF_Click(sender, e); break;
		case '+': btnAdd_Click(sender, e); break;
		case '-': btnSubtract_Click(sender, e); break;
		case '*': btnMultiply_Click(sender, e); break;
		case '/': btnDivide_Click(sender, e); break;
		case '&': btnAnd_Click(sender, e); break;
		case '|': btnOr_Click(sender, e); break;
		case '^': btnXor_Click(sender, e); break;
		case '~': btnNot_Click(sender, e); break;
		case '<': btnSLeft_Click(sender, e); break;
		case '>': btnSRight_Click(sender, e); break;
		case 8: btnDel_Click(sender, e); break;	//Mã ASCII của phím backspace
		case 13: case '=': btnEqual_Click(sender, e); break; //Nhấn enter hoặc dấu =, xem như kết thúc phép tính
		}
	};
	private: System::Void btnEqual_Click(Object^  sender, EventArgs^  e) {
		ShowAnswer(str_to_Str(EquationProcess(GetStringInput(Str_to_str(tbInput->Text)))));
	}
	private: System::Void btnImport_Click(System::Object^  sender, System::EventArgs^  e) {
		ofdData->ShowDialog();
		if (ofdData->FileName == "")
		{
			MessageBox::Show("No file selected!", "Qint Calculator", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		StreamReader^f = gcnew StreamReader(ofdData->FileName);
		string s;
		while (f->EndOfStream == 0)
		{
			s = Str_to_str(f->ReadLine());

			WriteAnswerToFile(str_to_Str(EquationProcess(GetStringInputFromFile(s))));
		}
		MessageBox::Show("Answers written to " + Environment::CurrentDirectory + "\\output.txt!", "Qint Calculator");
		string fpath = "notepad.exe " + Str_to_str(Environment::CurrentDirectory) + "\\output.txt";
		system(fpath.c_str());
	}
	};
}

