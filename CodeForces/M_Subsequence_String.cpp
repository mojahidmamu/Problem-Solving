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
    vector<int> dp(n + 1, 0);
    for (int i = n - 1; i >= 0; --i)
    {
        dp[i] = dp[i + 1];
        if (s[i] == 'a')
        {
            dp[i] = max(dp[i], 1 + dp[i + 1]);
        }
        else if (s[i] == 'b')
        {
            dp[i] = max(dp[i], dp[i + 1]);
        }
    }
    cout << dp[0] << "\n";

    return 0;
}
