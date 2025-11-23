#include <bits/stdc++.h>
using namespace std;

int N, M;
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};

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
    level[x][y] = 0;

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
                level[Nx][Ny] = level[a][b] + 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        cin >> N >> M;
        int Si, Sj, Di, Dj;
        cin >> Si >> Sj >> Di >> Dj;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(Si, Sj);

        if (level[Di][Dj] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << level[Di][Dj] << endl;
        }
    }

    return 0;
}
