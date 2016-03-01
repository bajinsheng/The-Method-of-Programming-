///2.6.2 奇偶数排序：一前一后两指针向后扫
#include<iostream>
using namespace std;
bool IsOddNumber(int data)
{
    return (data & 1) == 1;
}
void OddEvenSort2(int data[], int length)
{
    int i = -1, j;
    for (j = 0; j < length; j++)
    {
        if (IsOddNumber(data[j]))
        {
            swap(data[++i], data[j]);
        }
    }

}
int main()
{
    int m[8] = {2,8,7,1,3,5,6,4};
    OddEvenSort2(m, 8);
    for (int i = 0; i < 8; i++)
        cout<<m[i]<<" ";
    cout<<endl;
    return 0;
}
