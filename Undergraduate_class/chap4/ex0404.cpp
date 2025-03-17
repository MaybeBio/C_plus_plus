#include<iostream>
using namespace std;
int main()
{
	float score;
	cout << "请输入成绩";
	cin >> score;
	if (score >= 90)
	{
		cout << "成绩为A" << endl;
	}
	else if (score >= 80)
	{
		cout << "成绩为B" << endl;
	}
	else if (score >= 70)
	{
		cout << "成绩为C" << endl;
	}
	else if (score >= 60)
	{
		cout << "成绩为D" << endl;

	}
	else
	{
		cout << "不及格";

	}
	return 0;
}
