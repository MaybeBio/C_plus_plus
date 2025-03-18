#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<string.h>
using namespace std;
void replace(char s1[], char s2[], char s3[])
{
	int long1 = strlen(s1);
	int long2 = strlen(s2);
	int long3 = strlen(s3);
	int place = 0;
	while (place < long1)
	{
		if (0 == strncmp(s1 + place, s2, long2))
		{
			break;
		}
		place++;
	}
	if (place < long1)
	{
		char fuzhu[1024] = { 0 };
		strncpy(fuzhu, s1, place);
		strcat(fuzhu, s3);
		strcat(fuzhu, s1 + place + long2);
		strcpy(s1, fuzhu);
	}
}
int main()
{
	char s1[512] = "Today are Monday";
	char s2[] = "are";
	char s3[] = "is";
	cout << s1 << endl;
	replace(s1, s2, s3);
	cout << s1 << endl;
}