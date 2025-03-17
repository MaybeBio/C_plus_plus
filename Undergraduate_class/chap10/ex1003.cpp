//本程序用于跟踪以及了解构造函数以及析构函数的最基本的调用时间以及使用方法

#include<iostream>
#include"ex1003.h"
using namespace std;
int main()
{
	student a("11320102", "祝海涛", 100);
	a.show();
	return 0;

}