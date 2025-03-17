
//该程序用比较两个数组的元素的大小，逐个元素的比较，以及在比较之后统计对应的对应的两个数组中元素的多少比较个数，比如说是a数组比b数组多多少以及少多少或者是相等的元素个数有多少

#include<iostream>
using namespace std;
int main()
{
	int large(int, int);
	int a[10], b[10], i, great = 0,equal = 0, less = 0, n;
	//  great是a数组更多的个数，equal是相等的个数，less是更少的个数

	cout << "请输入数组元素的个数\t";
	cin >> n;
	cout << "输入数组a:\n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "输入数组b:\n";
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (i = 0; i < n; i++)
	{
		int r;
		if ((r = large(a[i], b[i]) )== 1)
		{
			great += 1;

		}
		else if (r == 0)
		{
			equal += 1;

		}
		else
		{
			less += 1;
		}
	}
        cout << "a[i]大于b[i]的次数" << great << endl;
		cout << "a[i]等于b[i]的次数" << equal << endl;
		cout << "a[i]小于b[i]的次数" << less<< endl;
		if (great > less)
		{
			cout << "数组a>数组b" << endl;
		}
		else if (great < less)
		{
			cout << "数组a<数组b" << endl;
		}
		else
		{
			cout << "数组a=数组b" << endl;
		}
		return 0;
}
 
int large(int x, int y)
{
	int flag;
	if (x > y)
	{
		flag = 1;
	}
	else if (x == y)
	{
		flag = 0;
	}
	else
	{
		flag = -1;
	}
	return (flag)
		;
}