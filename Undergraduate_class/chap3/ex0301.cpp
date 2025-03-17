#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << 3 << ',' << 4 << endl;
	cout << 3 <<'\t' << 4 << endl;
	cout << 3 << '  ' << 4 << endl;
	cout << 3 << ' ' << 4 << endl;
	cout << setw(5) << 3 << ',' << 4 << endl;
	cout << setw(5) << 3333333333 << ',' << 4<<endl;
	return 0;

}