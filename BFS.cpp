#include<bits/stdc++.h>
using namespace std;
int visit[1000];
int dist[1000];
vector<int>vv[10000];
void bfs(int src)
{
    int item,node;
    visit[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        item=q.front();
        cout << item << endl;
        q.pop();
        for(int i=0;i<vv[item].size();i++)
        {
            node=vv[item][i];
            if(visit[node]==0)
            {
                visit[node]=1;
                dist[node]=dist[item]+1;
                q.push(node);
            }
        }
    }
}
int main()
{
    int n,e,u,v,src,target;
    cin >> n >> e;
    for(int i=1;i<=e;i++)
    {
        cin >> u >> v;
        vv[u].push_back(v);
        vv[v].push_back(u);
    }
    cin >> src >> target;
    bfs(src);
    cout << "distance: " << dist[target];
}
