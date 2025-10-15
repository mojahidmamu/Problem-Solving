#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        long long ans = 0;
        for (long long i = 0; i < m; i++)
        {
            ans += a[i % n] * (i / n + 1);
        }

        cout << ans << "\n";
    }
    return 0;
}
