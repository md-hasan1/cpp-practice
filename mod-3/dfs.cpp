#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool vis[1005];
void dfs(int src)
{
    cout<<src<<" ";
    vis[src]=true;

    for (int it :adj[src])
    {
    if(!vis[it]){
        dfs(it);
    }
    }
    
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}