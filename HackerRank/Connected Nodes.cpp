#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int N, E;
    cin >> N >> E;
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for (int i = 0; i < N; i++)
    {
        sort(adj_list[i].rbegin(), adj_list[i].rend());
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int X;
        cin >> X;

        if (adj_list[X].empty())
        {
            cout << -1 << endl;
        }
        else
        {
            for (int val : adj_list[X])
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
