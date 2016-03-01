///2.3.1 寻找和为定值的多个数：n问题转换成n-1问题(两路从大到小遍历寻找）
#include<iostream>
#include<list>
using namespace std;
list<int> m;
void SumOfNumber(int sum, int n)
{
    if (sum <= 0 || n == 0)//递归无结果情况停止
        return;
    else if (sum == n)//递归到有结果情况输出结果后停止
    {
        m.reverse();
        for(list<int>::iterator i = m.begin(); i != m.end(); i++)
        {
            cout<<*i<<" ";
        }
        cout<<n<<endl;
        return;
    }
    else//递归，分两种情况向前寻找，从大数开始寻找
    {
        //第n个数取到队列中
        m.push_back(n);
        SumOfNumber(sum - n, n - 1);
        //din个数不取到队列中
        m.pop_back();
        SumOfNumber(sum, n - 1);
    }
}

int main()
{
    SumOfNumber(9,10);
}
