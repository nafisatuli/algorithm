#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    do{
        for(int i=0;i<v.size();i++)
            cout << v[i]<< " ";
            cout << endl;
    }
    while(next_permutation(v.begin(),v.end()));
}
