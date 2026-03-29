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

    ll n;
    cin >> n;

    ll ans;
    if (n % 2 == 0)
    {
        ans = n / 2;
    }
    else
    {
        ans = -(n + 1) / 2;
    }
    cout << ans << endl;

    return 0;
}
