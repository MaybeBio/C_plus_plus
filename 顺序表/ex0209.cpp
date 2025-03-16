#include"ex0209.h"
#define endtag 000 //此处预定义000是数字输入结束符号
int main()
{
seqlist L(10); //5个就是后面的insert函数初始化中的a[i],用于数据的初始化
int a[5] = { 90,56,23,787,6 };
for (int i = 0; i < 5; i++)
{
L.insert(a[i], i); //没有规律，或者是用随机函数
L.last = i ;
}
cout << “原始顺序表数据” << endl;
for (int i = 0; i <=L.last; i++)
{
cout << L.data[i] << ‘\t’;
}
cout << endl << “请输入待查找的元素：”;
int x;
cin >> x;
cout << endl << “该元素的位置（下标）：” << L.search(x) << endl;
cout << “删除该元素” << endl;
L.remove(x);
cout << “现在顺序表数据” << endl;
for (int i = 0; i <=L.last; i++)
{
cout << L.data[i] << ‘\t’;
}
cout << “在0下标处插入数据”;
L.insert(99, 0);
cout << “现在顺序表数据” << endl;
for (int i = 0; i <=L.last; i++)
{
cout << L.data[i] << ‘\t’;
}
return 0;
}
