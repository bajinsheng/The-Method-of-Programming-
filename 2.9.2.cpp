///2.9.2 完美洗牌算法：完美洗牌算法(无法运行）
#include<iostream>
using namespace std;
void Reverse(int* a, int from, int to)
{
    int t;
    while(from < to)
    {
        t = a[from];
        a[from++] = a[to];
        a[to++] = t;
    }
}
void RightRotate(int* a, int num, int n)
{
    Reverse(a, 1, n - num);
    Reverse(a, n - num + 1, n);
    Reverse(a, 1, n);
}
void CycleLeader( int* a, int from, int mod)
{
    int i,t;
    for(i = from * 2 % mod; i != from; i = i * 2 % mod)
    {
        t = a[i];
        a[i] = a[from];
        a[from] = t;
    }
}
void PerfectShuffle(int* a, int n)
{
    int n2, m, i, k, t;
    while (n > 1)
    {
        //1
        n2 = n * 2;
        for (k = 0, m = 1; n2 / m >= 3; ++k, m *= 3);
        m /= 2;

        //2
        RightRotate(a + m, m ,n);

        //3
        for (i = 0, t = 1; i < k; ++i,t *= 3)
            CycleLeader(a, t, m * 2 + 1);

        //4
        a += m * 2;
        n -= m;
    }
    //n=1
    t = a[1];
    a[1] = a[2];
    a[2] = t;
}

int main()
{
    int m[8] = {0,0,0,0,1,1,1,1};
    PerfectShuffle(m, 4);
    for (int i = 0; i < 8; i++)
    cout<<m[i]<<" ";
    cout<<endl;
    return 0;
}
