#include<bits/stdc++.h>
using namespace std;
int aa[1005];
void activity(int f[],int s[],int  n)
{
    cout << s[0]<<" " << f[0]<< endl;
    int i=1;
    for(int m=2; m<n; m++)
    {
        if(s[m]>=f[i])
        {
            cout << s[m]<<" " << f[m]<< endl;
            i=m;
        }
    }
}
int main()
{
    int n,s[100],f[100],t;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >>s[i]>>f[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(f[j]>f[j+1])
            {
                swap(f[j],f[j+1]);
                swap(s[j],s[j+1]);
            }
        }
    }
    activity(f,s,n);
}
