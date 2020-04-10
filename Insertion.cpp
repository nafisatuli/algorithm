#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    int aa[100];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> aa[i];
    }
    for(int i=1;i<n;i++)
    {
        x=aa[i];
        int j=i;
        while(j>0&&aa[j-1]>x)
        {
            aa[j]=aa[j-1];
            j--;
        }
        aa[j]=x;
    }
    for(int i=0;i<n;i++)
    {
        cout << aa[i] << " ";
    }
}
