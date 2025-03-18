#include<iostream>
using namespace std;
void my_strcpy(char s1[], char s2[])
{
	int i = 0;
	while (0 != s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
}
int main()
{
	char a[128] = { 0 }, b[128] = { 0 };
	cin >> b;
	my_strcpy(a, b);
	cout << a << '\t' << b;
}