#include<iostream>
using namespace std;

bool isLetter(char x)
{
	if ('a' <= x && x <= 'z' || 'A' <= x && x <= 'Z')
	{
		return true;
	}
	return false;
}
char toUpper(char x)
{
	if ('a' <= x &&x <= 'z')
	{
		x = x - 32;
	}
	return x;
}
void firstUpper(char* s)
{
	int i = 0;
	bool _swich = true;
	while (s[i])
	{
		if (isLetter(s[i]))
		{
			if (_swich)
			{
				s[i] = toUpper(s[i]);
				_swich = false;
			}
		}
		else
		{
			_swich = true;
		}
		i++;
	}
}
int main()
{
	char a[64];
	cin.getline(a, 65);
	firstUpper(a);
	cout << a;
}