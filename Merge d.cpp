#include<bits/stdc++.h>
using namespace std;
#define MAX-50000000;
int aa[10005];
void Merge(int aa[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[100],R[100],i,j;
    for(int i=1;i<=n1;i++) L[i]=aa[p+i-1];
    for(int j=1;j<=n2;j++) R[j]=aa[q+j];
    L[n1+1]=MAX;
    R[n2+1]=MAX;
    i=1,j=1;
    for(int k=p;k<=r;k++)
    {
        if(L[i]>=R[j])
        {
            aa[k]=L[i];
            i++;
        }
        else
        {
            aa[k]=R[j];
            j++;
        }
    }
}
void Merge_sort(int aa[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        Merge_sort(aa,p,q);
        Merge_sort(aa,q+1,r);
        Merge(aa,p,q,r);
    }
    for(int i=1;i<=r;i++)cout << aa[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> aa[i];
    }
    int p=1,q=n;
    Merge_sort(aa,p,q);
    for(int i=1;i<=n;i++)
    {
        cout << aa[i] << " ";
    }
}
