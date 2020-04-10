#include<bits/stdc++.h>
using namespace std;
double w[100],p[100],u[100],x[100];
int n,m,i;
void knapsack()
{
    double s=0;
    for(i=0;i<n;i++)
    {
        if(w[i]>m)break;
        x[i]=1.0;
        m=m-w[i];
    }
    if (i<n)
    {
        x[i]=m/w[i];
    }
    for(int i=0;i<n;i++)
    {
         s+=(x[i]*p[i]);
        cout << x[i] << " ";
    }
    cout << s;
}
int main()
{
     cin >> n >>m;
     for(int i=0;i<n;i++)
     {
         cin >> w[i] >> p[i];
         u[i]=w[i]/p[i];
     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n-1-i;j++)
         {
             if(u[j]>u[j+1])
             {
                 swap(u[j],u[j+1]);
                 swap(w[j],w[j+1]);
                 swap(p[j],p[j+1]);
             }
         }
     }
     knapsack();
}
