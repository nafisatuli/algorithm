#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> aa[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(aa[j]>aa[j+1])
            {
                swap(aa[j],aa[j+1]);
            }
            cout << aa[j] << " "<<aa[j+1]<< endl;
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0;i<n;i++)
    {
        cout << aa[i] << " ";
    }
}
