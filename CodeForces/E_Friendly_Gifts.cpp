#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<vector<pair<int, int>>> good(n + 1);

        for (int i = 0; i < n; ++i)
        {
            vector<int> freq(n + 1, 0);
            int mn = a[i], mx = a[i];
            bool dup = false;
            for (int j = i; j < n; ++j)
            {
                int v = a[j];
                if (freq[v] > 0)
                {
                    dup = true;
                    break;
                }
                freq[v]++;
                if (v < mn)
                    mn = v;
                if (v > mx)
                    mx = v;
                int len = j - i + 1;
                if (mx - mn + 1 == len)
                {
                    good[len].emplace_back(mn, i);
                }
            }
        }

        int ans = 0;
        for (int L = n; L >= 1; --L)
        {
            if (good[L].empty())
                continue;

            // for each possible minimum value, store the smallest and largest start index
            vector<int> min_start(n + 2, n + 1);
            vector<int> max_start(n + 2, -1);
            for (auto &p : good[L])
            {
                int m = p.first, s = p.second;
                if (s < min_start[m])
                    min_start[m] = s;
                if (s > max_start[m])
                    max_start[m] = s;
            }

            bool found = false;
            for (auto &p : good[L])
            {
                int m = p.first, s = p.second;

                // try to pair with an interval of minimum m+L (higher half)
                if (m + L <= n)
                {
                    if (max_start[m + L] >= s + L || min_start[m + L] <= s - L)
                    {
                        ans = L;
                        found = true;
                        break;
                    }
                }
                // try to pair with an interval of minimum m-L (lower half)
                if (m - L >= 1)
                {
                    if (max_start[m - L] >= s + L || min_start[m - L] <= s - L)
                    {
                        ans = L;
                        found = true;
                        break;
                    }
                }
            }
            if (found)
                break;
        }
        cout << ans << '\n';
    }

    return 0;
}
