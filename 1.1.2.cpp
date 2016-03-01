///1.1.2 字符串旋转：三步反转
#include<stdio.h>
#include<iostream>
using namespace std;
void ReverseString(char *s, int from, int to)
{
    char t;
    while(from < to)
    {
        t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}
int main()
{
    char m1[50];//输入的字符串
    int n,m;//n：字符串长度，m：开始要移动的字符串
    cin>>m1;
    cin>>n>>m;
    m %= n;
    ReverseString(m1,0,m - 1);
    ReverseString(m1,m,n - 1);
    ReverseString(m1,0,n - 1);
    cout<<m1<<endl;
    return 0;
}
