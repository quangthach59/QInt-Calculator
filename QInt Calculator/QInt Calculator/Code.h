#pragma once
#include<iostream>
#include<string>

using namespace std;

class Qnit
{
private:
	int data[4];
public:
	Qnit()
	{
		data[0] = data[1] = data[2] = data[3] = 0;
	}

	void SetQnit(bool *x, int len)
	{
		for (int i = 0; i < len; i++)
		{
			if (x[i] == 1)
			{
				data[4 - len / 32 - 1] |= (1 << (32 - len % 32 - 1));
			}
		}
	}

	void Showbit()
	{
		for (int i = 0; i < 128; i++)
		{

			cout << ((data[i / 32] >> 31 - (i % 32)) & 1);
		}
		cout << endl;
	}
};

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
bool* StrBinToBin(string bin);

//Hàm chuyển từ chuỗi hệ 16 sang Nhị Phân
//Input: Chuỗi hệ 16 (String H), độ dài chuỗi H (int &len)
//Output: Mảng bool hệ Nhị Phân
bool* HexToBin(string H, int &len);



//-----------------------------------------------------------------
//XỬ LÝ NHỊ PHÂN

//Hàm Chia một số Thập Phân cho 2
//Input: Chuỗi số Thập Phân(String Dec)
//Output: CHuỗi Thập Phân kết quả
string IntDiv2(string Dec);