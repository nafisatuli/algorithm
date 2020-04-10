#include<bits/stdc++.h>
using namespace std;
void Merge(int aa[],int p,int q,int r)
{
    int i,j;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1],R[n2+1];
    for(int i=1; i<=n1; i++) L[i]=aa[p+i-1];
    for(int j=1; j<=n2; j++) R[j]=aa[q+j];
    L[n1+1]=55000;
    R[n2+1]=55000;
    i=1;
    j=1;
    for(int k=p; k<=r; k++)
    {
        if(L[i]<=R[j])
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
    for(int i=1; i<=r; i++)cout << aa[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int aa[n+1];
    for(int i=1; i<=n; i++)cin >> aa[i];
    int p=1,q=n;
    Merge_sort(aa,p,q);
}
