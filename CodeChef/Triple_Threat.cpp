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
        int n, x;
        cin >> n >> x;

        vector<array<int, 3>> col(n);

        int k = min(n, (3 * n - x) / 2);

        int rem = x;

        // First k columns: at most one 1
        for (int i = 0; i < k; i++)
        {
            if (rem > 3 * (n - i - 1))
            {
                col[i] = {1, 0, 0};
                rem--;
            }
            else
            {
                col[i] = {0, 0, 0};
            }
        }

        // Remaining columns: need majority ones
        for (int i = k; i < n; i++)
        {
            int left = n - i - 1;

            if (rem - 3 >= 0 && rem - 3 <= 3 * left)
            {
                col[i] = {1, 1, 1};
                rem -= 3;
            }
            else
            {
                col[i] = {1, 1, 0};
                rem -= 2;
            }
        }

        string ans(3 * n, '0');

        for (int i = 0; i < n; i++)
        {
            ans[i] = col[i][0] + '0';
            ans[i + n] = col[i][1] + '0';
            ans[i + 2 * n] = col[i][2] + '0';
        }

        cout << ans << '\n';
    }

    return 0;
}
