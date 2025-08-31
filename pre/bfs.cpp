#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(1005);
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = true;
                q.push(it);
            }
        }
        
    }
}
    int main()
    {
        int n, e;
        cin >> n >> e;

        for (int i = 0; i < e; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        memset(vis, false, sizeof(vis));
        bfs(0);
        return 0;
    }