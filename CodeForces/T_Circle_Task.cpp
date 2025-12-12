#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long x, y, r, n;
    cin >> x >> y >> r >> n;

    int inside_count = 0;
    for (int i = 0; i < n; ++i)
    {
        long long px, py;
        cin >> px >> py;
        long long dx = px - x;
        long long dy = py - y;
        if (dx * dx + dy * dy <= r * r)
        {
            inside_count++;
        }
    }
    cout << inside_count << "\n";
    return 0;
}
