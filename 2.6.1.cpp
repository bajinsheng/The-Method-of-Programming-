///2.6.1 奇偶数排序：头尾两指针向中间扫
#include<iostream>
#include<algorithm>
using namespace std;
bool IsOddNumber(int data)
{
    return (data & 1) == 1;
}
void OddEvenSort(int* pData, unsigned int length)
{
    if (pData == NULL || length == 0)
        return;
    int* pBegin = pData;
    int* pEnd = pData + length - 1;
    while (pBegin < pEnd)
    {
        if (IsOddNumber(*pBegin))
            pBegin++;
        else if (!IsOddNumber(*pEnd))
            pEnd--;
        else
            swap(*pBegin, *pEnd);
    }
}
int main()
{
    int m[8] = {2,8,7,1,3,5,6,4};
    OddEvenSort(m, 8);
    for (int i = 0; i < 8; i++)
        cout<<m[i]<<" ";
    cout<<endl;
    return 0;
}
