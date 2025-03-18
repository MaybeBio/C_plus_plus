#include<iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈë¿¼ºËµÈ¼¶(A~E)" << endl;
	int s;
	cin >> s;
	if (s <= 100)
	{
		if (s >= 90)
		{
			cout << "A" << endl;
		}
		else
		{
			if (s >= 80)
			{
				cout << "B" << endl;
			}
			else
			{
				if (s >= 70)
				{
					cout << "C" << endl;
				}
				else
				{
					if (s >= 60)
					{
						cout << "D" << endl;
					}
					else
					{
						if (s >= 0)
						{
							cout << "E" << endl;
						}
						else
						{
							cout << "error" << endl;
						}
					}
				}
			}
		}
	}
	else
	{
		cout << "error" << endl;
	}
	system("pause");
}