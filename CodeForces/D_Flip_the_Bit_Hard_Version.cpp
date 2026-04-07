#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> p(k);
        for (int i = 0; i < k; i++)
        {
            cin >> p[i];
        }
        int x = a[p[0]];
        int total_odd = 0;
        int maxo = 0;
        int cur = 0;
        // first group: 1 to p[0]
        for (int j = 1; j <= p[0]; j++)
        {
            int d = (j == 1 ? (a[1] ^ x) : (a[j] ^ a[j - 1]));
            if (d)
            {
                total_odd++;
                cur++;
            }
        }
        maxo = max(maxo, cur);
        cur = 0;
        // inter groups
        for (int i = 1; i < k; i++)
        {
            int st = p[i - 1] + 1;
            int en = p[i];
            for (int j = st; j <= en; j++)
            {
                int d = (a[j] ^ a[j - 1]);
                if (d)
                {
                    total_odd++;
                    cur++;
                }
            }
            maxo = max(maxo, cur);
            cur = 0;
        }
        // last group
        int st = p[k - 1] + 1;
        int en = n + 1;
        for (int j = st; j <= en; j++)
        {
            int d;
            if (j == n + 1)
            {
                d = (a[n] ^ x);
            }
            else
            {
                d = (a[j] ^ a[j - 1]);
            }
            if (d)
            {
                total_odd++;
                cur++;
            }
        }
        maxo = max(maxo, cur);
        int ans = max(total_odd / 2, maxo);
        cout << ans << '\n';
    }
    return 0;
}