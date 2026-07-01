#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    long long max_profit = 0;

    for (int j = 0; j < n; j++)
    {
        long long v = a[j];

        vector<long long> costs(n);
        for (int i = 0; i < n; i++)
        {
            if (v > a[i])
            {
                costs[i] = (v - a[i]) * c[i];
            }
            else
            {
                costs[i] = 0;
            }
        }

        nth_element(costs.begin(), costs.begin() + k, costs.end());

        long long total_cost = 0;
        for (int i = 0; i <= k; i++)
        {
            total_cost += costs[i];
        }

        long long current_profit = (long long)k * v - total_cost;
        max_profit = max(max_profit, current_profit);
    }

    cout << max_profit << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}