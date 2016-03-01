///1.2.4 字符串包含：位运算法
#include<iostream>
#include<string.h>
using namespace std;
bool StringContain(string &a, string &b)
{
    int hashValue = 0;//(00000000 00000000 00000000)2
    for(int i = 0; i < a.length(); i++)//每个字母变换成二进制一位数存到hashValue中
    {
        hashValue |= (1 << (a[i] - 'A'));
    }
    for (int i = 0; i < b.length(); i++)//相与不为0即可证明a中存在和b中相同的字母
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
