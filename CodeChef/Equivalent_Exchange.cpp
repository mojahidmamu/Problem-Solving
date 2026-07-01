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
        int n, k;
        cin >> n >> k;

        int sum = 0;
        int mn = 0, mx = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            mn = min(mn, sum);
            mx = max(mx, sum);
        }

        int L = max(0, -mn);
        int R = min(k, k - mx);

        cout << (L <= R ? "Yes" : "No") << '\n';
    }

    return 0;
}
