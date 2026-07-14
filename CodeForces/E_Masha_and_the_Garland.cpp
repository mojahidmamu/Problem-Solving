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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<int> p(n + 1);
        for (int j = 1; j <= n; ++j)
        {
            int sj = s[j - 1] - '0';
            int desired = (j % 2 == 0 ? 1 : 0);
            p[j] = sj ^ desired;
        }
        vector<int> trans01(n + 1, 0), trans10(n + 1, 0);
        for (int i = 2; i <= n; ++i)
        {
            if (p[i] == 1 && p[i - 1] == 0)
                trans01[i] = 1;
            if (p[i] == 0 && p[i - 1] == 1)
                trans10[i] = 1;
        }
        vector<int> prefix01(n + 1, 0), prefix10(n + 1, 0);
        for (int i = 1; i <= n; ++i)
        {
            prefix01[i] = prefix01[i - 1] + trans01[i];
            prefix10[i] = prefix10[i - 1] + trans10[i];
        }
        for (int query = 0; query < q; ++query)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int runsA = (p[l] == 1 ? 1 : 0) + (prefix01[r] - prefix01[l]);
            int runsB = (p[l] == 0 ? 1 : 0) + (prefix10[r] - prefix10[l]);
            int min_ops = min(runsA, runsB);
            cout << (min_ops <= k ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
