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
        int n, a, b;
        cin >> n >> a >> b;
        long long ans = n * a;
        long long m = n / 3;
        long long r = n % 3;
        long long c1 = m * b + r * a;
        long long c2 = (m + 1) * b;
        ans = min(ans, c1);
        ans = min(ans, c2);
        cout << ans << endl;
    }

    return 0;
}
