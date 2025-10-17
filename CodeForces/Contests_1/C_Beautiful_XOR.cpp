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
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }

        if ((a | b) != b)
        {
            cout << -1 << "\n";
            continue;
        }

        long long x = a ^ b;
        if (x <= a)
        {
            cout << 1 << "\n"
                 << x << "\n";
        }
        else
        {
            long long high_bit = 1LL << (63 - __builtin_clzll(x));
            long long first = high_bit ^ x;
            long long second = x ^ first;
            cout << 2 << "\n"
                 << first << " " << second << "\n";
        }
    }

    return 0;
}
