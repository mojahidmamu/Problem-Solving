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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int row1 = min(a, m);
        int row2 = min(b, m);
        int total = row1 + row2;
        int raw_remaining = 2 * m - total;
        int result = total + min(c, raw_remaining);
        cout << result << "\n";
    }
    return 0;
}
