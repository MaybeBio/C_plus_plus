# 运算
template <class T>
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


# 并运算

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

