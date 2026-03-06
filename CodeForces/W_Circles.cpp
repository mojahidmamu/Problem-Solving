#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long x1, y1, x2, y2;
    long long x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    // centers
    double c1x = (x1 + x2) / 2.0;
    double c1y = (y1 + y2) / 2.0;

    double c2x = (x3 + x4) / 2.0;
    double c2y = (y3 + y4) / 2.0;

    // radius
    double r1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) / 2.0;
    double r2 = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4)) / 2.0;

    // center distance
    double d = sqrt((c1x - c2x) * (c1x - c2x) + (c1y - c2y) * (c1y - c2y));

    if (d <= r1 + r2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
