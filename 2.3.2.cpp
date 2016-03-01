///2.3.2 寻找和为定值的多个数：回溯剪枝(两路从小到大遍历寻找，但是并未完全遍历，通过简单条件进行剪枝）
                                                      //此法错误
#include<iostream>
#include<malloc.h>
#include<string.h>
using namespace std;
/*
x:解向量数组，代表每个值是否在最终结果中
flag：标志位，表示当前是否找到结果
m：总和，表示当前位置所求的总和
k：当前位置，程序判断当前k位置的数字是否应该放入结果中
t：前k-1个数字合理解之和
r：k之后（包括k）所有数字之和
*/
void SumOfNumber(int t, int k, int r, int& m, bool& flag, bool* x)
{
    x[k] = true;
    if (t + k == m)
    {
        flag = true;
        for (int i = 1; i < k; i++)
        {
            if (x[i])
                cout<<i<<" ";
        }
        cout<<endl;
    }
    else
    {
        if ((t + k + k + 1) <= m)
            SumOfNumber(t + k, k + 1, r - k, m, flag, x);
        if (((t + r - k) >= m) && (t + k + 1) <= m)
        {
            x[k] = false;
            SumOfNumber(t, k + 1, r - k, m, flag, x);
        }
    }
}
int main()
{
    int n = 10, m = 19;
    bool* x = (bool*)malloc(sizeof(bool) * (n + 1));
    memset(x, false, sizeof(bool) * (n + 1));
    int sum = (n + 1) * n / 2;
    if (1 > m || sum < m)
    {
        cout<<"not found!"<<endl;
    }
    bool f = false;
    SumOfNumber(0, 1, sum, m, f, x);
    if (!f)
    {
        cout<<"not found!"<<endl;
    }
    free(x);
    return 0;
}
