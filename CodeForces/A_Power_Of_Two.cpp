#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
    cin >> n;
    //   Determine whether N is power of 2 or not.
    if (n > 0 && (n & (n - 1)) == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    // ---- end of your code ----
    return 0;
}
