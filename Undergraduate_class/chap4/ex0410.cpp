#include<iostream>
using namespace std;
int main()
{
	int i = 1, sum = 0;
l:if (i <= 100)
{
	sum += i;
	i++;
	goto l;
}
cout << "SUM IS" << sum << endl;
return 0;

}