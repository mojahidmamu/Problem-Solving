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
        int n;
        cin >> n;

        int common_left = -100000;
        int common_right = 100000;
        int common_bottom = -100000;
        int common_top = 100000;

        for (int i = 0; i < n; i++)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            common_left = max(x1, common_left);
            common_right = min(x1 + 10, common_right);
            common_bottom = max(y1, common_bottom);
            common_top = min(y1 + 10, common_top);
        }

        int area = 0;
        if (common_right > common_left && common_top > common_bottom)
        {
            area = (common_right - common_left) * (common_top - common_bottom);
        }
        cout << "Case #" << t << ": " << area << "\n";
    }
    return 0;
}
