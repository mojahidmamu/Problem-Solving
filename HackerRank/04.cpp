#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        // Check collinear
        long long area2 = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
        if (area2 != 0)
        {
            cout << "YES\n"; // Not collinear → circle exists
            continue;
        }

        // Check center condition
        auto sq = [](long long dx, long long dy)
        { return dx * dx + dy * dy; };
        if (sq(x1 - x2, y1 - y2) == sq(x1 - x3, y1 - y3) ||
            sq(x2 - x1, y2 - y1) == sq(x2 - x3, y2 - y3) ||
            sq(x3 - x1, y3 - y1) == sq(x3 - x2, y3 - y2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}