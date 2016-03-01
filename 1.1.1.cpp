///1.1.1 字符串反转：蛮力移位
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void LeftShiftOne(char* s,int n)//字符串s，长度n
{
    char t = s[0];
    for(int i = 0; i < n - 1; i++)
    {
        s[i] = s[i + 1];
    }
    s[n - 1] = t;
}

int main()
{
    char m1[50];//输入的字符串
    int n,m;//n：字符串长度，m：开始要移动的字符串
    cin>>m1;
    cin>>n>>m;
    while(m--)
    {
        LeftShiftOne(m1,strlen(m1));
    }
    cout<<m1<<endl;
}
