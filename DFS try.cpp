#include<bits/stdc++.h>
using namespace std;
int visit[10000];
int dist[10000];
int end,begin;
vector<int>vv[10000];
void dfs(int src)
{
    int node;
    visit[src]=1;
    cout << src << endl;
    for(int i=0; i<vv[src].size(); i++)
    {
        node=vv[src][i];
        if(visit[node]==0)
        {
            dist[node]=dist[src]+1;
            dfs(node);
        }
    }
}
int main()
{
    int n,e,v,u;
    cin >> n >> e;
    for(int i=1; i<=e; i++)
    {
        cin >> u >> v;
        vv[u].push_back(v);
    }
    cin >> begin;
    dfs(begin);
}
