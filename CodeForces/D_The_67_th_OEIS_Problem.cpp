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

        vector<long long> a(n);

        a[0] = 1;
        for (int i = 2; i <= n; i++)
        {
            a[i - 1] = 1LL * (i + 1) * (i + 2);
        }

        for (auto x : a)
            cout << x << " ";
        cout << '\n';
    }

    return 0;
}
