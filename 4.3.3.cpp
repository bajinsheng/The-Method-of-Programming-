///4.3.3 ���ҳ��ִ�������һ�������
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> data;
    for (int i = 0; i < 10; i++)
        data.push_back(22);
    for (int i = 0; i < 8; i++)
        data.push_back(i);
    return 0;
}
