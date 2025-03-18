#include<iostream>
using namespace std;
void pr_rev(int x)
{
	if (x <= 9)
	{
		cout << x;
		return;
	}
	else
	{
		cout << x % 10;
		x /= 10;
		pr_rev(x);
	}
}
int main()
{
	int x;
	cout << "请输入一个自然数" << endl;
	cin >> x;
	pr_rev(x);
}