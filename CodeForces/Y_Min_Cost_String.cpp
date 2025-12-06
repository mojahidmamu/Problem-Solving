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

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '?')
        {
            long long bestValue = LLONG_MAX;
            char bestChar = 'a';

            for (char c = 'a'; c <= 'z'; c++)
            {
                long long currCost = 0;

                if (i > 0 && s[i - 1] != '?')
                {
                    currCost += llabs(cost[s[i - 1] - 'a'] - cost[c - 'a']);
                }
                if (i + 1 < n && s[i + 1] != '?')
                {
                    currCost += llabs(cost[c - 'a'] - cost[s[i + 1] - 'a']);
                }

                if (currCost < bestValue ||
                    (currCost == bestValue && c < bestChar))
                {
                    bestValue = currCost;
                    bestChar = c;
                }
            }
            s[i] = bestChar;
        }
    }

    long long total_cost = 0;
    for (int i = 1; i < n; i++)
    {
        total_cost += llabs(cost[s[i] - 'a'] - cost[s[i - 1] - 'a']);
    }

    cout << total_cost << "\n";
    cout << s << "\n";

    return 0;
}
