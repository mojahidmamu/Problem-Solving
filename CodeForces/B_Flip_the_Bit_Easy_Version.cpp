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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        // int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // sum += a[i];
        }

        int p;
        cin >> p;
        p--; // 0-based index

        int x = a[p];
        int left = 0, right = 0;

        // left side
        for (int i = 0; i < p;)
        {
            if (a[i] != x)
            {
                left++;
                while (i < p && a[i] != x)
                    i++;
            }
            else
            {
                i++;
            }
        }

        // right side
        for (int i = p + 1; i < n;)
        {
            if (a[i] != x)
            {
                right++;
                while (i < n && a[i] != x)
                    i++;
            }
            else
            {
                i++;
            }
        }

        cout << max(left, right) << endl;
    }

    return 0;
}
