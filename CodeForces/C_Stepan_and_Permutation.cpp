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
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> p[i];

        vector<vector<int>> g(n + 1);

        for (int i = 1; i + x <= n; i++)
        {
            g[i].push_back(i + x);
            g[i + x].push_back(i);
        }

        for (int i = 1; i + y <= n; i++)
        {
            g[i].push_back(i + y);
            g[i + y].push_back(i);
        }

        vector<int> comp(n + 1, -1);
        int id = 0;

        for (int i = 1; i <= n; i++)
        {
            if (comp[i] != -1)
                continue;

            queue<int> q;
            q.push(i);
            comp[i] = id;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();

                for (int v : g[u])
                {
                    if (comp[v] == -1)
                    {
                        comp[v] = id;
                        q.push(v);
                    }
                }
            }

            id++;
        }

        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            if (comp[i] != comp[p[i]])
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
