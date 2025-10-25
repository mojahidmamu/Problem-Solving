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
        long long x, y, a;
        cin >> x >> y >> a;
        int T = 2 * a + 1;
        long long pairSum = 2 * (x + y);
        long long remaining = T % pairSum;
        bool b_wins;
        if (remaining == 0)
        {
            b_wins = true;
        }
        else if (remaining <= 2 * x)
        {
            b_wins = true;
        }
        else
        {
            b_wins = false;
        }

        if (b_wins)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
