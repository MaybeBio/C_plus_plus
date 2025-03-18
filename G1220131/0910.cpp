#include<iostream>
using namespace std;
void filter(char* p)
{
	int i = 0, j = 0;		//i向前搜查，j停留在改变位的后一位
	while (p[i])
	{
		if (isalpha(p[i]))
		{
			p[j] = toupper(p[i]);
			j++;
		}
		i++;
	}
	p[j] = 0;
}
bool palin(char* p)
{
	char s[65];
	int i = 0;
	while (p[i])
	{
		s[i] = p[i];
		i++;
	}
	s[i] = 0;
	filter(s);
	int head = 0, tail = strlen(s) - 1;
	while (head < tail)
	{
		if (s[head] != s[tail])
		{
			return false;
		}
		head++; tail--;
	}
	return true;
}
int main()
{
	char in[64];
	cout << "Please Enter Your Text:" << endl;
	cin.getline(in, 65);
	if (palin(in))
	{
		cout << "Yes!" << endl;
	}
	else
	{
		cout << "No!" << endl;
	}
}