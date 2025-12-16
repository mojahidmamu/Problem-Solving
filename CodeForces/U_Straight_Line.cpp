#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
