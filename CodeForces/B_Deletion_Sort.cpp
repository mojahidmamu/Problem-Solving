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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> dp(n, 1);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j] <= a[i])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        for (int x : dp)
        {
            ans = max(ans, x);
        }

        cout << ans << "\n";
    }

    return 0;
}
