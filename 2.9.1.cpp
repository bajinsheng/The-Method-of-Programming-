///2.9.1 完美洗牌算法：蛮力变换
#include<iostream>
using namespace std;
void Wash(int m[], int n)
{
    int i,j,t,it;
    for (i = n, j = n - 1; i < 2 * n; i++, j--)//i:当前位置，j：当前元素需要向前移动的步数，t：移动次数计数，it：当前移动位置指针
    {
        t = j;
        it = i;
        while(t--)
        {
            swap(m[it], m[it - 1]);
            it--;
        }
    }
}
int main()
{
    int m[8] = {0,0,0,0,1,1,1,1};
    Wash(m, 4);
    for (int i = 0; i < 8; i++)
    cout<<m[i]<<" ";
    cout<<endl;
    return 0;
}
