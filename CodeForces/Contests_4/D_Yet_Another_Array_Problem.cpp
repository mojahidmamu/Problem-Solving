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
        vector<long long> arr(n);
        ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long g = arr[0];
        for (int i = 1; i < n; i++)
        {
            g = __gcd(g, arr[i]);
        }

        if (g == 1)
        {
            cout << 2 << endl;
            continue;
        }

        long long ans = -1;
        for (long long x = 2; x <= 100; x++)
        {
            if (__gcd(g, x) == 1)
            {
                ans = x;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
