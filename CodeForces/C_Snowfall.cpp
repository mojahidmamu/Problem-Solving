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

        vector<long long> c, a, b, d;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            bool div2 = (x % 2 == 0);
            bool div3 = (x % 3 == 0);

            if (div2 && div3) c.push_back(x);
            else if (div2) a.push_back(x);
            else if (div3) b.push_back(x);
            else d.push_back(x);
        }

        // output order
        for (auto x : c) cout << x << " ";
        for (auto x : a) cout << x << " ";
        for (auto x : d) cout << x << " ";
        for (auto x : b) cout << x << " ";

        cout << "\n";
    }

    return 0;
}