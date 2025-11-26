#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        long long x = arr[i];
        while (x % 2 == 0)
        {
            x /= 2;
            cnt++;
        }
        ans = min(ans, cnt);
    }


    cout << ans << endl;

    return 0;
}
