#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c;
    cin >> x;
    int aa[x+5];
    for(int i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            aa[i]=1;
            c=x/i;
            aa[c]=1;
        }
    }
    for(int i=1;i<=x;i++)
    {
        if(aa[i]==1)cout << i << endl;
    }
}
