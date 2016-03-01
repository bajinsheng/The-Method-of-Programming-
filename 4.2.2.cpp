///4.2.2 行列递增矩阵的查找：定位法
#include<iostream>
using namespace std;
bool YongMatrix(int a[][5], int searchKey)
{
    int i = 0, j = 4;
    int var = a[i][j];
    while(true)
    {
        if (var == searchKey)
            return true;
        else if (var < searchKey && i < 3)
            var = a[++i][j];
        else if (var > searchKey && j > 0)
            var = a[i][--j];
        else
            return false;
    }
}
int main()
{
    int a[4][5];
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
        if (YongMatrix(a,t))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
