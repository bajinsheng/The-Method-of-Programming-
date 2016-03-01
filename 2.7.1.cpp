///2.7.1 荷兰国旗
#include<iostream>
#include<algorithm>
using namespace std;
void HollandFlag(int* data, int length)
{
    int start = 0, current, stop = length - 1;
    for (current = 0; current < stop;)
    {
        //cout<<start<<" "<<current<<" "<<stop<<endl;
        if (data[current] == 0)
            swap(data[start++], data[current++]);
        else if (data[current] == 1)
            current++;
        else
            swap(data[stop--], data[current]);
    }
}
int main()
{
    int m[9] = {0,0,1,0,0,2,1,1,2};
    HollandFlag(m, 9);
    for (int i = 0; i < 9; i++)
        cout<<m[i]<<" ";
    cout<<endl;
    return 0;
}
