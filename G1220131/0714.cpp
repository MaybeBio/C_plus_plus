#include<iostream>
using namespace std;
void reverse(char s[])
{
	char t;
	int num = strlen(s);
	for (int i = 0; i < num / 2; i++)
	{
		t = s[i]; s[i] = s[num - i - 1]; s[num - i - 1] = t;
	}
}
int main()
{
	char a[128];
	cin >> a;
	reverse(a);
	cout << a;
}