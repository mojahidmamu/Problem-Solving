#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long dx = x2 - x1;
    long long dy = y2 - y1;
    double distance = sqrt(dx * dx + dy * dy);
    cout << fixed << setprecision(9) << distance << "\n";

    return 0;
}
