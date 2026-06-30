#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

bool isGood(long long n)
{
    int mask = 0;
    while (n > 0)
    {
        int d = n % 10;
        mask |= (1 << d);
        n /= 10;
        if (__builtin_popcount(mask) > 2)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        for (long long y = 2;; y++)
        {
            if (!isGood(y))
                continue;
            long long prod = x * y;
            if (isGood(prod))
            {
                cout << y << endl;
                break;
            }
        }
    }

    return 0;
}
