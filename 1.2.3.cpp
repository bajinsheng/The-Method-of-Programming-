///1.2.3 ×Ö·û´®°üº¬£ºËØÊıÏà³Ë
#include<iostream>
#include<string.h>
using namespace std;
bool StringContain(string &a, string &b)
{
    int f = 1;
    const int p[26] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
    for(int i = 0; i < a.length(); i++)
    {
        int x = p[a[i] - 'A'];
        if (f % x)
        {
            f *= x;
        }
    }
    for (int j = 0; j < b.length(); j++)
    {
        int x = p[b[j] - 'A'];
        if (f % x)
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
