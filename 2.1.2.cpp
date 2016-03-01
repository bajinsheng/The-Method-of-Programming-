///2.1.2 寻找最小的k个数：部分排序
#include<iostream>
using namespace std;
int main()
{
    int m[10] = {3,5,63,6,4,9,7,1,2,16};
    int k = 3, maxElement, maxId, i;
//    for (int i = 0; i < 2; i++)
//    {
//        cin>>m[i];
//    }
    maxElement = -1;
Loop:for (i = 0; i < k; i++)
    {
        if (m[i] > maxElement)
        {
            maxElement = m[i];
            maxId = i;
        }
    }
    cout<<"maxElement:"<<maxElement<<endl;
    for (i = k; i < 10; i++)
    {
        if (m[i] < maxElement)
        {
            maxElement = m[i];
            swap(m[i], m[maxId]);
            goto Loop;
        }
    }
    for (i = 0; i < k; i++)
    {
        cout<<m[i]<<' ';
    }
}
