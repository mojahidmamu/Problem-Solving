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
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int X;
        cin >> X;
    }

    return 0;
}
