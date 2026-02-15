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
        int n;
        cin >> n;

        vector<int> arr(n  + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        vector<int> vis(n + 1, 0);
        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i])
            {
                continue;
            }

            vector<int> idx, val;
            int x = i;
            while (x <= n && !vis[x])
            {
                vis[x] = 1;
                idx.push_back(x);
                val.push_back(arr[x]);
                x *= 2;
            }

            sort(idx.begin(), idx.end());
            sort(val.begin(), val.end());

            if (idx != val)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
