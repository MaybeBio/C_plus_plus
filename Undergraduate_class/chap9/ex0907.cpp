#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[10] = "hello";
	cout << strlen(str + 2) << endl;
	strcpy_s(str + 2, strlen("tui")+1,"tui");
	cout << str;
	return 0;

}