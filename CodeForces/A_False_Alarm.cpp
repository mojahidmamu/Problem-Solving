#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int L = n + 1, R = 0;

        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (a == 1)
            {
                L = min(L, i);
                R = max(R, i);
            }
        }
        if (R - L + 1 <= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
