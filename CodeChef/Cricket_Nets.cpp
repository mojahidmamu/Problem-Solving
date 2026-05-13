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
        int x; cin >> x;
        int ans = 0;
        for (int i = 1; i <= x; i++)
        {
            int a; cin >> a;
            if (a > 10) ans += a - 10;
        }
        cout << ans << endl;
    }

    return 0;
}
