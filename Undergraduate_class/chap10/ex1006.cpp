#include<iostream>
using namespace std;
#include"ex1006.h"

date d1(2021, 2, 1);
void fun()
{
	cout << "进入fun函数" << endl;
	static date d2(2000, 1, 1);
	date d3(2089, 3, 6);
	cout << "退出fun函数"<<endl;
}


int main()
{
	cout << "进入main函数" << endl;
	
	date d4(2077, 4, 5);
	static date d5(3099, 7, 8);
	fun();
	fun();
	cout << "退出main函数" << endl;
	return 0;

}