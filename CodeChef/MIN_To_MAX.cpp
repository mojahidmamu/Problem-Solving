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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // countNonMinimum
        int minVal = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < minVal)
            {
                minVal = a[i];
            }
        }

        ll operations = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != minVal)
            {
                operations++;
            }
        }
        cout << operations << endl;
    }

    return 0;
}
