///1.6.1 最长回文字串：中心拓展法
#include<iostream>
#include<string.h>
using namespace std;
int LongestPalindrome(const char* s)
{
    int length = strlen(s),last,next,maxLength = 0,curLength,i;
    for(i = 1; i < length - 1; i++)
    {
        if (s[i] == s[i + 1])//回文串长度为偶数的时候
        {
            curLength = 2;
            last = i - 1;
            next = i + 2;
            while((last >= 0) && (next <= length - 1))
            {
                if (s[last--] != s[next++])
                {
                    break;
                }
                curLength += 2;
            }
            if (curLength > maxLength)
                maxLength = curLength;
        }
        curLength = 1;//回文串长度为奇数的时候
        last = i - 1;
        next = i + 1;
        while((last >= 0) && (next <= length - 1))
        {
            if (s[last--] != s[next++])
            {
                break;
            }
            curLength += 2;
        }
        if (curLength > maxLength)
            maxLength = curLength;
    }
    return maxLength;
}
int main()
{
    char m[40];
    cin>>m;
    cout<<LongestPalindrome(m);
    return 0;
}
