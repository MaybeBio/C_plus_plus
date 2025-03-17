#include <iostream>
#include <cstring>
using namespace std;
//算法：应用s2的长度以及strncmp函数，在s1中找s2出现的位置
//设置一个中间数组buf，用以拼接字符串
void replace(char s1[], char s2[], char s3[])
{
    //s1的长度
    int len1 = strlen(s1);
    //s2的长度
    int len2 = strlen(s2);
    //s3的长度
    int len3 = strlen(s3);
    //
    //找s2在s1中第一次出现的位置
    int index = 0; //s1的下标
    while (index < len1)
    {
        if (0 == strncmp(s1 + index, s2, len2))
        {
            break;
        }
        index++;
    }

    //如果找到
    if (index < len1)
    {
        //中间过渡数组
        char buf[1024] = {0};
        //先拷贝index个到buf
        strncpy(buf, s1, index);
        //再拼接s3到buf
        strcat(buf, s3);
        //再拼接s1中除去s2的部分
        strcat(buf, s1 + index + len2);
        //最后，处理好的字符串拷贝到s1中
        strcpy(s1, buf);
    }
}

int main()
{
    char s1[512] = "Today are Monday.";
    char s2[] = "are";
    char s3[] = "is";

    cout << s1 << '\n';
    replace(s1, s2, s3);
    cout << s1 << '\n';
}
