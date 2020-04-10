#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[100],t,j;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> aa[i];
    }
    for(int i=0;i<n;i++)
    {
        j=i;
        for(int k=i+1;k<n;k++)
        {
            if(aa[j]>aa[k])
            {
                j=k;
            }
        }
        if(j!=i)
        {
            t=aa[j];
            aa[j]=aa[i];
            aa[i]=t;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << aa[i] << " ";
    }
}
