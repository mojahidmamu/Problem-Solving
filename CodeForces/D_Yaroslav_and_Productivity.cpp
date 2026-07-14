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
        int n, m;
        cin >> n >> m;

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<int> avail(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            int b;
            cin >> b;
            avail[b] = 1;
        }

        const ll NEG = -(1LL << 60);

        ll dp0 = 0;   // c[n+1] = 0
        ll dp1 = NEG; // impossible

        for (int i = n; i >= 1; i--)
        {
            ll ndp0, ndp1;

            if (avail[i])
            {
                ll bestNext = max(dp0, dp1);

                ndp0 = a[i] + bestNext;  // c[i] = 0
                ndp1 = -a[i] + bestNext; // c[i] = 1
            }
            else
            {
                ndp0 = a[i] + dp0; // c[i] must equal c[i+1]
                ndp1 = -a[i] + dp1;
            }

            dp0 = ndp0;
            dp1 = ndp1;
        }

        cout << max(dp0, dp1) << '\n';
    }

    return 0;
}
