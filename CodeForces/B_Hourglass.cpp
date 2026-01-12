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

        ll full_cycles = (m / k) * k;
        ll remainder = m - full_cycles;
        ll result = s - remainder;
        cout << max(0ll, result) << '\n';
    }

    return 0;
}
