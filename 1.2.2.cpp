///�ַ����������������ѯ
#include<iostream>
#include<algorithm>
using namespace std;
bool StringContain(string &a, string &b)
{
    int pa,pb;
    sort(a.begin(),a.end());//����
    sort(b.begin(),b.end());
    for(pa = 0, pb = 0; pb < b.length(); pb++)//��ÿ��b�ַ�Ϊ��׼��a�б����������ش�ͷ��ʼ����
    {
        while((pa < a.length()) && (a[pa] < b[pb]))//��a���ҵ�b����ͬ�ַ�
            pa++;
        if ((pa >= a.length()) || a[pa] > b[pb])//ֹͣ�ж�����
            return false;
    }
    return true;
}
int main()
{
    string a,b;
    cin>>a>>b;
    if (StringContain(a,b))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
