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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll operations = 0;
        for (int i = 0; i < n; i++)
        {
            // if (a[i] < b[i] && b[i] - a[i] <= a[i] * 2)
            // {
            //     continue;
            // }
            // else if (a[i] > b[i] && a[i] - b[i] <= b[i] * 2)
            // {
            //     continue;
            // }
            // else if (a[i] == b[i] || a[i] - b[i] <= 200 || b[i] - a[i] <= 200) 
            // {
            //     operations++;
            // }
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i]) {
                operations++;
            }
        }
        cout << operations << endl;
    }

    return 0;
}
