#include<iostream>
#include<string.h>
#define MAX 100
using namespace std;
int next[MAX];
void GetNext(char* P)
{
    int pLen = strlen(P);
    next[0] = -1;
    int k = -1;
    int j = 0;
    while (j < pLen - 1)
        if (k == -1 || P[k])
        {
            ++k;
            ++j;
            next[j] = k;
        }
        else
        {
            k = next[k];
        }
}
int KmpSearch(char* S, char* P)
{
    int i = 0;
    int j = 0;
    int sLen = strlen(S);
    int pLen = strlen(P);
    while (i < sLen && j < pLen)
    {
        if (j == -1 || S[i] == P[j])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];
        }
    }
    if (j == pLen)
    {
        return i - j;
    }
    else
    {
        return -1;
    }
}
int main()
{
    char S[MAX],P[MAX];
    cin>>S>>P;
    GetNext(P);
    for(int i = 0; i < strlen(P); i++)
        cout<< next[i]<<" ";
    cout<<endl;
    cout<<KmpSearch(S, P);
    return 0;
}
