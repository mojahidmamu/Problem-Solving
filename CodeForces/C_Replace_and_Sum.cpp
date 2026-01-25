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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        //
        vector<ll> c(n + 2, 0);
        for (int i = n; i >= 1; i--)
        {
            c[i] = max({a[i], b[i], c[i + 1]});
        }

        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + c[i];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;

            ll ans = pref[r] - pref[l - 1];
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}
