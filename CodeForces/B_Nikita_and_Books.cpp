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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll need = 1;
        bool ok = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < need)
            {
                ok = false;
                break;
            }
            need++;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
