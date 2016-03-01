///2.5.2 ÌøÌ¨½×ÎÊÌâ£ºµİ¹é
#include<iostream>
using namespace std;
long long Fibonacci(unsigned int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n);
    return 0;
}
