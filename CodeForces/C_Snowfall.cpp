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

        vector<long long> D, B, C, A;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x % 6 == 0) D.push_back(x);
            else if (x % 2 == 0) B.push_back(x);
            else if (x % 3 == 0) C.push_back(x);
            else A.push_back(x);
        }

        // optional: makes output stable
        sort(D.begin(), D.end());
        sort(B.begin(), B.end());
        sort(C.begin(), C.end());
        sort(A.begin(), A.end());

        // fixed order (deterministic)
        for (auto x : B) cout << x << " ";
        for (auto x : C) cout << x << " ";
        for (auto x : A) cout << x << " ";
        for (auto x : D) cout << x << " ";

        cout << "\n";
    }

    return 0;
}