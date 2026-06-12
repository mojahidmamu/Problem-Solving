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
        ll a, b, x;
        cin >> a >> b >> x;

        if (a > b)
        {
            swap(a, b);
        }
        if (x == 1)
        {
            cout << b - a << endl;
            continue;
        }
        long long ans = b - a;
        long long steps = 0;
        while (b > 0)
        {
            b /= x;
            steps++;
            ans = min(ans, steps + abs(a - b));
        }
        cout << ans << endl;
    }

    return 0;
}
