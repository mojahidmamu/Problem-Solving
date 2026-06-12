#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

// Author: Abdullah all Mojahid

struct PairHash
{
    size_t operator()(const pair<ll, ll> &p) const
    {
        return hash<ll>()(p.first) ^
            (hash<ll>()(p.second) << 1);
    }
};

ll x;
unordered_map<pair<ll, ll>, ll, PairHash> dp;

ll solve(ll a, ll b)
{
    if (a > b)
        swap(a, b);

    if (a == b)
        return 0;

    pair<ll, ll> state = {a, b};

    if (dp.count(state))
        return dp[state];

    ll ans = b - a; // Only increment operations

    // Divide a
    if (a > 0)
    {
        ll q = a / x;

        ans = min(ans, 1 + solve(q, b));

        if (a % x)
        {
            ll cost = (x - (a % x)) + 1;
            ans = min(ans, cost + solve(q + 1, b));
        }
    }

    // Divide b
    if (b > 0)
    {
        ll q = b / x;

        ans = min(ans, 1 + solve(a, q));

        if (b % x)
        {
            ll cost = (x - (b % x)) + 1;
            ans = min(ans, cost + solve(a, q + 1));
        }
    }

    return dp[state] = ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b >> x;

        dp.clear();

        cout << solve(a, b) << endl;
    }

    return 0;
}