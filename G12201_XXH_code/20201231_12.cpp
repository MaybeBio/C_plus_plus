#include <iostream>
using namespace std;

void interCross(char s1[], char s2[], char s3[])
{
    int i = 0, j = 0, k = 0;
    while (true)
    {
        if (s1[i])
        {
            s3[k++] = s1[i++];
        }
        //
        if (s2[j])
        {
            s3[k++] = s2[j++];
        }
        //如何s1和s2都拷贝完成
        if (!s1[i] && !s2[j])
        {
            s3[k] = '\0'; //补结束符
            break;
        }
    }
}

int main()
{
    char a[] = "abcde";
    char b[] = "123";
    char c[128];
    interCross(a, b, c);
    cout << c << '\n';
}