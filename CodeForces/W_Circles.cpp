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

    // Diameter squared
    long long d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    long long d2 = (x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4);

    // Center distance squared * 4
    long long dx = (x1 + x2) - (x3 + x4);
    long long dy = (y1 + y2) - (y3 + y4);
    long long dist4 = dx * dx + dy * dy;

    // (r1 + r2)^2 * 4
    long long sum = d1 + d2 + 2 * sqrt((long double)d1 * d2);
    long long diff = d1 + d2 - 2 * sqrt((long double)d1 * d2);

    if (diff <= dist4 && dist4 <= sum)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
