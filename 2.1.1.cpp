///2.1.1 寻找最小的k个数：全部排序
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m[10], k;
    cin>>k;
    for (int i = 0; i < 10; i++)
    {
        cin>>m[i];
    }

    sort(m, m + 10);
    for (int i = 0; i < k; i++)
    {
        cout<<m[i];
    }
    cout<<endl;
    return 0;
}
