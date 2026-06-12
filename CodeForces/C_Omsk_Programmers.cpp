#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, x;
        cin >> a >> b >> x;

        vector<pair<ll, int>> va; // (value, divisions)
        ll val = a;
        int steps = 0;
        while (val > 0)
        {
            va.emplace_back(val, steps);
            val /= x;
            steps++;
        }
        va.emplace_back(0, steps);

        vector<pair<ll, int>> vb;
        val = b;
        steps = 0;
        while (val > 0)
        {
            vb.emplace_back(val, steps);
            val /= x;
            steps++;
        }
        vb.emplace_back(0, steps);

        ll ans = LLONG_MAX;
        for (auto &p1 : va)
        {
            ll av = p1.first;
            int da = p1.second;
            for (auto &p2 : vb)
            {
                ll bv = p2.first;
                int db = p2.second;
                ll cost = da + db + abs(av - bv);
                if (cost < ans)
                    {
                        ans = cost;
                    }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}