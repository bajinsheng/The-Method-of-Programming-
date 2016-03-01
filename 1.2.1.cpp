///1.2.1 字符串包含：蛮力轮询
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
bool StringContain(string &a,string &b)//b包含在a中
{
    int i,j;
    for(i = 0; i < b.length(); i++)//对于b中每一个字符在a中遍历寻找
    {
        for(j = 0; (j < a.length() && a[j] != b[i]); j++);
        if (j >= a.length())
            return false;
    }
    return true;
}
int main()
{
    string a,b;
    cin>>a>>b;
    if (StringContain(a,b))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
