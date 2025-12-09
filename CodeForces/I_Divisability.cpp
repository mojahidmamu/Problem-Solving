#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long a, b, x;
    cin >> a >> b >> x;

    long long L = min(a, b);
    long long R = max(a, b);

    long long first = ((L + x - 1) / x) * x;
    long long last = (R / x) * x;
    
    if (first > last)
    {
        cout << 0 << "\n";
        return 0;
    }

    long long n = (last - first) / x + 1;
    long long sum = n * (first + last) / 2;
    cout << sum << "\n";

    return 0;
}
