#pragma once
#include<iostream>
using namespace std;
#include<cstdlib>
//#define maxsize 256       //为了考虑到最后的初始化的时候用数组，所以这里在对构造函数的重写中使用了宏定义的顺序表大小
template<class T>
class seqlist         //顺序表的类定义比静动态存储更重要
{
public:
	T* data;
	int maxsize;
	//int length;
	int last;     //从0开始的最后一个元素的下标，即数组表长-1
public:
	//void initlist(seqlist& L);//初始化顺序表,不用数组初始化，用插入数据函数初始化+for循环
	//seqlist(T a[], int sz);   //重新写一个构造函数，可以直接用对应数组的元素来初始化对应的顺序表
	seqlist(int sz);   //构造函数，参数sz指定数组的大小
	int search(T& x);    //查找元素x，引用可以理解，找到之后用int返回其位置
	bool insert(T  x, int i);        //在位置顺序i处插入元素x，插入成功则返回true，否则返回false
	bool remove(T& x); //删除元素x，若有多个元素，则只删除第一个，删除成功则返回true，否则false
	//void inter(seqlist<T>& A, seqlist<T>& B);               //此处写一个顺序表的交运算的函数inter
	//void sum(seqlist<T>& A, seqlist<T>& B);              //此处写一个顺序表的并集运算的函数sum
	int length(); //求表长的函数

};

template<class T> 
seqlist<T>::seqlist(int sz)       //构建空表，之后用insert函数来插入数据（用1个for循环）
{
	if (sz > 0)
	{
		maxsize = sz;   //数组大小数据更新
		last = -1;           //表长数据,空表
		data =new T [maxsize];
		if (data == NULL)          //数组（地址，大小）+表长元素都有了，数组动态分配的检查
		{
			cerr << "存储分配错误" << endl;
			exit(1);
		}
	}
}
template<class T>
int seqlist<T>:: search(T& x) //查找元素x，引用可以理解，找到之后用int返回其位置
{
	int i = 0;
	while (i <= last && data[i] != x)
	{
		i++;
	}
	if (i > last)     //跳出循环之一是超出下标，则没找到
	{
		return -1;
	}
	else    //否则就是找到了该元素
	{
		return i;
	}
}
template<class T>
bool seqlist<T>::insert(T x, int i) //在位置顺序i处插入元素x，插入成功则返回true，否则返回false
{
	if (i<0 || i>last + 1 || last + 1 == maxsize)                                   //统一先判断能否插入，即插入的时候位置是否合适（空表-1或者是last+1，以及表满了，表长last+1=数组大小
	{
		return false;              //不能插入
	 }
	else
	{
		last++;
		for (int j = last; j >=i; j--)                      //从后面往前面循环，依次后移一个位置
		{
			data[j] = data[j - 1];
		}
		data[i] = x;
		return true;       //插入成功
	}
}
template<class T>
bool seqlist<T>:: remove(T& x)//删除元素x，若有多个元素，则只删除第一个，删除成功则返回true，否则false
{
	int i = search(x);      //先找到x在顺序表中的位置，在该位置从前往后循环前移一个位置
	if (i >= 0)
	{
		last--;
		for (int j = i; j <= last; j++)
		{
			data[j] = data[j + 1];
		}
		return true;       //删除成功
	}
	else
	{
		return false;     //表中没有该元素
	}
} 
template<class T>
int seqlist<T>::length()
{
	return last + 1;
}
template<class T>
void inter(seqlist<T>& A, seqlist<T>& B)   //在集合a中存，在a中取得元素，在b中比较,如果不写成成员函数，而是一个外部函数
{
	int an = A.length();
	int bn = B.length();
	int i = 0;
	while (i < an)    //因为是求交集，所以找其中一个集合的长度就够了
	{
		T& x = A.data[i];    //在a中取得元素
		int k = B.search(x); //在b中搜索该元素
		if (k == -1)  //注意在函数search中如果没有找到是对应-1return
		{
			A.remove(x);  //这里删除的是一个值，不是下标
			an--; //下标表长得改一下，否则之后接着查找会下标溢出
		}
		else
		{
			i++;   //继续寻找下一个,注意此处的i++不能写在上面，因为上面的i出在删除了之后进入了一个新的元素，需要重新比较
		}
	}
}
template<class T>
void sum(seqlist<T>& A, seqlist<T>& B)   //同理也写成一个非成员函数
{ 
	int an = A.length();
	int bn = B.length();
	int i = 0;
	while (i < an)    //在集合b中存，在集合a中取得元素（遍历），在集合b中进行比较，在哪里遍历就在哪里作为终点
	{
		T& x = A.data[i];
		int k = B.search(x);
		if (k == -1)
		  {
			B.insert(x, i);   //如果集合b中没有这个元素，那么把这个元素插入集合b中，在哪里插入无所谓，如果集合b中也有这个元素，那么就不操作
			bn++;        //同时更新集合b的大小   
		  }
		i++;      //此处的i++是不需要考虑上交运算一样的顾虑的,因为此时i是在A集合里遍历，而集合A没有变化
    }
		
}  
