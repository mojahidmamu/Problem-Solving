#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

ll calculate(ll n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    if (n % 4 == 3)
         return 0; // n % 4 == 3
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        cout << (n % 4 == 3 ? 0 : 1) << endl;
        

        // ll x = calculate(n);
        // if (x == 0)
        // {
        //     cout << 0 << endl;
        // }
        // else if (x == n)
        // {
        //     cout << 2 << '\n';
        // }
        // else
        // {
        //     cout << 1 << '\n';
        // }
    }

    return 0;
}
