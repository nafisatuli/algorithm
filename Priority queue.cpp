#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,r;
    vector<priority_queue<int> >pq(10);
    cin >> n;
    while(n--)
    {
        cin >> t >> r;
        pq[t].push(r);
    }
    for(int i=0;i<pq.size();i++)
    {
        while(!pq[i].empty())
        {
            cout << i << " " << pq[i].top() << endl;
            pq[i].pop();
        }
    }
}
