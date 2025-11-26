#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << 1 << endl;
        return 0;
    }

    int prev2 = 0;
    int prev1 = 1;
    int cur = 0;
    for (int i = 3; i <= n; i++)
    {
        cur = prev2 + prev1;
        prev2 = prev1;
        prev1 = cur;
    }
    cout << cur << endl;

    return 0;
}
