///1.1.1 �ַ�����ת��������λ
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void LeftShiftOne(char* s,int n)//�ַ���s������n
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
    char m1[50];//������ַ���
    int n,m;//n���ַ������ȣ�m����ʼҪ�ƶ����ַ���
    cin>>m1;
    cin>>n>>m;
    while(m--)
    {
        LeftShiftOne(m1,strlen(m1));
    }
    cout<<m1<<endl;
}
