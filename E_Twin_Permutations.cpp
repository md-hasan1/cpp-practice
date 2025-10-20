#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a[i] = {x, i};
        }

        sort(a.begin(), a.end()); 

        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            b[a[i].second] = i + 1;
        }

        for (int x : b) cout << x << " ";
        cout << "\n";
    }
    return 0;
}

