#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(n, 0);
        int remaining = k;

        // store a[i] with original index
        vector<pair<int, int>> friends;
        for (int i = 0; i < n; i++)
            friends.push_back({a[i], i});

        // sort descending by capacity
        sort(friends.rbegin(), friends.rend());

        for (auto p : friends)
        {
            int cap = p.first;
            int idx = p.second;
            int give = min(cap, remaining);
            b[idx] = give;
            remaining -= give;
            if (remaining == 0)
                break;
        }

        long long happiness = 0;
        int max_so_far = 0;
        for (int i = 0; i < n; i++)
        {
            max_so_far = max(max_so_far, b[i]);
            happiness += max_so_far;
        }

        cout << happiness << "\n";
    }

    return 0;
}
