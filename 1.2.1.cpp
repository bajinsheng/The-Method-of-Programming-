///1.2.1 �ַ���������������ѯ
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
bool StringContain(string &a,string &b)//b������a��
{
    int i,j;
    for(i = 0; i < b.length(); i++)//����b��ÿһ���ַ���a�б���Ѱ��
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
