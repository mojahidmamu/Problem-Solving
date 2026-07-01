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
        int N;
        cin >> N;
        vector<vector<int>> pos(N + 1);

        for (int i = 1; i <= N; i++)
        {
            int x;
            cin >> x;
            pos[N + 1 - x].push_back(i);
        }

        int mx = 0;
        for (int v = 1; v <= N; v++)
            mx = max(mx, (int)pos[v].size());

        if (mx > N / 2)
        {
            cout << -1 << '\n';
            continue;
        }

        vector<pair<int, int>> a;
        for (int v = 1; v <= N; v++)
            for (int idx : pos[v])
                a.push_back({v, idx});

        sort(a.begin(), a.end());

        vector<int> ans(N + 1);

        int m = a.size();
        for (int i = 0; i < m; i++)
        {
            ans[a[i].second] = a[(i + mx) % m].first;
        }

        for (int i = 1; i <= N; i++)
            cout << ans[i] << " ";
        cout << '\n';
    }

    return 0;
}
