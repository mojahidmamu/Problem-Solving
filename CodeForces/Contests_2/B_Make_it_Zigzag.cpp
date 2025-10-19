#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long cost = 0;

        // Loop over peaks (even indices 1-based -> odd 0-based)
        for (int i = 1; i < n; i += 2)
        {
            long long left = a[i - 1];
            long long right = (i + 1 < n ? a[i + 1] : LLONG_MIN);
            // Decrease the peak just enough to be greater than neighbors
            long long dec = max(0LL, max(left, right) - a[i] + 1);
            cost += dec;
        }

        cout << cost << "\n";
    }
    return 0;
}
