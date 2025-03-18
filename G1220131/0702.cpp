#include<iostream>
using namespace std;
int main()
{
	int a[20] = {2,-1,0,-3,2,4,9,-23,11,-3,0,-3,4,1,22,-4,-4,-3,11,0};
	int zheng=0, fu=0, ling=0;
	for (int i = 0; i < 20; i++)
	{
		if (a[i] == 0)
		{
			ling++;
		}
		else if (a[i] < 0)
		{
			fu++;
		}
		else if (a[i] > 0)
		{
			zheng++;
		}
	}
	cout << "正数有" << zheng << "个\n" << "负数有" << fu << "个\n" << "零有" << ling << "个" << endl;
}