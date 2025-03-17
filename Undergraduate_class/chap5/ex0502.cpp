//本程序将小写字母转换成大写字母
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char i;
	cout << "请输入字符";
	cin >> i;
	if (islower(i))
	{
		i -= 32; // 或者是 i-='a'-'A';
	}
	cout << i << endl;
	return 0;

}