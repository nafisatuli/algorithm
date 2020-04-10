#include<bits/stdc++.h>
using namespace std;
int visit[10000];
int n;
void sieve()
{
    for(int i=2;i<=10000;i++)
    {
        if(visit[i]==0)
        {
            for(int j=2;j*i<10000;j++)
                visit[j*i]=1;
        }
    }
}
int main()
{
    while(1)
    {
        cin >> n;
        sieve();
        if(visit[n]==0)
            cout << "prime" << endl;
        else
            cout << "not prime" << endl;
    }
}
