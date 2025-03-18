#include<iostream>
using namespace std;

int my_strlen(char* s)
{
	int i = 0;
	while (s[++i] != '\0');
	return i;
}
int main()
{
	char a[64];
	cin >> a;
	cout << my_strlen(a);
}