///2.4.2 最大连续子数组和：动态规划
#include<iostream>
using namespace std;
int MaxSubArray(int m[], int n)
{
    int curSum = 0, maxSum = 0, i;
    for (i = 0; i < n; i++)
    {
        if (curSum < 0)
        {
            curSum = m[i];
        }
        else
        {
            curSum += m[i];
        }
        if (curSum > maxSum)
        {
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
