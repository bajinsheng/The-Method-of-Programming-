/// 2.2.2 Ѱ�Һ�Ϊ��ֵ��������������б�
#include<iostream>
#include<algorithm>
using namespace std;
void TwoSm(int a[], unsigned int length, int sum)
{
    sort(a, a + length);
    int start = 0;
    int stop = length - 1;
    while(start < stop)
    {
        long currSum = a[start] + a[stop];
        if ( currSum == sum)
        {
             cout<<a[start]<<" "<<a[stop]<<endl;
             break;
        }
        else
        {
            if (currSum < sum)
                start++;
            else
                stop--;
        }

    }
}
int main()
{
    int m[10] = {3,5,63,6,4,9,7,1,2,16};
    TwoSm(m,10,66);
}
