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

    int n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    long long mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    auto can = [&](long long d)
    {
        long long people = 0;
        for (auto x : arr)
        {
            people += x / d;
        }
        return people >= m;
    };

    long long l = 1, r = mx, ans = 0;

    while (l <= r)
    {
        long long mid = (l + r) / 2;

        if (can(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << "\n";

    

    return 0;
}
