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
            cout << 2 << "\n"
                 << a << " " << x << "\n";
            
        }
    }

    return 0;
}
