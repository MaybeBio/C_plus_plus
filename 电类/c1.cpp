#include <iostream>
#include <cmath>        

int main()
{
	int n,i;
	cout<<"请输入一个大于2的正整数n：";
	cin<<n;          

	// 补充完善1：输入合法性检查 begin  

    // 输入合法性检查 end

	cout<<endl<<"正整数"<<n<<"的分解形式有："<<endl;
	int count;   //说明；count用来计数，在输出时用来判断是否需要换行
	for(i=1, i<= sqrt(n),i++)        
		if( n%i=0) {
		// 补充完善2：每两个分解式在一行输出，以逗号分隔 begin
		 
		// 输出所有的分解式 end
		}
	cout<<endl;
 	return 0;    
}
