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
    vector<long long> cost(26);
    for (int i = 0; i < 26; ++i)
    {
        cin >> cost[i];
    }

    int i = 0;
    while (i < n)
    {
        if (s[i] != '?')
        {
            i++;
            continue;
        }

        int l = i;
        while (i < n && s[i] == '?')
            i++;
        int r = i - 1;

        char left = (l - 1 >= 0) ? s[l - 1] : 0;
        char right = (i < n) ? s[i] : 0;

        char bestChar = 'a';
        long long bestValue = LLONG_MAX;

        for (char c = 'a'; c <= 'z'; c++)
        {
            long long val = 0;

            if (left)
                val += llabs(cost[left - 'a'] - cost[c - 'a']);
            if (right)
                val += llabs(cost[c - 'a'] - cost[right - 'a']);

            if (val < bestValue || (val == bestValue && c < bestChar))
            {
                bestValue = val;
                bestChar = c;
            }
        }

        for (int k = l; k <= r; k++)
            s[k] = bestChar;
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
