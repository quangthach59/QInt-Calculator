using namespace System;
using namespace System::Windows::Forms;
using namespace std;
#include <string>
#include <vector>
#include <iostream>
namespace QIntCalculator {
	using namespace QIntCalculator;
	public class Qint
	{
	private:

	public:
		int data[4];
		//Hàm dựng
		Qint(void);
		//Hàm hủy
		~Qint(void);
	};
	string Str_to_str(String^ s);
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

	void timViTriSet(int &vitri, int i);
	void ScanQInt(Qint &x);

	//void operator~();

	vector<string> GetStringInput(string s);

	vector<bool> addBIN(vector<bool> a, vector<bool> b);
	vector<bool> subtractBIN(vector<bool> a, vector<bool> b);
	vector<bool> andBIN(vector<bool> a, vector<bool> b);
	vector<bool> orBIN(vector<bool> a, vector<bool> b);
	vector<bool> xorBIN(vector<bool> a, vector<bool> b);
	vector<bool> notBIN(vector<bool> a);
	static int GetNumeralSystemInput();
	extern void EquationProcess(vector<string> s);
}