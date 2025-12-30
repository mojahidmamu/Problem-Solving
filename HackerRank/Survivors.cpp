#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll  t;
    cin >> n >> t;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll low = 0, high = 1e18;
    ll ans = 0;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll need = 0;
        bool overflow = false;

        for (int i = 0; i < n; i++)
        {
            ll gaps = (t - 1) / arr[i];
            ll times = (mid + gaps) / (gaps + 1);
            need += times;

            if (need > mid)
            {
                overflow = true;
                break;
            }
        }

        if (!overflow)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
