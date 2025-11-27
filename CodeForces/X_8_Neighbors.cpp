#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
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
            if (arr[nr][nc] != 'x')
            {
                ok = false;
                break;
            }
        }
    }

    if (ok)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}
