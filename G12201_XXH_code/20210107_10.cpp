#include <iostream>
#include <cstring>
using namespace std;

void filter(char *s)
{
    int i = 0, j = 0;
    while (s[j])
    {
        if (isalpha(s[j]))
        {
            s[i++] = toupper(s[j]);
        }
        j++;
    }
    s[i] = 0;
}

bool palin(char *s)
{
    int k = strlen(s) - 1; //最后一个字符的下标
    int i = 0;
    while (i < k)
    {
        if (s[i++] != s[k--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char s[] = "Madam, I\'m Adam";
    filter(s);
    cout << s << endl;
    cout << boolalpha << palin(s) << endl;
}