///2.3.1 Ѱ�Һ�Ϊ��ֵ�Ķ������n����ת����n-1����(��·�Ӵ�С����Ѱ�ң�
#include<iostream>
#include<list>
using namespace std;
list<int> m;
void SumOfNumber(int sum, int n)
{
    if (sum <= 0 || n == 0)//�ݹ��޽�����ֹͣ
        return;
    else if (sum == n)//�ݹ鵽�н�������������ֹͣ
    {
        m.reverse();
        for(list<int>::iterator i = m.begin(); i != m.end(); i++)
        {
            cout<<*i<<" ";
        }
        cout<<n<<endl;
        return;
    }
    else//�ݹ飬�����������ǰѰ�ң��Ӵ�����ʼѰ��
    {
        //��n����ȡ��������
        m.push_back(n);
        SumOfNumber(sum - n, n - 1);
        //din������ȡ��������
        m.pop_back();
        SumOfNumber(sum, n - 1);
    }
}

int main()
{
    SumOfNumber(9,10);
}
