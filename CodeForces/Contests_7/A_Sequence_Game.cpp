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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long x;
        cin >> x;
        bool possible = false;
        for (int i = 0; i < n - 1; i++)
        {
            long long mx = max(arr[i], arr[i + 1]);
            long long mn = min(arr[i], arr[i + 1]);
            if (mx - mn >= 2 * x)
            {
                possible = true;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
