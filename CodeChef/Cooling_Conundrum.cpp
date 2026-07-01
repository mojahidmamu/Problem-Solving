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
        int x, y;
        cin >> x >> y;

        int ans = 0;
        for (int k = x; k > y; k--)
        {
            ans += (k + 9) / 10;
        }

        cout << ans << '\n';
    }

    return 0;
}
