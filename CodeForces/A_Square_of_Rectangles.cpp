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
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        bool canFormSquare = false;
        int totalArea = l1 * b1 + l2 * b2 + l3 * b3;
        if (totalArea % 4 == 0)
        {
            int side = sqrt(totalArea / 4);
            if (side * side * 4 == totalArea)
            {
                // Check all combinations to form the square
                vector<pair<int, int>> rects = {{l1, b1}, {l2, b2}, {l3, b3}};
                sort(rects.begin(), rects.end(), [](pair<int, int> a, pair<int, int> b)
                     { return a.first * a.second > b.first * b.second; });

                // Try to fit rectangles into the square
                for (int mask = 0; mask < (1 << 3); ++mask)
                {
                    int usedArea = 0;
                    for (int i = 0; i < 3; ++i)
                    {
                        if (mask & (1 << i))
                        {
                            usedArea += rects[i].first * rects[i].second;
                        }
                    }
                    if (usedArea == side * side)
                    {
                        canFormSquare = true;
                        break;
                    }
                }
            }
        }

        cout << (canFormSquare ? "YES" : "NO") << "\n";
    }
    return 0;
}
