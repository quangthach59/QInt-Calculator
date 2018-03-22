#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Qint
{
	int data[4];
};

void CreateQint(Qint &Q);

//Hàm đổi Nhị Phân sang Qint
//Input: Số nhị phân (bool *x)
//output: Số Qint tương ứng
Qint BinToDec(vector<bool> x);

//Hàm show bit của Qint
void Showbit(Qint Q);

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

////Hàm chứ từ điển chuyển Bit sang Hex
//char BitTo1Hex(bool bit[4])
//{
//	int value = bit[0] * pow(2, 3) + bit[1] * pow(2, 2) + bit[2] * pow(2, 1) + bit[3];
//	switch (value)
//	{
//	case 0: return '0';
//	case 1: return '1';
//	case 2: return '2';
//	case 3: return '3';
//	case 4: return '4';
//	case 5: return '5';
//	case 6: return '6';
//	case 7: return '7';
//	case 8: return '8';
//	case 9: return '9';
//	case 10: return 'A';
//	case 11: return 'B';
//	case 12: return 'C';
//	case 13: return 'D';
//	case 14: return 'E';
//	case 15: return 'F';
//	}
//}
//
//char* CreatBin()
//{
//	char *a = new char[128];
//	for (int i = 0; i < 128; i++)
//	{
//		a[i] = 0;
//	}
//	return a;
//}
//
////Hàm chuyển Nhị Phân sang Thập Lục Phân
////Input: Số nhị phân(bool *bin)
////Output: CHuỗi chứa hệ 16 tương ứng(char*)
//char* BinToHex(bool *bit)
//{
//	char* kq = CreatBin();
//	int n = 0;
//	bool temp[4];
//	for (int i = 127; i >= 0; i--)
//	{
//		if (i % 4 == 0  && i != 0)
//		{
//			kq[n] = BitTo1Hex(temp);
//			n++;
//		}
//		temp[i % 4] = bit[i];
//
//	}
//}



//-----------------------------------------------------------------
//XỬ LÝ NHỊ PHÂN

//Hàm Chia một số Thập Phân cho 2
//Input: Chuỗi số Thập Phân(String Dec)
//Output: CHuỗi Thập Phân kết quả
string IntDiv2(string Dec);