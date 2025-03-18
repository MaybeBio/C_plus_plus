#include<iostream>
using namespace std;
int main()
{
	int m, n,i,j;
	cout << "请输入m" << endl;
	cin >> m;
	while(m<2)
	{
		cout << "m必须大于等于2！"<<'\n'<<"请重新输入\n";
		cin >> m;
	}
	cout << "请输入n" << endl;
	cin >> n;
	while (n < 2)
	{
		cout << "n必须大于等于2！" << '\n' << "请重新输入\n";
		cin >> n;
	}
	for (i = 0; i < n; i++)
	{
		printf("*");
	}		
	printf("\n");
	for (j= 0; j <(m - 2); j++)
	{
		printf("*");
		for (i = 0; i < n - 2; i++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	system("pause");
}