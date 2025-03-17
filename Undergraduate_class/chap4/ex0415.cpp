//用于展示乘法口诀表（用双层循环，主要是内外循环

#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << i << "x" << j << "=" << i * j << '\t';
		}
		cout << endl;

	}

	return 0;

}