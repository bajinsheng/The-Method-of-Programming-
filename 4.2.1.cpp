///4.2.1 ���е���������ң����η�(�޷����У�bug̫�� ���������������Ҫ���ǣ��ӵ��㷨�����õ��ˣ�
#include<iostream>
#include<math.h>
using namespace std;
//��ά�����޷���ȡ���ʲ���ȫ�ֱ���
int a[4][5];



bool MatrixSearch(int start_x, int start_y, int key, int m, int n)
{
    int low = min(m, n);
    int i;
    for (i = 0; i < low;)//�Խ��߱���
    {
        if (a[start_x + i][start_y + i] == key)
            return true;
        else if(a[start_x + i][start_y + i] < key)
            i++;
        else
            break;
    }
    if (i == low)//�ҵ������½ǵ�Ԫ����Ȼû���ҵ�
    {
        for (int t = i - 1; t < start_y + n; t++)//ע�⣺������Ϊ��ֹ�������鲻�����㷨���м��
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
