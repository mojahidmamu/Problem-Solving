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
        int mn = 1e9, mx = -1e9;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            mn = min(mn, h);
            mx = max(mx, h);

        }
        cout << (mx - mn + 1)  << endl;
    }

    return 0;
}
