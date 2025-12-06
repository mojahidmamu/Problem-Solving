#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    const long long TARGET = 1000000000000000000LL; // 10^18
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        set<long long> s(a.begin(), a.end());
        long long m = s.size();

        long long ans = -1;
        for (long long x : s)
        {
            if (x >= m)
            {
                ans = x;
                break;
            }
        }

        if (ans != -1)
        {
            cout << ans << '\n';
        }
        else
        {
            long long result = m + TARGET - n - 1;
            cout << result << '\n';
        }
    }
    return 0;
}
