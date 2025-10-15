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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Precompute prefix sums
        vector<int> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + a[i - 1];

        bool found = false;

        for (int l = 1; l < n && !found; l++) {
            for (int r = l + 1; r < n; r++) {
                int s1 = (prefix[l] - prefix[0]) % 3;
                int s2 = (prefix[r] - prefix[l]) % 3;
                int s3 = (prefix[n] - prefix[r]) % 3;

                s1 = (s1 + 3) % 3; // to handle negatives
                s2 = (s2 + 3) % 3;
                s3 = (s3 + 3) % 3;

                // check condition
                if ((s1 == s2 && s2 == s3) || (s1 != s2 && s1 != s3 && s2 != s3)) {
                    cout << l << " " << r << "\n";
                    found = true;
                    break;
                }
            }
        }

        if (!found) cout << "0 0\n";
    }
}
