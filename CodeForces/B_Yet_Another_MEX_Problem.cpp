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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<vector<int>> pos(n + 1);
        for (int i = 0; i < n; i++)
        {
            pos[arr[i]].push_back(i);
        }

        int L = n, R = -1;
        int mex = 0;

        while (true)
        {
            if (pos[mex].empty())
            {
                break;
            }

            L = min(L, pos[mex][0]);
            R = max(R, pos[mex].back());

            if (R - L + 1 >= k)
            {
                break;
            }

            mex++;
        }

        cout << mex << '\n';
    }

    return 0;
}
