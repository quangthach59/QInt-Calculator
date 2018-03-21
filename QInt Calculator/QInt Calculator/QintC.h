#pragma once

namespace QIntCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QintC
	/// </summary>
	public ref class QintC : public System::Windows::Forms::Form
	{
	public:
		QintC(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QintC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tbInput;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  rbHEX;
	private: System::Windows::Forms::RadioButton^  rbDEC;
	private: System::Windows::Forms::RadioButton^  rbBIN;
	private: System::Windows::Forms::Button^  btnImport;
	private: System::Windows::Forms::Button^  btnA;
	private: System::Windows::Forms::Button^  btnB;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btnD;
	private: System::Windows::Forms::Button^  btnE;
	private: System::Windows::Forms::Button^  btnF;
	private: System::Windows::Forms::Button^  btnSRight;
	private: System::Windows::Forms::Button^  btnSLeft;
	private: System::Windows::Forms::Button^  btnNot;
	private: System::Windows::Forms::Button^  btnXor;
	private: System::Windows::Forms::Button^  btnOr;
	private: System::Windows::Forms::Button^  btnAnd;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  btnDel;
	private: System::Windows::Forms::Button^  btnDivide;
	private: System::Windows::Forms::Button^  btnMultiply;
	private: System::Windows::Forms::Button^  btnSubtract;
	private: System::Windows::Forms::Button^  btnEqual;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn1;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbInput = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// tbInput
			// 
			this->tbInput->AcceptsReturn = true;
			this->tbInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->tbInput->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbInput->Location = System::Drawing::Point(0, 0);
			this->tbInput->Multiline = true;
			this->tbInput->Name = L"tbInput";
			this->tbInput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbInput->Size = System::Drawing::Size(359, 105);
			this->tbInput->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 106);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(359, 82);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 196);
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
			this->rbHEX->Location = System::Drawing::Point(90, 194);
			this->rbHEX->Name = L"rbHEX";
			this->rbHEX->Size = System::Drawing::Size(58, 25);
			this->rbHEX->TabIndex = 3;
			this->rbHEX->Text = L"HEX";
			this->rbHEX->UseVisualStyleBackColor = true;
			// 
			// rbDEC
			// 
			this->rbDEC->AutoSize = true;
			this->rbDEC->Checked = true;
			this->rbDEC->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbDEC->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rbDEC->Location = System::Drawing::Point(154, 194);
			this->rbDEC->Name = L"rbDEC";
			this->rbDEC->Size = System::Drawing::Size(57, 25);
			this->rbDEC->TabIndex = 4;
			this->rbDEC->TabStop = true;
			this->rbDEC->Text = L"DEC";
			this->rbDEC->UseVisualStyleBackColor = true;
			// 
			// rbBIN
			// 
			this->rbBIN->AutoSize = true;
			this->rbBIN->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbBIN->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rbBIN->Location = System::Drawing::Point(217, 194);
			this->rbBIN->Name = L"rbBIN";
			this->rbBIN->Size = System::Drawing::Size(55, 25);
			this->rbBIN->TabIndex = 5;
			this->rbBIN->Text = L"BIN";
			this->rbBIN->UseVisualStyleBackColor = true;
			// 
			// btnImport
			// 
			this->btnImport->AutoSize = true;
			this->btnImport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnImport->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImport->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnImport->Location = System::Drawing::Point(274, 190);
			this->btnImport->Name = L"btnImport";
			this->btnImport->Size = System::Drawing::Size(73, 33);
			this->btnImport->TabIndex = 6;
			this->btnImport->Text = L"Import";
			this->btnImport->UseVisualStyleBackColor = true;
			// 
			// btnA
			// 
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA->ForeColor = System::Drawing::SystemColors::Window;
			this->btnA->Location = System::Drawing::Point(5, 229);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(53, 40);
			this->btnA->TabIndex = 23;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = true;
			// 
			// btnB
			// 
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB->ForeColor = System::Drawing::SystemColors::Window;
			this->btnB->Location = System::Drawing::Point(64, 229);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(53, 40);
			this->btnB->TabIndex = 24;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = true;
			// 
			// btnC
			// 
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->ForeColor = System::Drawing::SystemColors::Window;
			this->btnC->Location = System::Drawing::Point(123, 229);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(53, 40);
			this->btnC->TabIndex = 25;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			// 
			// btnD
			// 
			this->btnD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnD->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnD->ForeColor = System::Drawing::SystemColors::Window;
			this->btnD->Location = System::Drawing::Point(182, 229);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(53, 40);
			this->btnD->TabIndex = 26;
			this->btnD->Text = L"D";
			this->btnD->UseVisualStyleBackColor = true;
			// 
			// btnE
			// 
			this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnE->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnE->ForeColor = System::Drawing::SystemColors::Window;
			this->btnE->Location = System::Drawing::Point(241, 229);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(53, 40);
			this->btnE->TabIndex = 27;
			this->btnE->Text = L"E";
			this->btnE->UseVisualStyleBackColor = true;
			// 
			// btnF
			// 
			this->btnF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnF->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnF->ForeColor = System::Drawing::SystemColors::Window;
			this->btnF->Location = System::Drawing::Point(300, 229);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(53, 40);
			this->btnF->TabIndex = 28;
			this->btnF->Text = L"F";
			this->btnF->UseVisualStyleBackColor = true;
			// 
			// btnSRight
			// 
			this->btnSRight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSRight->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSRight->ForeColor = System::Drawing::SystemColors::Window;
			this->btnSRight->Location = System::Drawing::Point(123, 413);
			this->btnSRight->Name = L"btnSRight";
			this->btnSRight->Size = System::Drawing::Size(53, 40);
			this->btnSRight->TabIndex = 52;
			this->btnSRight->Text = L">>";
			this->btnSRight->UseVisualStyleBackColor = true;
			// 
			// btnSLeft
			// 
			this->btnSLeft->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSLeft->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSLeft->ForeColor = System::Drawing::SystemColors::Window;
			this->btnSLeft->Location = System::Drawing::Point(64, 413);
			this->btnSLeft->Name = L"btnSLeft";
			this->btnSLeft->Size = System::Drawing::Size(53, 40);
			this->btnSLeft->TabIndex = 51;
			this->btnSLeft->Text = L"<<";
			this->btnSLeft->UseVisualStyleBackColor = true;
			// 
			// btnNot
			// 
			this->btnNot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNot->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNot->ForeColor = System::Drawing::SystemColors::Window;
			this->btnNot->Location = System::Drawing::Point(182, 275);
			this->btnNot->Name = L"btnNot";
			this->btnNot->Size = System::Drawing::Size(53, 40);
			this->btnNot->TabIndex = 50;
			this->btnNot->Text = L"~";
			this->btnNot->UseVisualStyleBackColor = true;
			// 
			// btnXor
			// 
			this->btnXor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnXor->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXor->ForeColor = System::Drawing::SystemColors::Window;
			this->btnXor->Location = System::Drawing::Point(182, 321);
			this->btnXor->Name = L"btnXor";
			this->btnXor->Size = System::Drawing::Size(53, 40);
			this->btnXor->TabIndex = 49;
			this->btnXor->Text = L"^";
			this->btnXor->UseVisualStyleBackColor = true;
			// 
			// btnOr
			// 
			this->btnOr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOr->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOr->ForeColor = System::Drawing::SystemColors::Window;
			this->btnOr->Location = System::Drawing::Point(182, 367);
			this->btnOr->Name = L"btnOr";
			this->btnOr->Size = System::Drawing::Size(53, 40);
			this->btnOr->TabIndex = 48;
			this->btnOr->Text = L"|";
			this->btnOr->UseVisualStyleBackColor = true;
			// 
			// btnAnd
			// 
			this->btnAnd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnd->ForeColor = System::Drawing::SystemColors::Window;
			this->btnAnd->Location = System::Drawing::Point(182, 413);
			this->btnAnd->Name = L"btnAnd";
			this->btnAnd->Size = System::Drawing::Size(53, 40);
			this->btnAnd->TabIndex = 47;
			this->btnAnd->Text = L"&&";
			this->btnAnd->UseVisualStyleBackColor = true;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::DarkRed;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::SystemColors::Window;
			this->btnClear->Location = System::Drawing::Point(300, 275);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(53, 40);
			this->btnClear->TabIndex = 46;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = false;
			// 
			// btnDel
			// 
			this->btnDel->BackColor = System::Drawing::Color::DarkRed;
			this->btnDel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDel->ForeColor = System::Drawing::SystemColors::Window;
			this->btnDel->Location = System::Drawing::Point(241, 275);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(53, 40);
			this->btnDel->TabIndex = 45;
			this->btnDel->Text = L"◄";
			this->btnDel->UseVisualStyleBackColor = false;
			// 
			// btnDivide
			// 
			this->btnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->ForeColor = System::Drawing::SystemColors::Window;
			this->btnDivide->Location = System::Drawing::Point(300, 321);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(53, 40);
			this->btnDivide->TabIndex = 43;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			// 
			// btnMultiply
			// 
			this->btnMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->ForeColor = System::Drawing::SystemColors::Window;
			this->btnMultiply->Location = System::Drawing::Point(241, 321);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(53, 40);
			this->btnMultiply->TabIndex = 42;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = true;
			// 
			// btnSubtract
			// 
			this->btnSubtract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->ForeColor = System::Drawing::SystemColors::Window;
			this->btnSubtract->Location = System::Drawing::Point(300, 367);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(53, 40);
			this->btnSubtract->TabIndex = 41;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = true;
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::Color::SteelBlue;
			this->btnEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->ForeColor = System::Drawing::SystemColors::Window;
			this->btnEqual->Location = System::Drawing::Point(241, 413);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(112, 40);
			this->btnEqual->TabIndex = 44;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			// 
			// btnAdd
			// 
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::Window;
			this->btnAdd->Location = System::Drawing::Point(241, 367);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(53, 40);
			this->btnAdd->TabIndex = 40;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btn0
			// 
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::Window;
			this->btn0->Location = System::Drawing::Point(5, 413);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(53, 40);
			this->btn0->TabIndex = 31;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			// 
			// btn9
			// 
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::Window;
			this->btn9->Location = System::Drawing::Point(123, 275);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(53, 40);
			this->btn9->TabIndex = 39;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			// 
			// btn8
			// 
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::Window;
			this->btn8->Location = System::Drawing::Point(64, 275);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(53, 40);
			this->btn8->TabIndex = 38;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::Window;
			this->btn7->Location = System::Drawing::Point(5, 275);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(53, 40);
			this->btn7->TabIndex = 37;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			// 
			// btn6
			// 
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::Window;
			this->btn6->Location = System::Drawing::Point(123, 321);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(53, 40);
			this->btn6->TabIndex = 36;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			// 
			// btn5
			// 
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::Window;
			this->btn5->Location = System::Drawing::Point(64, 321);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(53, 40);
			this->btn5->TabIndex = 35;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			// 
			// btn4
			// 
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::Window;
			this->btn4->Location = System::Drawing::Point(5, 321);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(53, 40);
			this->btn4->TabIndex = 34;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			// 
			// btn3
			// 
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::Window;
			this->btn3->Location = System::Drawing::Point(123, 367);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(53, 40);
			this->btn3->TabIndex = 33;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			// 
			// btn2
			// 
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::Window;
			this->btn2->Location = System::Drawing::Point(64, 367);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(53, 40);
			this->btn2->TabIndex = 32;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			// 
			// btn1
			// 
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::Window;
			this->btn1->Location = System::Drawing::Point(5, 367);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(53, 40);
			this->btn1->TabIndex = 30;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			// 
			// QintC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(359, 461);
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
			this->Controls->Add(this->textBox1);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void QintC_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
