#include <iostream>
using namespace std;

bool isLetter(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        return true;
    }
    return false;
}

char toUpper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        c += 'A' - 'a'; //小写字母转大写字母
    }
    return c;
}

//1st:
void firstUpper1(char *s)
{
    bool bUped = false; //标记连续字母的开始
    int i = 0;
    while (s[i])
    {
        if (isLetter(s[i])) //发现字母
        {
            if (!bUped) //说明这是开始的字符
            {
                s[i] = toupper(s[i]);
                bUped = true;
            }
        }
        else
        {
            bUped = false; //非字母
        }

        i++;
    }
}

//2nd:
void firstUpper2(char *s)
{
    bool bUped = false; //标记连续字母的开始
    while (*s)
    {
        if (isLetter(*s)) //发现字母
        {
            if (!bUped) //说明这是开始的字符
            {
                *s = toupper(*s);
                bUped = true;
            }
        }
        else
        {
            bUped = false; //非字母
        }
        s++;
    }
}

int main()
{
    char s1[] = "there are five apples in the basket.";
    firstUpper2(s1);
    cout << "method 1st: " << s1 << endl;

    char s2[] = "33abc,,efg  r";
    firstUpper2(s2);
    cout << "method 2st: " << s2 << endl;
}