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

        int first;
        cin >> first;
        int ans = 0;

        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < first)
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
