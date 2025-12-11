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

        string s;
        cin >> s;

        vector<int> next1(n, -1);
        int last = -1;

         
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            int idx = i % n;
            if (s[idx] == '1')
                last = idx;
            next1[idx] = last;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                int j = next1[i];
                int dist = (j - i + n) % n;
                ans = max(ans, dist);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
