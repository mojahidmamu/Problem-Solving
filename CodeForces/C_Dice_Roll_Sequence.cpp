#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

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
        vector<int> arr(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        const int INF = 1e9;
        // dp[v] = min operations to have last number = v
        vector<int> dp(7), ndp(7);

        // Base case: first element
        for (int v = 1; v <= 6; v++)
        {
            dp[v] = (arr[0] != v);
        }

        // Fill DP for positions 2..n
        for (int i = 1; i < n; i++)
        {
            for (int v = 1; v <= 6; v++)
            {
                ndp[v] = INF;
            }

            for (int u = 1; u <= 6; u++)
            {
                for (int v = 1; v <= 6; v++)
                {
                    if (u == v)
                    {
                        continue; // same face not allowed
                    }
                    if (u + v == 7)
                    {
                        continue; // opposite faces not allowed
                    }
                    ndp[v] = min(ndp[v], dp[u] + (arr[i] != v));
                }
            }
            dp.swap(ndp);
        }

        int ans = *min_element(dp.begin() + 1, dp.end());
        cout << ans << "\n";
    }

    return 0;
}
