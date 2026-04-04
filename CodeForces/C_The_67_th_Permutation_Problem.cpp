#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        for (int i = 1; i <= n; i++) {
            // For block i: place i, n+i, 2n+i
            cout << i << " " << n + i << " " << 2 * n + i;
            if (i < n) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}