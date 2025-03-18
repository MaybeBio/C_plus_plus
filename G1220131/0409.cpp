#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n=0;
	double a=0,x,t,z=1;
	cout<<"ÊäÈëxµÄÖµ"<<endl;
	cin>>x;
	t=x;
	while(abs(t)>=10e-7)
	{
		if(0==n%2)
		{a+=t;}
		else
		{a-=t;};
		n+=1;
		z*=(2*(double)n-1)/(2*n);
		t=z*pow(x,2*n+1)/(2*n+1);
	}
	cout<<a<<endl;
	system("pause");
}