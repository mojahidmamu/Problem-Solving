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
        bool possible = false;

        // Case 1: No short step
        if (x % 2 == 0 && y % 2 == 0)
        {
            possible = true;
        }

        // Case 2: Exactly one short step (+1 in x or y)
        // If we use one short step in x, then remaining x-1 must be even, and y must be even
        if ((x - 1 >= 0 && (x - 1) % 2 == 0 && y % 2 == 0) ||
            (y - 1 >= 0 && (y - 1) % 2 == 0 && x % 2 == 0))
        {
            possible = true;
        }

        // Since x and y are at least 1, x-1 and y-1 are non-negative

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
