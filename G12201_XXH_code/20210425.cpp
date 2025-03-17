//Á´±í·â×°
#include <iostream>
using namespace std;

class List
{
    struct Node
    {
        int data;
        Node *pnext;
    };
    Node *phead;
    Node *ptail;

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