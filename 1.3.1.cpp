///1.3.1 字符串的全排列：递归实现
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void CalcAllPermutation(char* perm, int from, int to)
{
    if(to <= 1)
        return;
    else if(from == to)
    {
        for(int i = 0; i <= to; i++)
        {
            cout<<perm[i];
        }
        cout<<endl;
    }
    else
    {
        for (int i = 1; i <= to; i++)
        {
            swap(perm[0],perm[i]);
            CalcAllPermutation(perm, from + 1, to);
            swap(perm[0], perm[i]);
        }
    }
}
int main()
{
    char m[50];
    cin>>m;
    CalcAllPermutation(m,0,strlen(m) - 1);
    return 0;
}
