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

		//Hàm dịch bit sang trái 1 đơn vị
		void ShiftLeft_1()
		{
			bool temp;
			for (int i = 1; i < 4; i++)
			{
				temp = GetBit(*this, 127 - i * 32);
				data[i - 1] = data[i - 1] << 1;
				if (i < 4 && temp == 1)
				{
					data[i - 1] = data[i - 1] | 1;
				}
			}
			data[3] = data[3] << 1;
		};
		//Hàm dịch bit sang phải 1 đơn vị
		void ShiftRight_1()
		{
			bool temp = 0;
			for (int i = 3; i >= 0; i--)
			{
				data[i] = data[i] >> 1;
				if (i > 0)
				{
					temp = GetBit(*this, (4 - i) * 32);
					if (temp == 1)
						data[i] = data[i] | (1 << 31);
					if (temp == 0)
						data[i] &= ~(1 << 31);

				}
			}
		};

		void operator<<(int x)
		{
			for (int i = 0; i < x; i++)
			{
				ShiftLeft_1();
			}
		};
		int GetBit(Qint a, int i)
		{
			return (a.data[(127 - i) / 32] >> (i)) & 1;
		};
		vector<bool> DecToBin(Qint Q)
		{
			vector<bool> a;
			for (int i = 127; i >= 0; i--)
			{
				int temp = GetBit(Q, i);
				a.push_back(temp);
			}
			return a;
		};
		Qint BinToDec(vector<bool> x)
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
		};
		string BinToStrBin(vector<bool> x)
		{
			string kq = "";
			for (int i = 0; i < 128; i++)
			{
				kq = kq + (char)(x[i] + 48);
			}
			return kq;
		}
		void SetBit(Qint &a, int bit, int i)
		{
			if (bit == 0)
			{
				a.data[i / 32] &= ~(1 << 31 - (i % 32));
			}
			else
			{
				a.data[i / 32] |= (1 << 31 - (i % 32));
			}
		}
		vector<bool> addBIN(vector<bool> a, vector<bool> b) {
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
		vector<bool> subtractBIN(vector<bool> a, vector<bool> b) {
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
		void operator>>(int x)
		{
			for (int i = 0; i < x; i++)
			{
				ShiftRight_1();
			}
		};

		Qint operator&(Qint x)
		{
			Qint kq;
			for (int i = 0; i < 4; i++)
			{
				kq.data[i] = data[i] & x.data[i];
			}
			return kq;
		};
		Qint operator|(Qint x)
		{
			Qint kq;
			for (int i = 0; i < 4; i++)
			{
				kq.data[i] = data[i] | x.data[i];
			}
			return kq;
		};
		Qint operator^(Qint x)
		{
			Qint kq;
			for (int i = 0; i < 4; i++)
			{
				kq.data[i] = data[i] ^ x.data[i];
			}
			return kq;
		};
		void operator~()
		{
			for (int i = 0; i < 4; i++)
			{
				data[i] = ~data[i];
			}
		};
		Qint operator+(Qint x)
		{
			vector<bool> a1 = DecToBin(*this);
			vector<bool> a2 = DecToBin(x);
			return BinToDec(addBIN(a1, a2));
		};
		Qint operator-(Qint x)
		{
			vector<bool> a1 = DecToBin(*this);
			vector<bool> a2 = DecToBin(x);
			return BinToDec(subtractBIN(a1, a2));
		};
	/*	Qint operator *(Qint &x)
		{
			Qint A;
			int q = 0;
			for (int i = 0; i < 128; i++)
			{
				if (GetBit(*this, 0) != q)
				{
					if (q == 1)
						A = A + x;
					else
						A = A - x;
				}
				q = GetBit(*this, 0);
				int bit = GetBit(A, 0);
				A >> 1;
				*this >> 1;
				SetBit(*this, bit, 0);
			}
			return *this;
		}*/
		Qint operator*(Qint x)
		{
			Qint temp;
			Qint temp1 = *this;
			for (int i = 0; i < 128; i++)
			{
				if (GetBit(x, i) == true)
				{
					temp = temp + temp1;
				}
				temp1 << 1;
			}
			return temp;
		}
		Qint operator/(Qint M)
		{
			Qint A;
			bool KhacDau = GetBit(*this, 127) ^ GetBit(*this, 127);
			if (GetBit(*this, 127) == 1)
			{
				A.data[0] = A.data[1] = A.data[2] = A.data[3] = -1;
			}
			for (int i = 0; i < 128; i++)
			{
				int bit = GetBit(*this, 127);
				A << 1;
				*this << 1;
				SetBit(A, bit, 127);
				int bitA = GetBit(A, 127);
				Qint ABackup = A;
				if (GetBit(A, 127) ^ GetBit(M, 127) == 0)
				{
					A = A - M;
				}
				else
				{
					A = A + M;
				}
				if (bitA == GetBit(A, 127))
				{
					SetBit(*this, 1, 127);
				}
				else
				{
					A = ABackup;
					SetBit(*this, 0, 127);
				}
			}
			if (KhacDau)
			{
				for (int i = 0; i < 128; i++)
				{
					data[i / 32] ^= (1 << 31 - (i % 32));
				}
				int k = 1;
				for (int i = 127; i >= 0; i--)
				{
					if (k == 1)
					{
						if (((data[i / 32] >> 31 - (i % 32)) & 1) == 0) k = 0;
						data[i / 32] ^= (1 << 31 - (i % 32));
					}
				}
			}
			M = A;
			return *this;
		}
	};
}