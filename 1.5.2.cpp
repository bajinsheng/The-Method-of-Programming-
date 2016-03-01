///1.4.2 回文判断：从中间向两边扫
#include<iostream>
#include<string.h>
using namespace std;
bool IsPalindrome(const char* s)
{
    int middle,i;
    if(strlen(s) % 2)
    {
        middle = strlen(s) / 2;
        for (i = 1; i <= middle; i++)
        {
            if (s[middle - i] != s[middle + i])
                return false;
        }
    }
    else if (!(strlen(s) % 2))
    {
        middle = strlen(s) / 2 - 1;
        for (i = 1; i <= middle; i++)
        {
            if (s[middle - i] != s[middle + i +1])
                return false;
        }
    }
    else
        return false;
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
