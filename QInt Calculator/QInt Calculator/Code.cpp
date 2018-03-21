#include"Code.h"



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
bool* StrBinToBin(string bin)
{
	bool *a = new bool[bin.length()];
	for (int i = 0; i < bin.length(); i++)
	{
		a[i] = bin[i] - 48;
	}
	return a;
}

//Hàm chuyển từ chuỗi hệ 16 sang Nhị Phân
//Input: Chuỗi hệ 16 (String H), độ dài chuỗi H (int &len)
//Output: Mảng bool hệ Nhị Phân
bool* HexToBin(string H, int &len)
{
	string kq = HexToBin_Str(H);
	len = kq.length();
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
