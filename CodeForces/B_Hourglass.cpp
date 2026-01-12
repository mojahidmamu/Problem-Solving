#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll s, k, m;
    cin >> s >> k >> m;

    ll last_flip_time = (m / k) * k;
    long long sand_at_last_flip;
    if (m < k)
    {
        sand_at_last_flip = s;
    }
    else
    {
        sand_at_last_flip = min(s, k);
    }

    ll time_since_last_flip = m - last_flip_time;
    ll fell = min(sand_at_last_flip, time_since_last_flip);

    cout << sand_at_last_flip - fell << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
