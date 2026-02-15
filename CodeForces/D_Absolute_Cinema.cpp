#include <bits/stdc++.h>
using namespace std;

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
        vector<long long> f(n);
        for (int i = 0; i < n; i++)
            cin >> f[i];
        vector<long long> a(n);

        if (n == 2)
        {
            a[0] = f[1];
            a[1] = f[0];
        }
        else
        {
            // Compute a[0] = f[1] - f[0]
            a[0] = f[1] - f[0];

            // Compute rest a[i] using differences
            for (int i = 1; i < n; i++)
            {
                a[i] = f[i] - f[i - 1] - a[i - 1];
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << (i == n - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
