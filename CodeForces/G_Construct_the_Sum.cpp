#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, s;
        cin >> n >> s;

        long long maxSum = 1LL * n * (n + 1) / 2;
        if (s > maxSum) {
            cout << -1 << '\n';
            continue;
        }

        vector<long long> ans;
        for (long long i = 1; i <= n && s > 0; ++i) {
            if (s >= i) {
                ans.push_back(i);
                s -= i;
            }
        }

        if (s != 0) {
            cout << -1 << '\n';
        } else { 
            reverse(ans.begin(), ans.end());
            for (size_t i = 0; i < ans.size(); ++i) {
                if (i) cout << ' ';
                cout << ans[i];
            }
            cout << '\n';
        }
    }

    return 0;
}
