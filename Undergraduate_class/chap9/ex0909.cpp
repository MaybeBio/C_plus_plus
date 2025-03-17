
//该程序输出二维数组的全体元素，并依据指针相减的意义（即相距基类型数据的个数）输出数据

#include<iostream>
using namespace std;
int main()
{
	int a[3][4] = { 0,1,2,3 }, * p;
	for (p = a[0]; p < a[0] + 12; p++)
	{
		if ((p - a[0]) % 4 == 0)
		{
			cout << endl;
		}
		cout << *p << '\t';
	}
	return 0;
}