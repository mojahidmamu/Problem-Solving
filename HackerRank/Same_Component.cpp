#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid(1005);
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

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

// BFS:
void bfs(int Si, int Sj, int Di, int Dj)
{
    queue<int> q;
    q.push(source_code);
    vis[source_code] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (int child : adj_list[parent])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
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
    int Si, Sj, Di, Dj;
    cin >> Si >> Sj;
    cin >> Di >> Dj;

    if (grid[Si][Sj] == '-' || grid[Di][Dj] == '-')
    {
        cout << "NO" << endl;
    }

    memset(vis, false, sizeof(vis));
    if (bfs(Si, Sj, Di, Dj))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
