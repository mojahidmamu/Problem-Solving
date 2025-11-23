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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> freq(n + 1, 0);
        for (int x : arr)
        {
            if (x <= n)
            {
                freq[x]++;
            }
        }

        long long ans = 0;
        for (int v = 0; v <= n; v++)
        {
            int cnt = freq[v];
            if (cnt == 0)
            {
                continue;
            }

            if (v == 0)
            {
                ans += cnt;
            }
            else if (cnt < v)
            {
                ans += cnt;
            }
            else
            {
                ans += min(cnt, cnt - v);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
