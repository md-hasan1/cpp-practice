#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
bool vis[1000];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src]=true;
    while (!q.empty())
    {
    
        int node=q.front();
        q.pop();

        cout<<node<<" ";
        for (auto it:adj[node])
        {
           if(!vis[it]){
            q.push(it);
            vis[it]=true;
           }
        }
        
    }
    

}

int main(){
int n,e;
cin>>n>>e;
while (e--)
{
  int u,v;
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
}

memset(vis,false,sizeof(vis));

   int src,dst;
    cin >> src >> dst;
    bfs(src);
        if(vis[dst])
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}