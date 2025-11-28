#include <bits/stdc++.h>
using namespace std;

int cellCost(int r, int c, int n)
{
    int val = (r - 1) * n + c;
    int cost = val;

    if (r > 1)
    {
        cost += (r - 2) * n + c;
    }

    if (r < n)
    {
        cost += r * n + c;
    }

    if (c > 1)
    {
        cost += (r - 1) * n + (c - 1);
    }

    if (c < n)
    {
        cost += (r - 1) * n + (c + 1);
    }

    return cost;
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

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 9 << endl;
        }
        else
        {
            int maxCost = 0;

            vector<pair<int, int>> candidates = {
                {n, n},
                {n, n - 1},
                {n - 1, n},
                {n - 1, n - 1}};

            for (auto p : candidates)
            {
                int r = p.first;
                int c = p.second;
                maxCost = max(maxCost, cellCost(r, c, n));
            }

            cout << maxCost << endl;
        }
    }

    return 0;
}
