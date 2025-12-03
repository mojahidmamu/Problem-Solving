#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
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

    long long prev2 = 0;
    long long prev1 = 1;
    long long cur = 0;
    for (long long i = 3; i <= n; i++)
    {
        cur = prev2 + prev1;
        prev2 = prev1;
        prev1 = cur;
    }
    cout << cur << endl;

    return 0;
}
