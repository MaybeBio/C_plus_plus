#include <iostream>
using namespace std;
//1st:通过下标访问元素
void getDigits1(char *s1, char *s2)
{
    int i = 0, j = 0;
    while (s1[i])
    {
        if (s1[i] >= '0' && s1[i] <= '9')
        {
            s2[j++] = s1[i];
        }
        i++;
    }
    //补结束符
    s2[j] = 0; //or:s2[j]='\0';
}

//2st:通过指针访问元素
//s1和s2都是函数左右域内的变量，它们变化不会影响数组元素
void getDigits2(char *s1, char *s2)
{
    while (*s1)
    {
        if (*s1 >= '0' && *s1 <= '9')
        {
            *s2++ = *s1;
        }
        s1++;
    }
    //补结束符
    *s2 = 0;
}

int main()
{
    char s1[64], s2[64];
    cin.getline(s1, 64);
    getDigits1(s1, s2);
    cout << "1st: " << s2 << endl;
    //
    s2[0] = 0; //置成空串
    getDigits2(s1, s2);
    cout << "2nd: " << s2 << endl;
}