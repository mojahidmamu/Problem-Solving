#include <bits/stdc++.h>
using namespace std;
bool isDream(int x, int y)
{
    int mn = min(x, y);
    int mx = max(x, y);
    if (mx <= 2 * mn + 2)
    {
        return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int a2 = c - a;
        int b2 = d - b;

        if (isDream(a2, b2) && isDream(a, b))
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
