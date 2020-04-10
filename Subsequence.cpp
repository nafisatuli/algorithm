#include<bits/stdc++.h>
using namespace std;
void subset(int n)
{
    int p=n;
    for(int i=0; i<(1<<n); i++)
    {
        vector<int>v;
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j))
                v.push_back(j+1);
        }

        for(int j=0; j<v.size(); j++)
            cout << v[j] << " ";
            cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    subset(n);
}
