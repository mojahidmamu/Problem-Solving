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

    int s, n;
    cin >> s >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (s > x)
            s += y;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
