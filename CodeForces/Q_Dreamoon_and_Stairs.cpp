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

    int n, m;
    cin >> n >> m;

    ll kmin = (n + 1) / 2;
   long long k = ((kmin + m - 1) / m) * m;

    if (k <= n) cout << k;
    else cout << -1;


    return 0;
}
