#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans = __gcd(ans, (ll)abs(arr[i] - arr[0]));
        }

        cout << ans << endl;
    }

    return 0;
}
