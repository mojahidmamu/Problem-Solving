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
        int R, Y;
        cin >> R >> Y;

        int ans = R + max(0, (Y - R) / 2);
        cout << ans << '\n';
    }

    return 0;
}
