#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int minX = min(x1, min(x2, min(x3, x4)));
    int maxX = max(x1, max(x2, max(x3, x4)));
    int minY = min(y1, min(y2, min(y3, y4)));
    int maxY = max(y1, max(y2, max(y3, y4)));

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        if (minX <= x && x <= maxX && minY <= y && y <= maxY)
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
