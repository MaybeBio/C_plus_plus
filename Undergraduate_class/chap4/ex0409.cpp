#include<iostream>
using namespace std;
int main()
{
	int fee;
	cout << "请输入你的工资";
	cin >> fee;
	if (fee >= 10000)
	{
		cout << "你的基金" << fee * 0.06 << endl;
	}
	else if (fee >= 5000)
	{
		cout << "你的基金" << fee * 0.05 << endl;

	}
	else if (fee >= 2000)
	{
		cout << "你的基金" << fee * 0.04 << endl;
	}
	else if (fee >= 1000)
	{
		cout << "你的基金" << fee * 0.03 << endl;
	}
	else
	{
		cout << "你的基金" << fee * 0.02 << endl;
	}
	return 0;
}
