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

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        vector<int> first(n, -1), last(n, -1);

        for (int i = 0; i < 2 * n; i++) {
            if (first[a[i]] == -1)
                first[a[i]] = i;
            else
                last[a[i]] = i;
        }

        int L = 2 * n, R = -1;
        int ans = 0;

        for (int k = 0; k <= n; k++) {

            if (k > 0) {
                L = min(L, first[k - 1]);
                R = max(R, last[k - 1]);
            }

            if (L > R) {
                ans = k;
                continue;
            }

            bool ok = true;
            int i = L, j = R;

            while (i < j) {
                if (a[i] != a[j]) {
                    ok = false;
                    break;
                }
                i++;
                j--;
            }

            if (ok) {
                ans = k + 1;
            } else {
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}