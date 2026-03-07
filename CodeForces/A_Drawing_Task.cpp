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


        for (int i = r1 - 1; i <= r2 - 1; i++)
        {
            for (int j = c1 - 1; j <= c2 - 1; j++)
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
