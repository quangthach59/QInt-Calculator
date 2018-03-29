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
		nho = (int)(k >= 10);
	}
	if (nho == 1)
	{
		a = '1' + a;
	}
	return a;
}
//Hàm Power tunhs 2 mũ n
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
		nho = (int)(k >= 10);
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
	return Result;
}
//Hàm lấy bit từ Qint ra Mảng bool
//Input: Số nguyên lớn(Qint Q)
//Output: Mảng động bool nhị phân
vector<bool> QIntCalculator::QintC::DecToBin(Qint Q)
{
	vector<bool> a;
	for (int i = 0; i < 128; i++)
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
	while (Hex[0] == '0')
	{
		Hex.erase(Hex.begin());
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
	while (str[0] == '0')
	{
		str.erase(str.begin());
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
	return (a.data[i / 32] >> (31 - (i % 32))) & 1;
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
			p2 = p + p;
		}
		else
		{
			p3 = s.substr(n + 1, s.length() - 1);
			p2 = p;
		}
		str.push_back(p1);
		str.push_back(p2);
		str.push_back(p3);
	}
	//Không có operator, là phép đổi cơ số
	else
	{
		str.push_back(s);
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
	vector <bool> bu_1 = notBIN(b); //Lấy bù 1 của b
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
vector<bool> QIntCalculator::QintC::notBIN(vector<bool> a)
{
	vector<bool> kq(128);
	for (int i = a.size() - 1; i > -1; i--)
	{
		if (a[i] == 1)
		{
			kq[i] = 0;
		}
		else
		{
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
		vector<bool> temp(127);
		temp.push_back(1);
		KQ = addBIN(KQ, temp);
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
	if (QintC::instance->rbDEC->Checked == true)
		return 10;	//hệ thập phân
	return 16;		//hệ thập lục phân

}
//Xử lí phép tính
void QIntCalculator::QintC::EquationProcess(vector<string> s)
{
	//có thực hiện với toán tử
	if (s.size() == 3)
	{
		switch (GetNumeralSystemInput())
		{
		case 2: break;
		case 10: break;
		case 16: break;
		};
		char opr = s[1][0];
		switch (s[1][0])
		{
		case '+': break;
		case '-': break;
		case '*': break;
		case '/': break;
		case '&': break;
		case '|': break;
		case '^': break;
		case '~': break;
		case '<': case '>': break;
		}
	}
	//đổi hệ đơn giản vì máy tính không cho nhập khoảng trắng
	else if (s.size() == 1)
	{
		string result = "";
		switch (GetNumeralSystemInput())
		{
		case 2:
		{
			result = "DEC: " + BinToDecStr(StrBinToBin(s[0])) + Str_to_str(System::Environment::NewLine) + "HEX: " + BinToHex(StrBinToBin(s[0]));
		}; break;
		case 10:
		{
			result = "BIN: " + HexToBin_Str(BinToHex(StrDecToBin(s[0]))) + Str_to_str(System::Environment::NewLine) + "HEX: " + DecToHex(BinToDec(StrDecToBin(s[0])));
		}; break;
		case 16:
		{
			result = "BIN: " + HexToBin_Str(s[0]) + Str_to_str(System::Environment::NewLine) + "DEC: " + BinToDecStr(HexToBin(s[0]));
		}; break;		
		}
		instance->tbOutput->Text = str_to_Str(result);
	}
}