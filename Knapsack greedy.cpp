#include<bits/stdc++.h>
using namespace std;
double x[1005];
double w[100],p[100],unit[100];
int i,n,m,s=0;
void knapsack()
{
    for(i=0; i<n; i++)
    {
        if(w[i]>m)break;
        x[i]=1.0;
        m=m-w[i];
    }
    if(i<n) x[i]=m/w[i];
    double s=0;
    for(int j=0; j<n; j++)
    {
        s+=(x[j]*p[j]);
        cout << x[j] << endl;
    }
}
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >>w[i]>>p[i];
        unit[i]=p[i]/w[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(unit[j]>unit[j+1])
            {
                swap(unit[j],unit[j+1]);
                swap(w[j],w[j+1]);
                swap(p[j],p[j+1]);
            }
        }
    }
    knapsack();
}



