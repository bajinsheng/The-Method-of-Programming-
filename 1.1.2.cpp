///1.1.2 �ַ�����ת��������ת
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
    char m1[50];//������ַ���
    int n,m;//n���ַ������ȣ�m����ʼҪ�ƶ����ַ���
    cin>>m1;
    cin>>n>>m;
    m %= n;
    ReverseString(m1,0,m - 1);
    ReverseString(m1,m,n - 1);
    ReverseString(m1,0,n - 1);
    cout<<m1<<endl;
    return 0;
}
