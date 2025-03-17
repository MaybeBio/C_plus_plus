//该程序只能在现有的累加基础上进行打印阶乘，如果要计算阶乘，参考之前的程序

#include<iostream>
using namespace std;
int fac(int n);
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		cout << i << "!=" << fac(i) << endl;
		
	}
	return 0;
}
int fac(int n)
{
	static int i = 1;
	i *= n;
	return i;
}