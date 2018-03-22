#include"Code.h"

void CreateQint(Qint &Q)
{
	Q.data[0] = Q.data[1] = Q.data[2] = Q.data[3] = 0;
}

//Hàm đổi Nhị Phân sang Qint
//Input: Số nhị phân (bool *x)
//output: Số Qint tương ứng
Qint BinToDec(vector<bool> x)
{
	Qint Q;
	CreateQint(Q);
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

void Showbit(Qint Q)
{
	for (int i = 0; i < 128; i++)
	{

		cout << ((Q.data[i / 32] >> 31 - (i % 32)) & 1);
	}
	cout << endl;
}

int GetBit(Qint a, int i)
{
	return (a.data[i / 32] >> (31 - (i % 32))) & 1;
}

//Hàm lấy bit từ Qint ra Mảng bool
//Input: Số nguyên lớn(Qint Q)
//Output: Mảng động bool nhị phân
vector<bool> DecToBin(Qint Q)
{
	vector<bool> a;
	for (int i = 0; i < 128; i++)
	{
		int temp = GetBit(Q, i);
		a.push_back(temp);
	}
	return a;
}

//Hàm chuyển từng kí tự từ hệ 16 sang Binary tương ứng
//Input: Kí tự hệ 16(char Hex)
//Output: Chuỗi Bit tương ứng (string)
string Translate(char Hex)
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
}

//Hàm chuyển hệ 16 sang Hệ 2 (dạng chuỗi)
//Input: Chuỗi hệ cơ số 16 (string H)
//Output: Chuỗi nhị phân tương ứng(string)
string HexToBin_Str(string H)
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
vector<bool> StrBinToBin(string bin)
{
	vector<bool> a;
	for (int i = 0; i < bin.length(); i++)
	{
		a.push_back(bin[i] - 48);
	}
	return a;
}

//Hàm chuyển từ chuỗi hệ 16 sang Nhị Phân
//Input: Chuỗi hệ 16 (String H), độ dài chuỗi H (int &len)
//Output: Mảng bool hệ Nhị Phân
vector<bool> HexToBin(string H)
{
	string kq = HexToBin_Str(H);
	return StrBinToBin(kq);
}

//Hàm Chia một số Thập Phân cho 2
//Input: Chuỗi số Thập Phân(String Dec)
//Output: CHuỗi Thập Phân kết quả
string IntDiv2(string Dec)
{
	int nho = 0;
	for (int i = 0; i < Dec.length(); i++)
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
	return Dec;
}


