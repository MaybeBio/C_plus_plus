#include<iostream>
using namespace std;
int main()
{
	double sum=0, a=1, b=1,c,d,time;
	cout << "请输入循环次数" << endl;
	cin >> time;
	while (time > 0)
	{
		c = a / b;
		sum += c;
		d = a;
		a = b + a;
		b = d;
		time-=1;
	}
	sum++;
	cout << "sum=" << sum << endl;
	system("pause");
}