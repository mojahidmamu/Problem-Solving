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
        int n;
        cin >> n;

        vector<long long> f(n + 1), a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> f[i];

        if (n == 2)
        {
            cout << -f[2] << " " << f[1] << "\n";
            continue;
        }

        // middle values
        for (int i = 2; i <= n - 1; i++)
            a[i] = (f[i + 1] - 2 * f[i] + f[i - 1]) / 2;

        long long midSum = 0;
        for (int i = 2; i <= n - 1; i++)
            midSum += a[i];

        long long g2 = f[2] - f[1];
        long long gn = f[n] - f[n - 1];

        a[1] = g2 + midSum;
        a[n] = midSum - gn;

        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
