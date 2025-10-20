#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);  
        adj[v].push_back(u);
    }
int q;
cin>>q;
while (q--)
{
    vector<int> v;
    int n;
    cin>>n;
    if(adj[n].empty()){
        cout<<"-1";
    }
    for (auto it:adj[n])
    {
       v.push_back(it);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(auto it:v){
        cout<<it<<" ";
    }

    cout<<endl;
}


 
    return 0;
}
