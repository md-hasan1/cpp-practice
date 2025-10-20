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
    }

    int q;
    cin >> q; 

    while (q--) {
        int u, v;
        cin >> u >> v;

      
        bool found = false;
        if(u==v){
  found=true;
            
        }
        for (auto it : adj[u]) {
       
       
         if(it==v){
            found=true;
         
         }
        }

  
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
