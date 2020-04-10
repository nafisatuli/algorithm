#include<bits/stdc++.h>
using namespace std;
int n,m,p;
int mod(int n,int p,int m)
{
    int x;
    if(p==0)return 1;
    if(p%2==0)
    {
        x=mod(n,p/2,m);
        return ((x*x)%m);
    }
    else return (n%m*mod(n,p-1,m)%m);
}
int main()
{
    while(cin >> n >> p >> m)
    {
        cout << mod(n,p,m) << endl;
    }
}
