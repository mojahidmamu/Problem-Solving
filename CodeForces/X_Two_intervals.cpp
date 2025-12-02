#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    long long left = max(l1, l2);
    long long right = min(r1, r2);
    if (left <= right)
    {
        cout << l2 << " " << r1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
