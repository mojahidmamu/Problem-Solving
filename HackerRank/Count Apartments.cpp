#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[1005][10005];
char arr[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void dfs(int Si, int Sj)
{
    vis[Si][Sj] = true; // true -> from false, the source code after printing this
    for (auto dir : d)
    {
        int ni = Si + dir.first;
        int nj = Sj + dir.second;
        if (!vis[ni][nj] && valid(ni, nj) && arr[ni][nj] == '.')
        {
            dfs(ni, nj);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int appartment = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && arr[i][j] == '.')
            {
                dfs(i, j);
                appartment++;
            }
        }
    }
    cout << appartment << endl;

    return 0;
}
