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
        int n;
        cin >> n;
        vector<int> a1(n), a2(n);
        for (int i = 0; i < n; i++)
            cin >> a1[i];
        for (int i = 0; i < n; i++)
            cin >> a2[i];

        // prefix max for top row
        vector<int> prefix_max(n);
        prefix_max[0] = a1[0];
        for (int i = 1; i < n; i++)
            prefix_max[i] = max(prefix_max[i - 1], a1[i]);

        // suffix max for bottom row
        vector<int> suffix_max(n);
        suffix_max[n - 1] = a2[n - 1];
        for (int i = n - 2; i >= 0; i--)
            suffix_max[i] = max(suffix_max[i + 1], a2[i]);

        int64_t ans = 0;

        // iterate over all possible starting columns of down-right path
        // using two pointers idea
        map<int, int> left_count; // count of how many times a number appears in prefix
        for (int l = 1; l <= 2 * n; l++)
            left_count[l] = 0;

        int max_needed = 0;
        for (int c = 0; c < n; c++)
        {
            int mx = max(prefix_max[c], suffix_max[c]);
            // valid intervals [l, r] must satisfy l <= min_in_path, r >= max_in_path
            ans += (int64_t)(mx) * (2 * n - mx + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}
