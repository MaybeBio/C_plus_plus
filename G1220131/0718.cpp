#include<iostream>
using namespace std;

//十进制整数转换成十进制数字字符数组
void int_to_dec(int n, char s[])
{
	int bits = 0;
	while (n)
	{
		s[bits++] = '0' + n % 10;
		n /= 10;
	}
	for (int i = 0; i < bits / 2; i++)
	{
		char c = s[i];
		s[i] = s[bits - 1 - i]; s[bits - 1 - i] = c;
	}
}
//十进制整数转换成二进制数字字符数组
void int_to_bin(int n, char s[])
{
	int bits = 0;
	while (n)
	{
		s[bits++] = '0' + n % 2;
		n /= 2;
	}
	for (int i = 0; i < bits / 2; i++)
	{
		char c = s[i];
		s[i] = s[bits - 1 - i]; s[bits - 1 - i] = c;
	}
}
//8
void int_to_oct(int n, char s[])
{
	int bits = 0;
	while (n)
	{
		s[bits++] = '0' + n % 8;
		n /= 8;
	}
	for (int i = 0; i < bits / 2; i++)
	{
		char c = s[i];
		s[i] = s[bits - 1 - i]; s[bits - 1 - i] = c;
	}
}
//16
void int_to_hex(int n, char s[])
{
	int bits = 0;
	while (n)
	{
		int t = n % 16;
		if (t < 10)
		{
			s[bits++] = '0' + t;
			n /= 16;
		}
		else
		{
			s[bits++] = 'A' + t - 10;
			n /= 16;
		}
	}
	for (int i = 0; i < bits / 2; i++)
	{
		char c = s[i];
		s[i] = s[bits - 1 - i]; s[bits - 1 - i] = c;
	}
}

void int_to_radix(int n, char s[], int r)
{
	int bits = 0;
	if (r <= 10)
	{
		while (n)
		{
			s[bits++] = '0' + n % r;
			n /= r;
		}
	}
	else
	{
		while (n)
		{
			int t = n % r;
			if (t < 10)
			{
				s[bits++] = '0' + t;
				n /= r;
			}
			else
			{
				s[bits++] = 'A' + t - 10;
				n /= r;
			}
		}
	}
	for (int i = 0; i < bits / 2; i++)
	{
		int c = s[i];
		s[i] = s[bits - 1 - i]; s[bits - 1 - i] = c;
	}
}
int main()
{
	while (1)
	{
		int n, r; char s[1024] = { 0 };
		cout << "Plese enter the number and the number system" << endl;
		cin >> n >> r;
		while (n < 0 || r < 2 || r>16)
		{
			cout << "error!!!" << endl;
			cin >> n >> r;
		}
		cout << "the decimal number is " << n << endl;
		int_to_radix(n, s, r);
		cout << "the system is " << r << '\n' << "the changed number is " << s<<endl;
	}
}