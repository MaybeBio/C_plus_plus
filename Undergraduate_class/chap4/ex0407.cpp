#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout << "请输入英文成绩";
	cin >> grade;
	switch (grade)
	{
	case'A': {
		cout << "成绩为优";
		break;
	}
	case('B'):
	{
		cout << "成绩为良";
		break;

	}
	default:
	{
		cout << "成绩为不及格";
		break;

	}
	}

	return 0;
}


