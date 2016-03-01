///4.3.1 查找出现次数超过一半的数:排序输出中间数字
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int m[10] = {0};
    for (int i = 0; i < 5; i++)
        m[i] = i + 1;
    sort(m, m + 10, cmp);
    cout<<m[(int)ceil(10 / 2)];
    return 0;
}
