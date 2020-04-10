#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int aa[n+10],cum[n+10];
    for(int i=1; i<=n; i++)
        cin >> aa[i];
    cum[0]=0;
    for(int i=1; i<=n; i++)
    {
       cum[i]=cum[i-1]+aa[i];
    }
    int l,r;
    cin >> l >> r;
    int res=cum[r]-cum[l];
    cout << res << endl;
}
