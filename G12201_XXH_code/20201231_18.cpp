#include <iostream>
using namespace std;

//十进制转成r进制
//按数的进制转换的基本概念实现
void int_to_radix(int n, char s[], int r)
{
    int nbit = 0; //位数
    while (n)
    {
        //得余数
        int t = n % r;
        //转换对应的字符
        if (r <= 10)
        {
            s[nbit++] = '0' + t;
        }
        else
        {
            s[nbit++] = (t < 10 ? '0' + t : 'A' + t - 10);
        }

        n /= r;
    }
    //反转
    for (int i = 0; i < nbit / 2; ++i)
    {
        char c = s[i];
        s[i] = s[nbit - 1 - i], s[nbit - 1 - i] = c;
    }
    //构成字符串.
    //若数组s传入前已经全部初始化为0，此句也可省略
    s[nbit] = '\0';
}

int main()
{
    int n, r;
    cin >> n >> r;
    if (n < 0 || r < 0 || r > 16)
    {
        cerr << "input error!\n";
        exit(0);
    }
    //
    char s[1024] = {0};
    int_to_radix(n, s, r);
    cout << s << '\n';
}