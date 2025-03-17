//链表封装
#include <iostream>
using namespace std;
class List
{
	struct Node
	{
		int data;
		Node *pnext;
	};
	Node *phead,*ptail;//首尾节点

public:
	List();
	List(List &other);
	~List();

	void push_head(int x);
	void push_back(int x);
	void pop_head(int &ret);
	void pop_back(int &ret);
	void print();
	void remove(int key);
	void insert_before(int key, int x);
	void insert_after(int key, int x);
};

List::List():phead(0),ptail(0)
{
}//列表初始化
List::List(List &other):phead(0),ptail(0)//保护，先全部初始化为0
{
	Node* piter = other.phead;
	while(piter)
	{
		Node* p = new Node;
		p->data = piter->data;
		p->pnext = 0;
		if(ptail)//非空链表
		{
			ptail->pnext = p;
			ptail = p;
		}
		else//空链表
		{
			phead = ptail = p;
		}
		piter = piter->pnext;
	}
}
List::~List()
{
	while(phead)//
	{
		Node* p = phead;
		phead = phead->pnext;
		delete p;
	}
	ptail = 0;//释放过的链表头尾指针都是0，判断防止析构多次
}

void List::push_head(int x)//链表头前面增加一个
{
	Node* p = new Node;
	p->data = x;
	p->pnext = phead;
	phead = p;
	if(!ptail)//原链表为空
	{ptail = p;}
}
void List::push_back(int x)
{
	Node* p = new Node;
	p->data = x;
	p->pnext = 0;
	if(ptail)
	{
		ptail->pnext = p;
		ptail = p;
	}
	else//空链表
	{
		phead = ptail = p;
	}
}
void List::pop_head(int &ret)
{
	if(!phead)//空链表
	{	return;}
	ret = phead->data;
	Node* p = phead;
	phead = phead->pnext;
	delete p;
	if(!phead)//链表只有一个节点
	{ptail = 0;}
}
void List::pop_back(int &ret)
{
	if(!ptail)
	{return;}//空链表

	ret = ptail->data;
	Node *ppre=0, * piter = phead;//找到尾节点前面的节点
	while(piter && /*piter->pnext != 0*/   piter != ptail)//piter=0,循环结束，找到；如果原链表只有一个节点，不执行循环
	{
		ppre = piter;
		piter = piter->pnext;
	}
	if(ppre)//找到
	{
		ppre->pnext = 0;
		ptail = ppre;
	}
	else//原链表只有一个节点
	{
		phead = ptail = 0;
	}
	delete piter;
}
void List::print()
{
	Node* piter = phead;
	while(piter)
	{
		cout<<piter->data<<"  ";
		piter = piter->pnext;
	}
	cout<<endl;
}
void List::remove(int key)
{
	Node *ppre=0, *piter = phead;
	while(piter && piter->data != key)
	{
		ppre = piter;
		piter = piter->pnext;
	}
	if(piter)//找到
	{
		if(ppre)//不是头节点
		{
			ppre->pnext = piter->pnext;
			if(0 == ppre->pnext)//key是尾节点，此时ppre是新的尾节点
				ptail = ppre;
		}
		else//是头节点
		{
			phead = phead->pnext;
			if(0 == phead)//只有一个节点
				ptail = 0;
		}
		delete piter;
	}
}
void List::insert_before(int key, int x)
{
	Node *ppre=0, *piter = phead;
	while(piter && piter->data != key)
	{
		ppre = piter;
		piter = piter->pnext;
	}
	if(piter)//找到
	{
		Node* p = new Node;
		p->data = x;
		p->pnext = piter;//连接p与piter
		if(ppre)//不是头节点
		{
			ppre->pnext = p;
		}
		else//是头节点
		{
			phead = p;
		}
	}
}
void List::insert_after(int key, int x)
{
	Node *piter = phead;
	while(piter && piter->data != key)
	{
		piter = piter->pnext;
	}
	if(piter)//找到
	{
		Node* p = new Node;
		p->data = x;
		p->pnext = piter->pnext;
		piter->pnext = p;
		if(0 == p->pnext)//if(piter == ptail) ，原key在尾节点
			ptail = p;
	}
}

int main()
{
	int data = 0;

	List a;
	a.push_back(++data);
	a.push_back(++data);
	a.push_head(++data);
	a.push_head(++data);
	a.print();
	//
	a.insert_before(2, ++data);
	cout << "\ninsert before key=2: ";
	a.print();
	//
	a.insert_after(2, ++data);
	cout << "\ninsert after key=2: ";
	a.print();
	//
	a.remove(2);
	cout << "\nremove key=2: ";
	a.print();
	//
	int x;
	a.pop_head(x);
	cout << "\npop_head,first value=" << x << ", now exist: ";
	a.print();
	//
	a.pop_back(x);
	cout << "\npop_back,last value=" << x << ", now exist: ";
	a.print();
}