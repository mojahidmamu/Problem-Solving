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

    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i][j];
    }

    vector<tuple<int, int, int>> stars;
    vector<string> drawn(n, string(m, '.'));

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (grid[i][j] == '*')
            {
                int size = 0;
                while (true)
                {
                    int k = size + 1;

                    if (i - k < 0 || i + k >= n || j - k < 0 || j + k >= m)
                        break;

                    if (i - sz >= 0 && j - sz >= 0 && j + sz < m && grid[i - sz][j - sz] == '*' && grid[i - sz][j + sz] == '*')
                    {
                        sz++;
                    }
                    else
                    {
                        break;
                    }
                }

                if (size > 0)
                {
                    stars.push_back({i, j, size});

                    drawn[i][j] = '*';
                    for (int k = 1; k <= size; k++)
                    {
                        drawn[i - k][j] = '*';
                        drawn[i + k][j] = '*';
                        drawn[i][j - k] = '*';
                        drawn[i][j + k] = '*';
                    }
                }
            }
        }
    }

    if (drawn != grid)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << stars.size() << endl;
    for (auto [x, y, s] : stars)
    {
        cout << x + 1 << " " << y + 1 << " " << s << endl;
    }

    return 0;
}
