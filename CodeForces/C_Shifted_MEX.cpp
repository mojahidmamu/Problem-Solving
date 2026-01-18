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
        //  MEX(a) after the operation has been performed.
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int m = a.size();
        ll ans = 0;
        for (int i = 0; i < m; i++)
        {
            ll base = a[i];
            ll mex = 0;

            for (int j = i; j < m; j++)
            {
                if (a[j] - base == mex)
                {
                    mex++;
                }
                else if (a[j] - base > mex)
                {
                    break;
                }
            }
            ans = max(ans, mex);
        }

        cout << ans << endl;
    }

    return 0;
}
