#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> aa[i];
    while(next_permutation(aa,aa+n))
    {
        for(int i=0; i<n; i++)
        {
            cout << aa[i] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0; i<n; i++)cout << aa[i] << " ";
}
