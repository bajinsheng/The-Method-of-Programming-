///1.2.4 �ַ���������λ���㷨
#include<iostream>
#include<string.h>
using namespace std;
bool StringContain(string &a, string &b)
{
    int hashValue = 0;//(00000000 00000000 00000000)2
    for(int i = 0; i < a.length(); i++)//ÿ����ĸ�任�ɶ�����һλ���浽hashValue��
    {
        hashValue |= (1 << (a[i] - 'A'));
    }
    for (int i = 0; i < b.length(); i++)//���벻Ϊ0����֤��a�д��ں�b����ͬ����ĸ
    {
        if(!(hashValue & (1 << (b[i] - 'A'))))
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
