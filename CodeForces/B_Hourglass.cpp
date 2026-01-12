#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll s, k, m;
        cin >> s >> k >> m;

        if (s >= k)
        {
            ll last_flip = (m / k) * k;
            ll time_after_last_flip = m - last_flip;
            cout << s - time_after_last_flip << '\n';
        }
        else
        {
            ll flips = m / k;
            ll time_passed = flips * k;
            ll remaining = s - max(0ll, time_passed - (flips - 1) * k);
            remaining = s - (m - time_passed);
            cout << max(0ll, remaining) << '\n';
        }
    }

    return 0;
}
