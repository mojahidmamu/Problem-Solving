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

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        ll mn, mx;
        if (i == 0)
        {
            mn = a[1] - a[0];
        }
        else if (i == n - 1)
        {
            mn = a[n - 1] - a[n - 2];
        }
        else
        {
            mn = min(a[i] - a[i - 1], a[i + 1] - a[i]);
        }
        mx = max(a[i] - a[0], a[n - 1] - a[i]);

        cout << mn << " " << mx << endl;
    }

    return 0;
}
