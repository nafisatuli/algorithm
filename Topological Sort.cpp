#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
priority_queue<pair<int,int> >q;
int visit[1000];
int n,e,from,to,cont;
void dfs(int node)
{
    visit[node]=1;
    for(int i=0; i<v[node].size(); i++)
    {
        int temp=v[node][i];
        if(visit[temp]==0)
        {
            cont++;
            dfs(temp);
        }
        q.push(make_pair(cont,node));
        cont++;
    }
}
int main()
{
    cin >> n >> e;
    cont=1;
    for(int i=0; i<e; i++)
    {
        cin >> from >> to;
        v[from].push_back(to);
    }
    for(int i=0; i<n; i++)
    {
        if(visit[i]==0)
            dfs(i);
    }
    while(!q.empty())
    {
        cout << q.top().first << " " << q.top().second << endl;
        q.pop();
    }
}
