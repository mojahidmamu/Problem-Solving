#include <bits/stdc++.h>
using namespace std;

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
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long P = 0, N = 0;
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            long long diff = b[i] - a[i];
            long long q = ((i % 2 == 0) ? 1 : -1) * diff;

            if ((i + 1) % 2 == 1)
            {
                long long need = max(0LL, -q);
                if (N < need)
                {
                    ok = false;
                    break;
                }

                P = q + N;
            }
            else
            {
                if (q >= 0)
                {
                    if (P < q)
                    {
                        ok = false;
                        break;
                    }
                    N = P - q;
                }
                else
                {
                    N = P - q;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}