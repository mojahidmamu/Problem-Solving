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

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(all(a));
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 && m > 0)
            {
                ans += -a[i];
                m--;
            }
            else
                break;
        }
        cout << ans << endl;
    }

    return 0;
}
