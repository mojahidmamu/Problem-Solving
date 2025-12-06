#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    cin >> s;
    int n = s.size();
    vector<int> cost(26);
    for (int i = 0; i < 26; ++i)
    {
        cin >> cost[i];
    }
    long long total_cost = 0;
    for (char c : s)
    {
        total_cost += cost[c - 'a'];
    }
    cout << total_cost << "\n";

    return 0;
}
