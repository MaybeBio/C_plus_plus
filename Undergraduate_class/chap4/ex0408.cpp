#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout << "请输入你的英文成绩";
	cin >> grade;
	switch (grade) 
	{
            case('a'):
			case('b'):
			case('c'): {
				cout << "及格" << endl;
				break;
			}
			default: {cout << "不及格"; }
	}
	return 0;
}