///2.9.1 ����ϴ���㷨�������任
#include<iostream>
using namespace std;
void Wash(int m[], int n)
{
    int i,j,t,it;
    for (i = n, j = n - 1; i < 2 * n; i++, j--)//i:��ǰλ�ã�j����ǰԪ����Ҫ��ǰ�ƶ��Ĳ�����t���ƶ�����������it����ǰ�ƶ�λ��ָ��
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
