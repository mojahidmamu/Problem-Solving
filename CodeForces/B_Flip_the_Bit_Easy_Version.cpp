#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int p;
    cin >> p;
    p--; // zero-based
    int x = a[p];
    
    int ans = 0;
    // left side
    int flag = 0;
    for (int i = p-1; i >= 0; i--) {
        if (a[i] != x) {
            if (!flag) {
                ans++;
                flag = 1;
            }
        } else {
            flag = 0;
        }
    }
    
    // right side
    flag = 0;
    for (int i = p+1; i < n; i++) {
        if (a[i] != x) {
            if (!flag) {
                ans++;
                flag = 1;
            }
        } else {
            flag = 0;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}