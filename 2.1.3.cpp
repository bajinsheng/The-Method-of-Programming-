#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m[10] = {3,5,63,6,4,9,7,1,2,16};
    int k = 3, maxElement, maxId, i;
    make_heap(m, m + k);

    maxElement = m[k - 1];
    for (i = k; i < 10; i++)
    {
        if (m[i] < m[0])
        {
            pop_heap(m, m + k);
            swap(m[k - 1], m[i]);
            push_heap(m, m + k);
            i = k - 1;
        }
    }
    for (i = 0; i < k; i++)
    {
        cout<<m[i]<<' ';
    }
}
