#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int INF = 1e9;

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

        vector<int> a(n);
        vector<int> exists(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            exists[a[i]] = 1;
        }

        vector<int> dp(n + 1, INF);

        for (int x = 1; x <= n; x++)
        {
            if (exists[x])
            {
                dp[x] = 1;
            }
        }

        for (int v = 1; v <= n; v++)
        {
            if (!exists[v])
            {
                continue;
            }

            for (int x = v; x <= n; x += v)
            {
                if (dp[x / v] != INF)
                {
                    dp[x] = min(dp[x], dp[x / v] + 1);
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (dp[i] == INF)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << dp[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
