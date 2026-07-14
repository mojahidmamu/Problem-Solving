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
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; ++i)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        bool possible = true;
        for (int k = 1; k <= n; ++k)
        {
            long long min_req = (long long)k * (k + 1) / 2;
            if (prefix[k] < min_req)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
