#include<iostream>
using namespace std;

void getDigits(char* s1, char* s2)
{
	int _long = strlen(s1);
	int j = 0;
	for (int i = 0; i < _long; i++)
	{
		if ('0' <= s1[i] && s1[i] <= '9')
		{
			s2[j++] = s1[i];
		}
	}
}
int main()
{
	char a1[64];
	char a2[64];
	cin >> a1 ;
	getDigits(a1, a2);
	cout << a2;
}