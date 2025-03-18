#include<iostream>
using namespace std;
void interCross(char s1[], char s2[], char s3[])
{
	int i = 0, j = 0, k = 0;
	while (1)
	{
		if (s1[i])
		{
			s3[k++] = s1[i++];
		}
		if (s2[j])
		{
			s3[k++] = s2[j++];
		}
		if (!s1[i] && !s2[j])
		{
			break;
		}
	}
}
int main()
{
	char s1[6] = { 'a','b','c','d','e' };
	char s2[6] = { '1','2','3' };
	char s3[128] = { 0 };
	interCross(s1, s2, s3);
	cout << s3;
}