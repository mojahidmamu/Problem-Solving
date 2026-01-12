#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> diff(n - 1);
        for (int i = 0; i < n - 1; i++)
            diff[i] = abs(arr[i + 1] - arr[i]);

        vector<ll> ans(n, 0); // ans[k] = number of subarrays for k

        // Store (diff value, index) and sort descending
        vector<pair<int, int>> diffs;
        for (int i = 0; i < n - 1; i++)
            diffs.push_back({diff[i], i});
        sort(diffs.rbegin(), diffs.rend());

        set<int> active; // positions of diffs >= current k
        ll total = 0;

        int prevK = n; // start from n-1 down to 1
        for (size_t i = 0; i < diffs.size(); i++)
        {
            int d = diffs[i].first;
            int idx = diffs[i].second;
            // Fill ans for k between prevK-1 down to d+1
            for (int k = prevK - 1; k > d; k--)
                ans[k] = total;
            prevK = d + 1;

            // Insert idx into active set
            auto it = active.lower_bound(idx);
            int left = (it == active.begin()) ? -1 : *prev(it);
            int right = (it == active.end()) ? n - 1 : *it;

            ll l = idx - left;
            ll r = right - idx;

            total += l * r;
            active.insert(idx);
        }

        // Fill remaining k values
        for (int k = prevK - 1; k >= 1; k--)
            ans[k] = total;

        for (int k = 1; k <= n - 1; k++)
            cout << ans[k] << (k == n - 1 ? '\n' : ' ');
    }

    return 0;
}
