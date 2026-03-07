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

    int n, m, q;
    cin >> n >> m >> q;
    vector<string> grid(n, string(m, '.'));
    while (q--)
    {
        int r1, c1, r2, c2;
        char c;
        cin >> r1 >> c1 >> r2 >> c2 >> c;

        int rs = min(r1, r2);
        int re = max(r1, r2);
        int cs = min(c1, c2);
        int ce = max(c1, c2);

        for (int i = rs - 1; i < re; i++)
        {
            for (int j = cs - 1; j < ce; j++)
            {
                grid[i][j] = c;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << grid[i] << endl;
    }

    return 0;
}
