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
        long long  n;
        cin >> n;
        long long Hao = 0;
        while (n >= 3)
        {
            long long x = n / 3;
            Hao += x;
            n = n - 2 * x;
        }
        cout << Hao << "\n";
    }

    return 0;
}
