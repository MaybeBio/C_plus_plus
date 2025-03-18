#include<iostream>
using namespace std;
int main()
{
	int b[5] = { 0 };
	char a[128] = {0};
	cin.getline(a, 128);
	for (int i = 0; i < 128; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			b[0]++;
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			b[1]++;
		}
		else if (a[i] >= '0' && a[i] <= '9')
		{
			b[2]++;
		}
		else if (a[i] == ' ')
		{
			b[3]++;
		}
		else if (a[i] != 0)
		{
			b[4]++;
		}
	}
	cout << "A-B " << b[0] << '\n' << "a-b " << b[1] << '\n' << "0-9 " << b[2] << '\n' << "blank " << b[3] << '\n' << "else " << b[4];
}
