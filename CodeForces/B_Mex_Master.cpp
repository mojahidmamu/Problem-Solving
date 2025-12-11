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

        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                cnt0++;
            else if (x == 1)
                cnt1++;
        }

        int ans = min(cnt0, 2) - 1 + min(cnt1, 1);
        cout << ans << "\n";
    }

    return 0;
}
