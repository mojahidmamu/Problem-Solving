#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    bool adjust = (t == 2); // add 1 to x if t = 2

    while (t--) {
        int x, y;
        cin >> x >> y;
        if (adjust) x++;

        int n = x + y;

        // Impossible if only odd nodes required = 0 and n>1
        if (n > 1 && y == 0) {
            cout << "NO\n";
            continue;
        }

        // Always possible if n=1
        if (n == 1) {
            if (x == 0 && y == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
            continue;
        }

        // General construction: chain from 1 to n
        cout << "YES\n";
        // We'll build a star + chain approach to satisfy parity
        // Root = 1
        int even_remaining = x;
        int odd_remaining = y;

        int current = 1;
        vector<pair<int,int>> edges;

        // Build a chain from root: 1 -> 2 -> 3 -> ... -> n
        for(int i = 2; i <= n; i++) {
            edges.push_back({i-1, i});
        }

        // Print edges
        for(auto &p : edges) {
            cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}