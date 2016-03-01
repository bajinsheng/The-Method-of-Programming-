///2.4.1 最大连续子数组和
#include<iostream>
using namespace std;
int MaxSubArray(int m[], int n)
{
    int curSum, maxSum = 0;
    int i,j,k;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            curSum = 0;
            for (k = i; k < j; k++)
            {
                curSum += m[k];
            }
            if (curSum > maxSum)
                maxSum = curSum;
        }
    }
    return maxSum;
}
int main()
{
    int m[8] = {1,-2,3,10,-4,7,2,-5};
    cout<<MaxSubArray(m,8)<<endl;
    return 0;
}
