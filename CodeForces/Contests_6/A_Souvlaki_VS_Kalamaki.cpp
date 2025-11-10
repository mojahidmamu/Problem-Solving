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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        vector<int> b(n);

        int idx = 0;
        for (int i = 0; i < n; i += 2)
            b[i] = a[idx++]; // fill odd indices (0-based)
        for (int i = 1; i < n; i += 2)
            b[i] = a[idx++]; // fill even indices

        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if (b[i] < b[i - 1])
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
