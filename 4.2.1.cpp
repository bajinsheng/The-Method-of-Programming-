///4.2.1 行列递增矩阵查找：分治法(无法运行：bug太多 各种特殊情况都需要考虑，坑爹算法，懒得调了）
#include<iostream>
#include<math.h>
using namespace std;
//二维数组无法截取，故采用全局变量
int a[4][5];



bool MatrixSearch(int start_x, int start_y, int key, int m, int n)
{
    int low = min(m, n);
    int i;
    for (i = 0; i < low;)//对角线遍历
    {
        if (a[start_x + i][start_y + i] == key)
            return true;
        else if(a[start_x + i][start_y + i] < key)
            i++;
        else
            break;
    }
    if (i == low)//找到最右下角的元素依然没有找到
    {
        for (int t = i - 1; t < start_y + n; t++)//注意：该数组为防止单行数组不符合算法进行检查
        {
            if (a[i - 1][t] == key)
                return true;
        }
        return false;
    }
    else
    {
        int leftdown_start_x = start_x + i;
        int rightup_start_y = start_y + i;
        if (MatrixSearch(leftdown_start_x, start_y,key,m - i, i))
        {
            return true;
        }
        if (MatrixSearch(start_x, rightup_start_y, key, i, n - i))
        {
            return true;
        }
        else
            return false;
    }
}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = i * 5 +j;
        }
    }
    int t = -1;
    while(t++ < 30)
    {
        cout<<t;
        if (MatrixSearch(0,0,t,4,5))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
