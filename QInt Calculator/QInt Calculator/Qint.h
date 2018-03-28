#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
class Qint
{
	
private:

public:
	int data[4];
	Qint();
	~Qint();

};
//Chuyển từ 2 qua 10
//Input: Chuỗi nhị phân
//Output: Chuỗi thập phân
string BinToDecStr(vector<bool> Bin);
vector<bool> DecToBin(Qint x);
//void CreateQint(Qint &Q);

//Hàm đổi Nhị Phân sang Qint
//Input: Số nhị phân (bool *x)
//output: Số Qint tương ứng
Qint BinToDec(vector<bool> x);

//Hàm show bit của Qint
void PrintQInt(Qint Q);

//Hàm lấy giá trị bit ở vị trí thứ i
int GetBit(Qint a, int i);

//Hàm lấy bit từ Qint ra Mảng bool
//Input: Số nguyên lớn(Qint Q)
//Output: Mảng động bool nhị phân
vector<bool> DecToBin(Qint Q);





//-----------------------------------------------
//XỬ LÝ ĐỔI HỆ 16 VỀ NHỊ PHÂN 

//Hàm chuyển từng kí tự từ hệ 16 sang Binary tương ứng
//Input: Kí tự hệ 16(char Hex)
//Output: Chuỗi Bit tương ứng (string)
string Translate(char Hex);

//Hàm chuyển hệ 16 sang Hệ 2 (dạng chuỗi)
//Input: Chuỗi hệ cơ số 16 (string H)
//Output: Chuỗi nhị phân tương ứng(string)
string HexToBin_Str(string H);

//Hàm chuyển chuỗi Bit sang mảng Bool
//Input: Chuỗi Bit (string bin)
//Output: Mảng động bool chứa mã Bit tương ứng chuỗi (bool*)
vector<bool> StrBinToBin(string bin);

//Hàm chuyển từ chuỗi hệ 16 sang Nhị Phân
//Input: Chuỗi hệ 16 (String H)
//Output: Mảng bool hệ Nhị Phân
vector<bool> HexToBin(string H);

//Hàm chứ từ điển chuyển Bit sang Hex
char BitTo1Hex(bool bit[4]);

//Hàm chuyển Nhị Phân sang Thập Lục Phân
//Input: Số nhị phân(bool *bin)
//Output: CHuỗi chứa hệ 16 tương ứng(char*)
string BinToHex(vector<bool> Bin);


//-----------------------------------------------------------------
//XỬ LÝ NHỊ PHÂN

//Hàm Chia một số Thập Phân cho 2
//Input: Chuỗi số Thập Phân(String Dec)
//Output: CHuỗi Thập Phân kết quả
int IntDiv2(string &Dec);
vector<bool> StrDecToBin(string Dec);


//Hàm nhập số Qint
void ScanQInt(Qint &x);

vector<string> GetStringInput(string s);
int GetNumeralSystemInput();
static void EquationProcess(vector <string> s);

//Cộng 2 số nhị phân
vector<bool> addBIN(vector<bool> a, vector<bool> b);
//Trừ 2 số nhị phân 
vector<bool> subtractBIN(vector<bool> a, vector<bool> b);
// Phép AND nhị phân
vector<bool> andBIN(vector<bool> a, vector<bool> b);
//Phép OR nhị phân
vector<bool> orBIN(vector<bool> a, vector<bool> b);
//Phép XOR nhị phân
vector<bool> xorBIN(vector<bool> a, vector<bool> b);
//Phép NOT nhị phân
vector<bool> notBIN(vector<bool> a);