///2.3.2 Ѱ�Һ�Ϊ��ֵ�Ķ���������ݼ�֦(��·��С�������Ѱ�ң����ǲ�δ��ȫ������ͨ�����������м�֦��
                                                      //�˷�����
#include<iostream>
#include<malloc.h>
#include<string.h>
using namespace std;
/*
x:���������飬����ÿ��ֵ�Ƿ������ս����
flag����־λ����ʾ��ǰ�Ƿ��ҵ����
m���ܺͣ���ʾ��ǰλ��������ܺ�
k����ǰλ�ã������жϵ�ǰkλ�õ������Ƿ�Ӧ�÷�������
t��ǰk-1�����ֺ����֮��
r��k֮�󣨰���k����������֮��
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
