///1.6.2 最长回文字串：Manacher
#include<iostream>
#include<string.h>
using namespace std;
int LongestPalindrome(const char* t)
{
    int length = strlen(t) * 2 + 1;
    char s[length];
    //填充#，扩展字符串
    memset(s,'#',length * sizeof(char));
    s[length] = '\0';
    length = strlen(s);
    int p[strlen(s)];
    int i,mx = 0,id,result = 0;
    for (i = 0; i < strlen(t); i++)
    {
        s[2 * i + 1] = t[i];
    }

    //计算p[i]
    for (i = 1; i < length; i++)
    {
        if (mx > i)
            p[i] = min(p[2 * id - i], mx - 1);
        else
            p[i] = 1;
        while (s[i + p[i]] == s[i - p[i]])
            p[i]++;
        if (p[i] + i> mx)
        {
            mx = p[i] + i;
            id = i;
        }
    }
    for (i = 0; i < length; i++)
    {
        if (p[i] > result)
            result = p[i];
    }
    return result - 1;
}
int main()
{
    char m[40];
    cin>>m;
    cout<<LongestPalindrome(m);
    return 0;
}
