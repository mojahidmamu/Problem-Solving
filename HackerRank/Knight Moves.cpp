#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid;
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;
    int count = 1;

    while (!q.empty())
    {
        auto parent = q.front();
        q.pop();

        int a = parent.first;
        int b = parent.second;

        for (auto child : d)
        {
            int A = child.first;
            int B = child.second;

            int Nx = A + a;
            int Ny = B + b;
            if (valid(Nx, Ny))
            {
                q.push({Nx, Ny});
                vis[Nx][Ny] = true;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    cin >> N >> M;
    grid.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> grid[i];
    }

    int ans = INT_MAX;
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                int area = bfs(i, j);
                ans = min(ans, area);
            }
        }
    }

    cout << ((ans == INT_MAX) ? -1 : ans);

    return 0;
}
