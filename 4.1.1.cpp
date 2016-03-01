///4.1.1 有序数组的查找：二分查找法
#include<iostream>
#include<math.h>
using namespace std;
int BinarySearch1(int data[], int length, int value)
{
    int middle = length / 2;
    if(value == data[middle])
    {
        return middle;
    }
    else if (value < data[middle])
    {
        return BinarySearch1(data, middle, value);
    }
    else if(value > data[middle])
    {
        return middle + 1 + BinarySearch1(data + middle + 1, length - middle - 1, value);
    }
    else
    {
        return (unsigned)(-1)>>1;
    }
}
int BinarySearch2(int m[], int n, int value)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int middle = left + ((right - left) >> 1);//移位防止溢出
        if (m[middle] > value)
        {
            right = middle - 1;
        }
        else if (m[middle] < value)
        {
            left = middle + 1;
        }
        else
        {
            return middle;
        }
    }
    return -1;
}
int main()
{
    int m[20];
    for (int i = 0; i < 20; i++)
        m[i] = i + 1;
    cout<<BinarySearch2(m, 20, 14)<<endl;
    return 0;
}
