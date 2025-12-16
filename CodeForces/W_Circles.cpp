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

    bool is_circle1 = (x1 == x2) && (y1 == y2);
    bool is_circle2 = (x3 == x4) && (y3 == y4);

    if (is_circle1 && is_circle2)
    {
        if (x1 == x3 && y1 == y3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else if (is_circle1 || is_circle2)
    {
        cout << "NO\n";
    }
    else
    {
        int64_t dx1 = x2 - x1;
        int64_t dy1 = y2 - y1;
        int64_t dx2 = x4 - x3;
        int64_t dy2 = y4 - y3;
        int64_t cross = dx1 * dy2 - dy1 * dx2;
        if (cross == 0)
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
