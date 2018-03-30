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
	/*btn2->Enabled = false;
	btn3->Enabled = false;
	btn4->Enabled = false;
	btn5->Enabled = false;
	btn6->Enabled = false;
	btn7->Enabled = false;
	btn8->Enabled = false;
	btn9->Enabled = false;*/
	btn2->Enabled = true;
	btn3->Enabled = true;
	btn4->Enabled = true;
	btn5->Enabled = true;
	btn6->Enabled = true;
	btn7->Enabled = true;
	btn8->Enabled = true;
	btn9->Enabled = true;


}
System::Void QintC::btnSLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	AddToInput("<<");
}
System::Void QintC::btnSRight_Click(System::Object^  sender, System::EventArgs^  e) {
	AddToInput(">>");
}
System::Void QintC::QintC_Load(Object^  sender, EventArgs^  e) {
}
#pragma  endregion

//Chuyển đổi chuỗi kiểu System::String sang string C++
string QIntCalculator::QintC::Str_to_str(String^ s)
{
	string os;
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	return os;
}

//Chuyển đổi chuỗi kiểu string C++ sang System::String
String^ QIntCalculator::QintC::str_to_Str(string s)
{
	String^ os = gcnew String(s.c_str());
	return os;
}
string QIntCalculator::QintC::Multiply(string &a)//16
{
	int len = a.length() - 1;
	int nho = 0;
	for (int i = len; i >= 0; i--)
	{
		int k = (a[i] - 48) * 2 + nho;
		a[i] = k % 10 + 48;
		if (k >= 10)
		{
			nho = 1;
		}
		else
		{
			nho = 0;
		}
	}
	if (nho == 1)
	{
		a = '1' + a;
	}
	return a;
}
//Hàm Power tính 2 mũ n
//Input: Số nguyên n
//Output: Chuỗi kết quả
string QIntCalculator::QintC::Power(int n)
{
	string kq = "1";
	for (int i = 0; i < n; i++)
	{
		Multiply(kq);
	}
	return kq;
}
//Cộng 2 số nguyên
//Input: 2 chuỗi 
//Output//1 chuỗi kết quả
string QIntCalculator::QintC::Sum(string a, string b)
{
	string kq;
	int lenA = a.length() - 1;
	int lenB = b.length() - 1;
	if (lenA > lenB)
	{
		for (int i = 0; i < lenA - lenB; i++)
		{
			b = '0' + b;
		}
		lenB = lenA;
	}
	else if (lenB > lenA)
	{
		for (int i = 0; i < lenB - lenA; i++)
		{
			a = '0' + a;
		}
		lenA = lenB;
	}
	int nho = 0;
	for (int i = lenA; i >= 0; i--)
	{
		int k = (a[i] - 48) + (b[i] - 48) + nho;
		kq = (char)(k % 10 + 48) + kq;
		if (k >= 10)
		{
			nho = 1;
		}
		else
		{
			nho = 0;
		}
	}
	if (nho == 1)
	{
		kq = '1' + kq;
	}
	return kq;
}
//Chuyển từ 2 qua 10
//Input: Chuỗi nhị phân
//Output: Chuỗi thập phân

string QIntCalculator::QintC::NoName(string a)
{
	string kq = "";
	//Lấy số 2^127 gán vào b
	string b = Power(127);
	int m = a.length();
	int n = b.length();
	int k = n - m;
	//Hiệu chỉnh a cùng độ dài b
	for (int i = 0; i < k; i++)
	{
		a = '0' + a;
	}
	//Lấy 2^127 - a = kết quả âm
	int nho = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		int k = (b[i] - 48) - (a[i] - 48) - nho;
		if (k < 0)
		{
			kq = (char)(((b[i] - 48) + 10 - (a[i] - 48) - nho) + 48) + kq;
			nho = 1;
		}
		else
		{
			kq = (char)(k + 48) + kq;
			nho = 0;
		}
	}
	//Xóa phần tử đầu bằng 0 nếu có
	while (kq[0] == '0')
	{
		kq.erase(kq.begin());
	}
	return kq;
}
string QIntCalculator::QintC::BinToDecStr(vector<bool> Bin)
{
	string Dec = "0";
	for (int i = 127; i > 0; i--)
	{
		if (Bin[i] == 1)
		{
			Dec = Sum(Dec, Power(127 - i));
		}
	}
	//Nếu bit đầu là 0 => số âm, gọi hàm -(2^127 - Dec)
	if (Bin[0] == 1)
	{
		Dec = '-' + NoName(Dec);
	}
	return Dec;
}
Qint QIntCalculator::QintC::BinToDec(vector<bool> x)
{
	Qint Q;
	int pivot = 127;
	for (int i = x.size() - 1; i >= 0; i--)
	{
		if (x[i] == 1)
		{
			Q.data[pivot / 32] |= (1 << (31 - pivot % 32));
		}
		pivot--;
	}
	return Q;
}


//Hàm Chia một số Thập Phân cho 2
//Input: Chuỗi số Thập Phân(String Dec)
//Output: CHuỗi Thập Phân kết quả
int QIntCalculator::QintC::IntDiv2(string &Dec)
{
	int nho = 0;
	for (int i = 0; i < (int)Dec.length(); i++)
	{
		char t = Dec[i];
		Dec[i] = (Dec[i] - 48 + nho * 10) / 2 + 48;
		nho = (t - 48) % 2;
	}

	//Xóa những số 0 đầu
	while (Dec[0] == '0')
	{
		Dec.erase(Dec.begin());
	}
	return nho;
}
//Chuyển từ 10 qua 2
//Input: Chuỗi string
//Output: Chuỗi nhị phân kết quả
vector<bool> QIntCalculator::QintC::StrDecToBin(string Dec)
{
	bool SoAm = 0;
	//Nếu là số ấm thì chuyển thành dương
	if (Dec[0] == '-')
	{
		Dec.erase(Dec.begin());
		SoAm = 1;
	}
	int R;
	vector<bool> tmp;
	vector<bool> Result;
	while (Dec != "")
	{
		R = IntDiv2(Dec);
		tmp.push_back(R);
	}
	while (tmp.size() < 128)
	{
		tmp.push_back(0);
	}
	for (int i = 0; i < (int)tmp.size(); i++)
	{
		Result.push_back(tmp[tmp.size() - i - 1]);
	}
	if (SoAm)
	{
		Qint a = BinToDec(Result);
		//----------------------------------------
		// Đảo toàn bộ bit
		for (int i = 0; i < 128; i++)
		{
			a.data[i / 32] ^= (1 << (31 - (i % 32)));
		}

		//Cộng 1 để có số bù 2
		int k = 1;
		for (int i = 127; i >= 0; i--)
		{
			if (k == 1)
			{
				if (((a.data[i / 32] >> (31 - (i % 32))) & 1) == 0) k = 0;
				a.data[i / 32] ^= (1 << (31 - (i % 32)));
			}
		}
		//-----------------------------------
		return DecToBin(a);
	}
	return Result;
}
//Hàm lấy bit từ Qint ra Mảng bool
//Input: Số nguyên lớn(Qint Q)
//Output: Mảng động bool nhị phân
vector<bool> QIntCalculator::QintC::DecToBin(Qint Q)
{
	vector<bool> a;
	for (int i = 127; i >= 0; i--)
	{
		int temp = GetBit(Q, i);
		a.push_back(temp);
	}
	return a;
}
char QIntCalculator::QintC::BitTo1Hex(bool bit[4])
{
	int value = bit[0] * (int)pow(2, 3) + bit[1] * (int)pow(2, 2) + bit[2] * (int)pow(2, 1) + bit[3];
	switch (value)
	{
	case 0: return '0';
	case 1: return '1';
	case 2: return '2';
	case 3: return '3';
	case 4: return '4';
	case 5: return '5';
	case 6: return '6';
	case 7: return '7';
	case 8: return '8';
	case 9: return '9';
	case 10: return 'A';
	case 11: return 'B';
	case 12: return 'C';
	case 13: return 'D';
	case 14: return 'E';
	case 15: return 'F';
	}
	return '\0';
}

//Hàm chuyển Nhị Phân sang Thập Lục Phân
//Input: Số nhị phân(bool *bin)
//Output: CHuỗi chứa hệ 16 tương ứng(char*)
string QIntCalculator::QintC::BinToHex(vector<bool> Bin)
{
	string Hex;
	bool temp[4];
	for (int i = 127; i >= 0; i--)
	{
		temp[i % 4] = Bin[i];
		if (i % 4 == 0)
		{
			Hex = BitTo1Hex(temp) + Hex;
		}
	}
	return Hex;
}
//Hàm chuyển từng kí tự từ hệ 16 sang Binary tương ứng
//Input: Kí tự hệ 16(char Hex)
//Output: Chuỗi Bit tương ứng (string)
string QIntCalculator::QintC::Translate(char Hex)
{
	switch (Hex)
	{
	case '0': return "0000";
	case '1': return "0001";
	case '2': return "0010";
	case '3': return "0011";
	case '4': return "0100";
	case '5': return "0101";
	case '6': return "0110";
	case '7': return "0111";
	case '8': return "1000";
	case '9': return "1001";
	case 'A': return "1010";
	case 'B': return "1011";
	case 'C': return "1100";
	case 'D': return "1101";
	case 'E': return "1110";
	case 'F': return "1111";
	}
	return "";
}

//Hàm chuyển hệ 16 sang Hệ 2 (dạng chuỗi)
//Input: Chuỗi hệ cơ số 16 (string H)
//Output: Chuỗi nhị phân tương ứng(string)
string QIntCalculator::QintC::HexToBin_Str(string H)
{
	string str;
	for (int i = H.length() - 1; i >= 0; i--)
	{
		str = Translate(H[i]) + str;
	}
	return str;
}

//Hàm chuyển chuỗi Bit sang mảng Bool
//Input: Chuỗi Bit (string bin)
//Output: Mảng động bool chứa mã Bit tương ứng chuỗi (bool*)
vector<bool> QIntCalculator::QintC::StrBinToBin(string bin)
{
	vector<bool> a;
	//Xem còn thiếu bao nhiêu bit biểu diễn
	//Bổ sung bit 0 vào đầu cho đủ
	int temp = 128 - bin.length();
	for (int i = 0; i < temp; i++)
	{
		a.push_back(0);
	}
	for (int i = temp; i < 128; i++)
	{
		a.push_back(bin[i - temp] - 48);
	}
	return a;
}

//Hàm chuyển từ chuỗi hệ 16 sang Nhị Phân
//Input: Chuỗi hệ 16 (String H), độ dài chuỗi H (int &len)
//Output: Mảng bool hệ Nhị Phân
vector<bool> QIntCalculator::QintC::HexToBin(string H)
{
	string kq = HexToBin_Str(H);
	return StrBinToBin(kq);
}
//Hàm chuyển 10 -> 16
string QIntCalculator::QintC::DecToHex(Qint x)
{
	vector<bool> bin = DecToBin(x);
	string kq = BinToHex(bin);
	while (kq[0] == '0')
	{
		kq.erase(kq.begin());
	}
	return kq;
}

//Hàm chuyển 16 -> 10
Qint QIntCalculator::QintC::HexToDec(string Hex)
{
	vector<bool> bin = HexToBin(Hex);
	return BinToDec(bin);
}
void QIntCalculator::QintC::PrintQInt(Qint Q)
{
	for (int i = 0; i < 128; i++)
	{
		cout << (((Q.data[i / 32] >> 31) - (i % 32)) & 1);
	}
	cout << endl;
}

int QIntCalculator::QintC::GetBit(Qint a, int i)
{
	return (a.data[(127 - i) / 32] >> (i)) & 1;
}
string QIntCalculator::QintC::BinToStrBin(vector<bool> x)
{
	string kq = "";
	for (int i = 0; i < 128; i++)
	{
		kq = kq + (char)(x[i] + 48);
	}
	return kq;
}
//-----------------------------------------------------------------------
//Tổ hợp hàm chuỗi 2 -> chuỗi 10
string QIntCalculator::QintC::StrBinToStrDec(string Bin)
{
	vector<bool> x = StrBinToBin(Bin);
	string Dec = BinToDecStr(x);
	return Dec;
}

//Tổ hợp hàm chuỗi 10 -> chuỗi 2
string QIntCalculator::QintC::StrDecToStrBin(string Dec)
{
	vector<bool> Bin = StrDecToBin(Dec);
	return BinToStrBin(Bin);
}

//Tổ hợp hàm chuỗi 2 -> chuỗi 16
string QIntCalculator::QintC::StrBinToStrHex(string Bin)
{
	vector<bool> x = StrBinToBin(Bin);
	string Hex = BinToHex(x);
	while (Hex[0] == '0')
	{
		Hex.erase(Hex.begin());
	}
	return Hex;
}

//Tổ hợp hàm chuỗi 16 -> chuỗi 2
string QIntCalculator::QintC::StrHexToStrBin(string Hex)
{
	return HexToBin_Str(Hex);
}

//Tổ Hợp hàm chuỗi 10 -> chuỗi 16
string QIntCalculator::QintC::StrDecToStrHex(string Dec)
{
	string Bin = StrDecToStrBin(Dec);
	return StrBinToStrHex(Bin);
}

//Tổ hợp hàm chuỗi 16 -> chuỗi 10
string QIntCalculator::QintC::StrHexToStrDec(string Hex)
{
	string Bin = StrHexToStrBin(Hex);
	return StrBinToStrDec(Bin);
}

//Tổ hợp hàm dịch trái Qint
//n là số lần muốn dịch
string QIntCalculator::QintC::ShiftLeft_StrDec(string Dec, int n)
{
	vector<bool> x = StrDecToBin(Dec);
	Qint q = BinToDec(x);
	q << n;
	return StrHexToStrDec(DecToHex(q));
}

//Tổ hợp hàm dịch phải Qint
//n là số lần muốn dịch
string QIntCalculator::QintC::ShiftRight_StrDec(string Dec, int n)
{
	vector<bool> x = StrDecToBin(Dec);
	Qint q = BinToDec(x);
	q >> n;
	return StrHexToStrDec(DecToHex(q));
}

//Tổ hợp hàm AND string Dec
string QIntCalculator::QintC::AndStrDec(string Dec1, string Dec2)
{
	Qint x1 = BinToDec(StrDecToBin(Dec1));
	Qint x2 = BinToDec(StrDecToBin(Dec2));
	Qint kq = x1 & x2;
	return StrHexToStrDec(DecToHex(kq));
}

//Tổ hợp hàm OR string Dec
string QIntCalculator::QintC::OrStrDec(string Dec1, string Dec2)
{
	Qint x1 = BinToDec(StrDecToBin(Dec1));
	Qint x2 = BinToDec(StrDecToBin(Dec2));
	Qint kq = x1 | x2;
	return StrHexToStrDec(DecToHex(kq));
}

//Tổ hợp hàm XOR string Dec
string QIntCalculator::QintC::XorStrDec(string Dec1, string Dec2)
{
	Qint x1 = BinToDec(StrDecToBin(Dec1));
	Qint x2 = BinToDec(StrDecToBin(Dec2));
	Qint kq = x1 ^ x2;
	return StrHexToStrDec(DecToHex(kq));
}

//Tổ hợp hàm NOT string Dec
string QIntCalculator::QintC::NotStrDec(string Dec)
{
	Qint x = BinToDec(StrDecToBin(Dec));
	~x;
	return StrHexToStrDec(DecToHex(x));
}

//Tổ hợp hàm cộng 2 chuỗi Dec
string QIntCalculator::QintC::SumStrDec(string Dec1, string Dec2)
{
	Qint x1 = BinToDec(StrDecToBin(Dec1));
	Qint x2 = BinToDec(StrDecToBin(Dec2));
	return StrHexToStrDec(DecToHex(x1 + x2));
}

//Tổ hợp hàm trừ 2 chuỗi Dec
string QIntCalculator::QintC::SubtractStrDec(string Dec1, string Dec2)
{
	Qint x1 = BinToDec(StrDecToBin(Dec1));
	Qint x2 = BinToDec(StrDecToBin(Dec2));
	return StrHexToStrDec(DecToHex(x1 - x2));
}

// tim vi tri set
void QIntCalculator::QintC::timViTriSet(int &vitri, int i)
{
	if (i / 32 == 0)
		vitri = 0;
	if (i / 32 == 1)
		vitri = 1;
	if (i / 32 == 2)
		vitri = 2;
	if (i / 32 == 3)
		vitri = 3;
}

//Hàm nhập số Qint
void QIntCalculator::QintC::ScanQInt(Qint &x)
{
	string s;
	cout << "-->Nhap so QInt: ";
	cin >> s;
	vector<bool> bin = StrDecToBin(s);
	x = BinToDec(bin);
}
vector<string> QIntCalculator::QintC::GetStringInput(string s)
{

	vector<string> str;
	//Cơ số dữ liệu nhập hiện tại
	str.push_back(Str_to_str(GetNumeralSystemInput().ToString()));
	//Tìm kí tự là operator
	int n = s.find_first_not_of("0123456789ABCDEF");
	//Operator ở vị trí hợp lệ
	if (n > 0)
	{
		string p1, p2, p3;
		p1 = s.substr(0, n);
		char p = s[n];
		//Operator dịch bit có độ dài là 2, các operator còn lại chỉ có độ dài 1
		if (p == '<' || p == '>')
		{
			p3 = s.substr(n + 2, s.length() - 1);
			if (p == '<')
				p2 = "<<";
			else
				p2 = ">>";
		}
		else
		{
			p3 = s.substr(n + 1, s.length() - 1);
			p2 = p;
		}
		//đối tượng 1
		str.push_back(p1);
		//toán tử
		str.push_back(p2);
		//đối tượng 2
		str.push_back(p3);
	}
	//Không có operator, là phép đổi cơ số
	else
	{
		if (n == 0)	//Tìm ở vị trí đầu
		{
			str.push_back("~");
			str.push_back(s.substr(1, s.length() - 1));
		}
		else
		{
			//cơ số đích, 0 tức là dữ liệu nhập từ bàn phím, sẽ đổi sang 2 hệ còn lại
			str.push_back("0");
			//đối tượng duy nhất
			str.push_back(s);
		}		
	}
	return str;
}

vector<string> QIntCalculator::QintC::GetStringInputFromFile(string s)
{
	vector<string> str;
	while (s != "" && s.find(' ') > 0)
	{
		str.push_back(s.substr(0, s.find(' ')));
		if (s.find(' ') == -1)
			break;
		s = s.substr(s.find(' ') + 1);
	}
	return str;
}
//Cộng 2 số nhị phân
vector<bool> QIntCalculator::QintC::addBIN(vector<bool> a, vector<bool> b) {
	vector<bool> kq(128);
	int nho_Tam = 0;

	//thực hiện phép cộng đến phần tử thứ  n-1
	for (int i = a.size() - 1; i > 0; i--) {
		if (a[i] + b[i] + nho_Tam == 0) {
			kq[i] = 0;
			nho_Tam = 0;
		}
		else if (a[i] + b[i] + nho_Tam == 1) {
			kq[i] = 1;
			nho_Tam = 0;
		}
		else if (a[i] + b[i] + nho_Tam == 2) {
			kq[i] = 0;
			nho_Tam = 1;
		}
		else if (a[i] + b[i] + nho_Tam > 2) {
			kq[i] = 1;
			nho_Tam = 1;
		}
	}


	// thực hiện phép cộng ở phần tử thứ n (phần tử cuối cùng)
	if (a[0] + b[0] + nho_Tam == 0) {
		kq[0] = 0;
	}

	else if (a[0] + b[0] + nho_Tam == 1) {
		kq[0] = 1;
	}

	else if (a[0] + b[0] + nho_Tam == 2) {
		kq[0] = 0;
		nho_Tam = 1;
	}

	else if (a[0] + b[0] + nho_Tam > 2) {
		kq[0] = 1;
		nho_Tam = 1;
	}

	return kq;
}

//Trừ 2 số nhị phân 
vector<bool> QIntCalculator::QintC::subtractBIN(vector<bool> a, vector<bool> b) {
	vector<bool> kq(128);
	int nho_Tam = 0;

	vector <bool> bu_1; //Lấy bù 1 của b
	for (int i = 0; i < 128; i++)
	{
		if (b[i] == 0)
			bu_1.push_back(1);
		else
			bu_1.push_back(0);
	}

	vector <bool> one; //tạo bit 1

	for (int i = 0; i < 127; i++) {
		one.push_back(0);
	}
	one.push_back(1);

	vector <bool> bu_2 = addBIN(bu_1, one); //Lấy bù 2 của b

	kq = addBIN(a, bu_2); //a + bù 2 của b
	return kq;
}

// Phép AND nhị phân
vector<bool> QIntCalculator::QintC::andBIN(vector<bool> a, vector<bool> b) {
	vector<bool> kq(128);

	for (int i = a.size() - 1; i > -1; i--) {
		if (a[i] * b[i] == 1) {
			kq[i] = 1;
		}
		else {
			kq[i] = 0;
		}
	}
	return kq;
}

//Phép OR nhị phân
vector<bool> QIntCalculator::QintC::orBIN(vector<bool> a, vector<bool> b) {
	vector<bool> kq(128);

	for (int i = a.size() - 1; i > -1; i--) {
		if (a[i] + b[i] == 0) {
			kq[i] = 0;
		}
		else {
			kq[i] = 0;
		}
	}
	return kq;
}

//Phép XOR nhị phân
vector<bool> QIntCalculator::QintC::xorBIN(vector<bool> a, vector<bool> b) {
	vector<bool> kq(128);

	for (int i = a.size() - 1; i > -1; i--) {
		if (a[i] = b[i]) {
			kq[i] = 0;
		}
		else {
			kq[i] = 1;
		}
	}
	return kq;
}

//Phép NOT nhị phân
vector<bool> QIntCalculator::QintC::notBIN(vector<bool> a) {
	vector<bool> kq(128);

	for (int i = a.size() - 1; i > -1; i--) {
		if (a[i] == 1) {
			kq[i] = 0;
		}
		else {
			kq[i] = 1;
		}
	}
	return kq;
}


//Phép chia nhị phân
vector<bool> QIntCalculator::QintC::divideBIN(vector<bool> Q, vector<bool> M) {
	vector<bool> TEMP(128);
	vector<bool> SL(256);
	vector<bool> KQ(128);
	vector<bool> one(127);
	one.push_back(1);

	if (Q == M) {  //2 số giống nhau kq=1
		return one;
	}

	int dem = 0;  //số chia bằng 0
	for (int i = 0; i < (int)Q.size(); i++) {
		if (Q[i] == 0) {
			dem++;
		}
		if (dem == 128) {
			return TEMP;
		}
	}

	if (Q[0] == 1) { //nếu Q là số âm thì TEMP mang n bit 1
		for (int i = 0; i < (int)TEMP.size(); i++) {
			TEMP[i] = 1;
		}
	}
	for (int i = 0; i < 128; i++) {  //gán TEMP và Q vào 1 thanh ghi để dịch bit
		SL[i] = TEMP[i];
	}
	for (int i = 0; i < 128; i++) {
		SL[i + 127 + 1] = Q[i];
	}

	int k = TEMP.size();
	for (; k > 0; k--) {
		SL = shiftLEFT(SL, 1);  //dịch trái TEMP và Q
		TEMP = tachBIT(SL, 0, 128);  //tách TEMP từ SL để thực hiện phép tính
		if (M[0] == 0) {  //nếu M là số dương thì TEMP=TEMP-M
			TEMP = subtractBIN(TEMP, M);
		}
		else {              //nếu M là số âm thì TEMP=TEMP+M
			TEMP = addBIN(TEMP, M);
		}
		SL = ganBIT(SL, TEMP);  //chuyển TEMP sau khi tính trở lại thanh ghi
		if (SL[0] == 1) {    //khi TEMP âm 
			SL[255] = 0;
			if (M[0] == 0) {
				TEMP = addBIN(TEMP, M);
			}
			else {
				TEMP = subtractBIN(TEMP, M);
			}
			SL = ganBIT(SL, TEMP);
		}
		else { //khi TEMP dường thì bit cuối cùng của Q là 1
			SL[255] = 1;
		}

	}
	KQ = tachBIT(SL, 128, 256);
	if (M[0] == 0) {
		return KQ;
	}
	else {  //chuyển kết quả về số âm
		KQ = notBIN(KQ);
		vector<bool> one(127);
		one.push_back(1);
		KQ = addBIN(KQ, one);
		return KQ;
	}
}

vector<bool> QIntCalculator::QintC::shiftLEFT(vector<bool> a, int b) {
	for (int i = 0; i < (int)a.size() - b; i++) {
		a[i] = a[i + b];
	}
	for (int i = (int)a.size() - b; i < (int)a.size(); i++) {
		a[i] = 0;
	}
	return a;
}

vector<bool> QIntCalculator::QintC::tachBIT(vector <bool> a, int x, int y) {
	vector<bool>kq(128);
	int temp = 0;
	for (int i = x; i < y; i++) {
		kq[temp] = a[i];
		temp++;
	}
	return kq;
}

vector<bool> QIntCalculator::QintC::ganBIT(vector <bool> a, vector<bool> b) {
	for (int i = 0; i < (int)b.size(); i++) {
		a[i] = b[i];
	}
	return a;
}

//Lấy hệ hiện tại của input
int QIntCalculator::QintC::GetNumeralSystemInput()
{
	if (instance->rbBIN->Checked == true)
		return 2;	//hệ nhị phân
	if (instance->rbDEC->Checked == true)
		return 10;	//hệ thập phân
	return 16;		//hệ thập lục phân

}
//Xử lí phép tính
string QIntCalculator::QintC::EquationProcess(vector<string> s)
{
	string ans = ""; //đáp số của phép toán, dạng chuỗi
	int curNS; //current numeral system = hệ đếm hiện tại
	Int32::TryParse(str_to_Str(s[0]), curNS);
	//Xét vector chứa bao nhiêu phần tử
	//4 phần tử là phép tính: hệ - obj1 - operator - obj2
	//3 phần tử: hệ - hệ đổi - main_obj (hệ đổi = 0 là đổi sang 2 hệ còn lại)
	if (s.size() == 4)
	{
		/*vector<bool> obj;
		if (s[2] == "~")
		{
			Qint tmp = BinToDec(obj);
			~tmp;
			obj = DecToBin(tmp);
			switch (curNS)
			{
			case 2: ans = BinToStrBin(obj); break;
			case 10: ans = BinToDecStr(obj); break;
			case 16: ans = BinToHex(obj); break;
			}
			return ans;
		}*/

		Qint obj1, obj2;
		//Chuyển số dạng chuỗi về vector bool
		switch (curNS)
		{
		case 2: {
			obj1 = BinToDec(StrBinToBin(s[1]));
			obj2 = BinToDec(StrBinToBin(s[3]));
		}; break;
		case 10: {
			obj1 = BinToDec(StrDecToBin(s[1]));
			obj2 = BinToDec(StrDecToBin(s[3]));
		}; break;
		case 16: {
			obj1 = HexToDec(s[1]);
			obj2 = HexToDec(s[3]);
		}; break;
		};
		Qint result;
		char opr = s[2][0];
		//Xét toán tử
		switch (opr)
		{
		case '+': result = obj1 + obj2; break;
		case '-': result = obj1 - obj2; break;
		case '*': result = obj1 * obj2; break;
		case '/': result = obj1 / obj2; break;
		case '&': result = obj1 & obj2; break;
		case '|': result = obj1 | obj2; break;
		case '^': result = obj1 ^ obj2; break;
		case '<':
		{
			int dec = 0;
			Int32::TryParse(str_to_Str(s[3]), dec);
			obj1 << dec;
			result = obj1;
		}; break;
		case '>':
		{
			int dec = 0;
			Int32::TryParse(str_to_Str(s[3]), dec);
			obj1 >> dec;
			result = obj1;
		}; break;
		}
		switch (curNS)
		{
		case 2: ans = BinToStrBin(DecToBin(result)); break;
		case 10: ans = BinToDecStr(DecToBin(result)); break;
		case 16: ans = DecToHex(result); break;
		};
	}
	//đổi hệ
	else if (s.size() == 3)
	{
		vector<bool> obj;
		switch (curNS)
		{
		case 2: obj = StrBinToBin(s[2]); break;
		case 10: obj = StrDecToBin(s[2]); break;
		case 16: obj = HexToBin(s[2]); break;
		}
		if (s[1] == "~")
		{
			Qint tmp = BinToDec(obj);
			~tmp;
			switch (curNS)
			{
			case 2: return BinToStrBin(DecToBin(tmp));
			case 10: return BinToDecStr(DecToBin(tmp));
			case 16: return DecToHex(tmp);
			}
		}
		int desNS; //destination numeral system = hệ đếm đích
		Int32::TryParse(str_to_Str(s[1]), desNS);
		switch (desNS)
		{
		case 0:
		{
			if (curNS == 2)
				ans = "DEC: " + BinToDecStr(obj) + Str_to_str(Environment::NewLine) + "HEX: " + BinToHex(obj);
			else if (curNS == 10)
				ans = "BIN: " + HexToBin_Str(BinToHex(obj)) + Str_to_str(Environment::NewLine) + "HEX: " + BinToHex(obj);
			else if (curNS == 16)
				ans = "BIN: " + HexToBin_Str(BinToHex(obj)) + Str_to_str(Environment::NewLine) + "DEC: " + BinToDecStr(obj);
		}; break;
		case 2: ans = HexToBin_Str(BinToHex(obj)); break;
		case 10: ans = BinToDecStr(obj); break;
		case 16: ans = BinToHex(obj); break;
		}
	}

	while (ans[0] == '0' && ans.size()>1)
		ans.erase(ans.begin());	
	return ans;
}
void QIntCalculator::QintC::ShowAnswer(String^ ans)
{
	instance->tbOutput->Text = ans;
}
