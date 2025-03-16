 #include"ex0210.h"
#define endtag 000     //此处预定义000是数字输入结束符号
int main()
{
	seqlist<int> A(10), B(10);
	int a[5] = { 0,1,76,34,7 }, b[6] = { 7,34,67,23,44,89 };
	for (int i = 0; i < 5; i++)
	{
		A.insert(a[i], i);    //没有规律，或者是用随机函数
		A.last = i;
	}
	for (int i = 0; i < 6; i++)
	{
		B.insert(b[i], i);    //没有规律，或者是用随机函数
		B.last = i;
	}
	cout << "原始顺序表A数据" << endl;
	for (int i = 0; i <= A.last; i++)
	{
		cout << A.data[i] << '\t';
	}
	cout <<endl<< "原始顺序表B数据" << endl;
	for (int i = 0; i <= B.last; i++)
	{
		cout << B.data[i] << '\t';
	} 
	inter(A, B);      //其实可以写成运算符重载函数，调用自己也没关系
	cout <<endl<< "求交集运算之后顺序表数据" << endl;
    for (int i = 0; i <= A.last; i++)
	{
		cout << A.data[i] << '\t';
	}
	for (int i = 0; i < 5; i++)
	{
	  A.insert(a[i], i);    //这里尝试重新赋值，因为最终对应交集运算的时候是A集合发生了变化，同理如果是并集运算先弄的话，到时候就先对应B集合进行重新赋值
		A.last = i;
	}
	sum(A, B);  //在交运算之后改变了值的，在后面会有影响,引用是不能改的，只能重新从头开始赋值，或者是分开运行查看对应的数据
    cout <<endl<< "求并集运算之后顺序表数据" << endl;
    
  
    for (int i = 0; i <= B.last; i++)
	{
		cout << B.data[i] << '\t';
	}     //，如何不影响的使得交运算和并运算都能够独立的进行
	return 0;
	
} 
