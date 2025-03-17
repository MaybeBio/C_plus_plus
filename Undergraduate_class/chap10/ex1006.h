#pragma once
using namespace std;
#include<iostream>
class date
{
	int year, month, day;
public:
	date(int y = 2022, int m = 8, int d = 28)
	{
		year = y;
		month = m;
		day = d;
		cout << "调用构造函数";
		showdate();
	}
	void showdate()
	{
		cout << year << '.' << month << '.' << day << endl;
	}
	~date()
	{
		cout << "调用析构函数";
		showdate();
	}

};