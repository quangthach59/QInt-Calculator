using namespace System;
using namespace System::Windows::Forms;

#include <string>
#include <vector>
#include <iostream>
#include "QintC.h"

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
		Qint BinToDec(vector<bool> x);
		void PrintQInt(Qint Q);
		int GetBit(Qint a, int i);
		vector<bool> DecToBin(Qint Q);
		string Translate(char Hex);
		string HexToBin_Str(string H);
		vector<bool> StrBinToBin(string bin);
		vector<bool> HexToBin(string H);
		int IntDiv2(string &Dec);
		vector<bool> StrDecToBin(string Dec);
		string Multiply(string &a);
		string Power(int n);
		string Sum(string a, string b);
		string BinToDecStr(vector<bool> Bin);
		void operator~();
		void timViTriSet(int &vitri, int i);
		void ScanQInt(Qint &x);
		char BitTo1Hex(bool bit[4]);
		string BinToHex(vector<bool> Bin);
		vector<string> GetStringInput(string s);
		static int GetNumeralSystemInput();
		static void EquationProcess(vector<string> s);
		vector<bool> addBIN(vector<bool> a, vector<bool> b);
		vector<bool> subtractBIN(vector<bool> a, vector<bool> b);
		vector<bool> andBIN(vector<bool> a, vector<bool> b);
		vector<bool> orBIN(vector<bool> a, vector<bool> b);
		vector<bool> xorBIN(vector<bool> a, vector<bool> b);
		vector<bool> notBIN(vector<bool> a);
	};
}