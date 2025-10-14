#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;

        // current position:
        long long cx = 0, cy = 0;
        long long step = 1;
        bool isPossible = true;
        int ans = 0;
        while (cx < x || cy < y)
        {
            if (ans % 2 == 0)
            {
                if (cx + step <= x)
                {
                    cx += step;
                    ans++;
                }
                else
                {
                    isPossible = false;
                    break;
                }
            }
            else if (ans % 2 == 1)
            {
                if (cy + step <= y)
                {
                    cy += step;
                    ans++;
                } 
                else
                {
                    isPossible = false;
                    break;
                }
            }
            else 
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}
