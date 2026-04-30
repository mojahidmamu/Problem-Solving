#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) cin >> a[i];

        vector<int> first(n, -1), last(n, -1);
        for (int i = 0; i < 2 * n; i++) {
            if (first[a[i]] == -1) first[a[i]] = i;
            else last[a[i]] = i;
        }

        int ans = 0;
        int L = 2 * n, R = -1;

        for (int k = 0; k <= n; k++) {
            if (k > 0) {
                L = min(L, first[k - 1]);
                R = max(R, last[k - 1]);
            }

            // Check if k is fully inside [L, R]
            if (k < n) {
                int f = first[k], l = last[k];
                if (f >= L && l <= R) {
                    continue;
                }
            }

            // Check if [L, R] can be palindrome
            int l = L, r = R;
            bool possible = true;
            while (l <= r) {
                if (a[l] != a[r]) {
                    // Try expanding left
                    if (l > 0 && (k == n || a[l - 1] != k)) {
                        l--;
                    } else if (r < 2 * n - 1 && (k == n || a[r + 1] != k)) {
                        r++;
                    } else {
                        possible = false;
                        break;
                    }
                } else {
                    l++;
                    r--;
                }
            }
            if (possible) {
                ans = k + 1;
            } else {
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}