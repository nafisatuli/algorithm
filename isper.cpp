#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100],bb[100];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> aa[i];
    for(int i=0; i<n; i++)
        cin >> bb[i];
    if(is_permutation(aa,aa+n,bb))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

