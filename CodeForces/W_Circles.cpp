#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;

    double cx1 = (x1 + x2) / 2.0;
    double cy1 = (y1 + y2) / 2.0;
    double cx2 = (x3 + x4) / 2.0;
    double cy2 = (y3 + y4) / 2.0;

    double r1 = sqrt((cx1 - x1) * (cx1 - x1) + (cy1 - y1) * (cy1 - y1));
    double r2 = sqrt((cx2 - x3) * (cx2 - x3) + (cy2 - y3) * (cy2 - y3));

    double d = sqrt((cx1 - cx2) * (cx1 - cx2) + (cy1 - cy2) * (cy1 - cy2));
    if (r1 + r2 >= d && abs(r1 - r2) <= d)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

        return 0;
}
