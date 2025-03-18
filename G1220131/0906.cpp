#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<string.h>
using namespace std;
void swap(char *x, char *y)
{
	if (strlen(x) > strlen(y))
	{
		char temp[64] = { 0 };
		strcpy(temp, x);
		strcpy(x, y);
		strcpy(y, temp);
	}
	else
	{
		char temp[64] = { 0 };
		strcpy(temp, y);
		strcpy(y, x);
		strcpy(x, temp);
	}
}
int main()
{
	char str1[64], str2[64], str3[64];
	cin>>str1>>str2>>str3;
	if (strcmp(str1, str2) == 1)
	{
		swap(str1, str2);
	}
	if (strcmp(str1, str3) == 1)
	{
		swap(str1, str3);
	}
	if (strcmp(str2, str3) == 1)
	{
		swap(str2, str3);
	}
	cout << str1 << '\t' << str2 << '\t' << str3;
}