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
        int n, y, r;
        cin >> n >> y >> r;

        int suspended_from_yellow = y / 2;
        int total_suspended = r + suspended_from_yellow;

        total_suspended = min(total_suspended, n);
        cout << total_suspended << endl;
    }

    return 0;
}
