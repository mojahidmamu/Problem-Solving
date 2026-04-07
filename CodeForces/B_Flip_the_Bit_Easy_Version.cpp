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

        int segments = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != x)
            {
                segments++;
                while (i < n && a[i] != x)
                {
                    i++;
                }
                i--; // Adjust for the outer loop increment
            }
        }

        cout << segments << endl;
    }

    return 0;
}
