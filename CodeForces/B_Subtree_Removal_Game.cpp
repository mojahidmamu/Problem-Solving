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

    int n;
    cin >> n;

    vector<vector<int>> a(n + 1);
    
    for (int i = 2; i <= n; i++)
    {
        int p;
        cin >> p;
        a[p].push_back(i);
    }

    vector<int> b(n + 1);
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : a[u])
        {
            b[v] = b[u] + 1;
            q.push(v);
        }
    }

    int bestLeaf = -1;
    int minDepth = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (a[i].empty() && b[i] < minDepth)
        {
            minDepth = b[i];
            bestLeaf = i;
        }
    }

    cout << bestLeaf << endl;

    

    return 0;
}
