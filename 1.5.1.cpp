///1.5.1 回文判断：两头往中间扫
#include<iostream>
#include<string.h>
using namespace std;
bool IsPalindrome(const char* s)
{
    int start = 0, to = strlen(s) - 1;
    cout<<start<<endl<<to;
    while(start < to)
    {
        if(s[start++] != s[to--])
            return false;

    cout<<start<<to<<endl;
    }
    return true;
}
int main()
{
    char m[30];
    cin>>m;
    if(IsPalindrome(m))
        cout<<"yes";
    else
        cout<<"no";

}
