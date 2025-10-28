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
        int n, k, p;
        cin >> n >> k >> p;

        if (k < -n * p || k > n * p)
        {
            cout << -1 << endl;
        }
        else if (k == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int ops = (abs(k) + p - 1) / p;
            if (ops > n)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << ops << endl;
            }
        }
    }

    return 0;
}
