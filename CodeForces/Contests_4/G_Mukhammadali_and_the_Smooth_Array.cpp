#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long> cost(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }

        vector<long long> value = arr;
        sort(value.begin(), value.end());
        value.erase(unique(value.begin(), value.end()), value.end());

        int m = value.size();
        vector<long long> dp(m, LLONG_MAX);

        for (int j = 0; j < m; j++)
        {
            if (arr[0] == value[j])
            {
                dp[j] = 0;
            }
            else
            {
                dp[j] = cost[0];
            }
        }

        for (int i = 1; i < n; i++)
        {
            vector<long long> new_dp(m, LLONG_MAX);
            long long prefix_min = LLONG_MAX;
            for (int j = 0; j < m; j++)
            {
                prefix_min = min(prefix_min, dp[j]);
                long long change_cost = (arr[i] == value[j] ? 0 : cost[i]);
                new_dp[j] = prefix_min + change_cost;
            }
            dp = new_dp;
        }

        cout << *min_element(dp.begin(), dp.end()) << endl;
    }

    return 0;
}
