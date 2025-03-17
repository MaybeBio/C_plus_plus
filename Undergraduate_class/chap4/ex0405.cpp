#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "请输入x" << endl;
	cin >> x;
	if (x <= 10)
	{
		if (x < 10)
		{
			cout << "y的值为-10" << endl;

		}
		else
		{
			cout << "y的值为5";
		}
     }
	else
	{
		cout << "y的值为20";

	}
	return 0;

}