#include<iostream>
using namespace std;

int main()
{
	int a = 3, b = 4, c = 5;
	cout << (a + b > c && b == c) << '\n'<<endl;
	cout << (a || b + c && b > c) << '\n' << endl;
	cout << (!a || !c || b) << '\n' << endl;
	cout << (a * b && c + a) << '\n' << endl;
	system("pause");
}