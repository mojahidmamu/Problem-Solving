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
        int n;
        long long m;
        cin >> n >> m;
        vector<long long> a(n);
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        long long prev_t = 0;
        int prev_side = 0;
        long long ans = 0;
        bool impossible = false;
        for (int i = 0; i < n; ++i)
        {
            long long t = a[i];
            int side = b[i];
            long long len = t - prev_t;
            int needParity = prev_side ^ side; // 0 if same, 1 if different
            if (len == 0)
            {
                if (needParity == 1)
                { // cannot change side with zero minutes
                    impossible = true;
                    break;
                }
                // else k = 0
            }
            else
            {
                if ((len % 2) == needParity)
                {
                    ans += len;
                }
                else
                {
                    ans += (len - 1);
                }
            }
            prev_t = t;
            prev_side = side;
        }
        if (impossible)
        {
            cout << -1 << '\n';
            continue;
        }
        // After last requirement, there may be remaining time up to m.
        long long len = m - prev_t;
        if (len < 0)
        {
            // should not happen if inputs valid (a_i <= m)
            cout << -1 << '\n';
            continue;
        }
        // final segment has no required end-side, so we can simply run every minute:
        ans += len;
        cout << ans << '\n';
    }

    return 0;
}
