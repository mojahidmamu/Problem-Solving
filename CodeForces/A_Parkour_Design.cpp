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
        ll x, y;
        cin >> x >> y;
        bool isPossible = false;

        if (x >= 2 * y && (x - 2 * y) % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";

        // if (isPossible)
        // {
        //     cout << "Yes" << endl;
        // }
        // else
        // {
        //     cout << "No" << endl;
        // }
    }

    return 0;
}
