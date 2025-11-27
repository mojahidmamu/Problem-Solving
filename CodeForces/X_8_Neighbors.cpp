#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, m;
    cin >> n >> m;
    string arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;

    X--;
    Y--;

    int dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    bool ok = true;
    for (int k = 0; k < 8; k++)
    {
        int nr = X + dr[k];
        int nc = Y + dc[k];

        if (nr >= 0 && nr < n && nc >= 0 && nc < m)
        {
            if (arr[nr][nc] != "x")
            {
                ok = false;
                break;
            }
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
