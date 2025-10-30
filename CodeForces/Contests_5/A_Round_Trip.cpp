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
        long long R, X, D;
        int n;
        cin >> R >> X >> D >> n;
        string s;
        cin >> s;

        long long low = R, high = R;
        int rater = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                low = max(0LL, low - D);
                high = high + D;
                rater++;
            }
            else
            {
                if (low >= X)
                {
                   continue;
                }
                low = max(0LL, low - D);
                high = min(high + D, X - 1);
                rater++;
            }
        }

        cout << rater << endl;
    }

    return 0;
}
