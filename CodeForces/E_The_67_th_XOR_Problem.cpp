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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        long long max_val = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                max_val = max(max_val, a[i] ^ a[j]);
            }
        }
        cout << max_val << '\n';
    }

    return 0;
}
