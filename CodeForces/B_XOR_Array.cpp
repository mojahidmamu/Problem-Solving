#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    const int SHIFT = 10;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        
        vector<long long> pref(n + 1);

        for (int i = 0; i <= n; ++i)
        {
             pref[i] = (1LL * i) << SHIFT; 
        }

        pref[r] = pref[l - 1];

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            a[i] = pref[i] ^ pref[i - 1];
        }

        // output:
        for (int i = 1; i <= n; ++i)
        {
            if (i > 1)
            {
                cout << ' ';
            }
            cout << a[i] ;
        }
        cout << '\n';
    }
    return 0;
}
