#include <iostream>
#include <cstring>
using namespace std;

//字符串反转
//算法：首位对应位置元素交换
void reverse(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len - i; ++i) //判断条件也可以是：i<len/2
    {
        char c = s[i];
        s[i] = s[len - i - 1], s[len - i - 1] = c;
    }
}

int main()
{
    char s[128];
    cin >> s;
    reverse(s);
    cout << s << '\n';
}