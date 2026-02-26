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
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if (p == q)
            cout << 0 << endl;
        else if (p > q)
            cout << p - q << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}
