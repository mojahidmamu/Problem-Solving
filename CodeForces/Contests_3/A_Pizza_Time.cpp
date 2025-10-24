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
        int n;
        cin >> n;
        long long hao = 0;
        while (n >= 3)
        {
            long long x = n / 3;
            hao += x;
            n = n - 2 * x;
        }
        cout << hao << "\n";
    }

    return 0;
}
