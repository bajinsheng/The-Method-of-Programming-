///字符串包含：排序后轮询
#include<iostream>
#include<algorithm>
using namespace std;
bool StringContain(string &a, string &b)
{
    int pa,pb;
    sort(a.begin(),a.end());//升序
    sort(b.begin(),b.end());
    for(pa = 0, pb = 0; pb < b.length(); pb++)//以每个b字符为基准在a中遍历，但不必从头开始遍历
    {
        while((pa < a.length()) && (a[pa] < b[pb]))//在a中找到b的相同字符
            pa++;
        if ((pa >= a.length()) || a[pa] > b[pb])//停止判断条件
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
