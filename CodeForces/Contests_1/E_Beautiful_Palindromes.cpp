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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> ans;
        for (int i = 0; ans.size() < k; i++)
        {
            if (i != a.back())
            {
                ans.push_back(i);
            }
            if (i == n)
            {
                i = 0;
            }
        }

        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << (i == k - 1 ? "\n" : " "); 
        }
    }

    return 0;
}
