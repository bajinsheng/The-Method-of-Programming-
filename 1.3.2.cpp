///1.3.2 字符串的全排列：字典序排序
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool CalcAllPermutation(char* perm, int num)
{
    int x = -1,y = 1,i,maxValue;//x降序首字符位置，y升序中比x大的字符位置
    for (i = num - 2; i >= 0; i--)
    {
        if(perm[i] < perm[i + 1])
        {
            x = i;
            break;
        }
    }
    if (x == -1)
    {
         return false;
    }
    for (y = num - 1; (y > x) && (perm[y] <= perm[x]); y--);
    swap(perm[x],perm[y]);
    reverse(perm + i + 1, perm + num);
    cout<<perm<<endl;
    return true;
}

int main()
{
    char m[40];
    cin>>m;
    sort(m, m + strlen(m));
    while(CalcAllPermutation(m,strlen(m)));
    return true;
}
