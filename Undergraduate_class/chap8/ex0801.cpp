#include <iostream>
using namespace std;

struct type
{
	int i, j;
	char name[10];
};
int main()
{
	type t1 = { 12,48,"lili" }, t2;
	t2 = t1;
	cout << t2.i << ',' << t2.j << ',' << t2.name << endl;
	return 0;
}