#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

struct Block
{
    int mn, mx, ch;
    bool operator<(const Block &other) const
    {
        return mn < other.mn;
    }
};

vector<vector<int>> adj;
vector<int> min_val, max_val, aval;
vector<bool> can_sort;

void dfs(int u)
{
    if (adj[u].empty())
    { // leaf
        if (aval[u] > 0)
        {
            min_val[u] = max_val[u] = aval[u];
            can_sort[u] = true;
        }
        else
        {
            can_sort[u] = false;
        }
        return;
    }
    // non-leaf
    vector<int> children = adj[u];
    vector<Block> blocks;
    bool ok = true;
    for (int c : children)
    {
        dfs(c);
        if (!can_sort[c])
            ok = false;
        blocks.push_back({min_val[c], max_val[c], c});
    }
    if (!ok)
    {
        can_sort[u] = false;
        return;
    }
    if (blocks.empty())
    {
        can_sort[u] = true;
        return;
    }
    sort(blocks.begin(), blocks.end());
    for (size_t i = 1; i < blocks.size(); ++i)
    {
        if (blocks[i - 1].mx >= blocks[i].mn)
        {
            ok = false;
            break;
        }
    }
    if (!ok)
    {
        can_sort[u] = false;
        return;
    }
    // check cyclic
    vector<int> req(blocks.size());
    for (size_t i = 0; i < blocks.size(); ++i)
    {
        req[i] = blocks[i].ch;
    }
    vector<int> orig = children;
    int m = orig.size();
    int pos = -1;
    for (int i = 0; i < m; ++i)
    {
        if (orig[i] == req[0])
        {
            pos = i;
            break;
        }
    }
    bool match = true;
    if (pos != -1)
    {
        for (int j = 0; j < m; ++j)
        {
            if (orig[(pos + j) % m] != req[j])
            {
                match = false;
                break;
            }
        }
    }
    else
    {
        match = false;
    }
    if (!match)
    {
        ok = false;
    }
    if (ok)
    {
        can_sort[u] = true;
        min_val[u] = blocks.front().mn;
        max_val[u] = blocks.back().mx;
    }
    else
    {
        can_sort[u] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        adj.assign(n + 1, {});
        vector<int> parent(n + 1, 0);
        for (int i = 2; i <= n; ++i)
        {
            int p;
            cin >> p;
            parent[i] = p;
        }
        aval.resize(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> aval[i];
        }
        for (int i = 2; i <= n; ++i)
        {
            adj[parent[i]].push_back(i);
        }
        for (int i = 1; i <= n; ++i)
        {
            sort(adj[i].begin(), adj[i].end());
        }
        min_val.assign(n + 1, 0);
        max_val.assign(n + 1, 0);
        can_sort.assign(n + 1, false);
        dfs(1);
        cout << (can_sort[1] ? "YES" : "NO") << '\n';
    }

    return 0;
}
