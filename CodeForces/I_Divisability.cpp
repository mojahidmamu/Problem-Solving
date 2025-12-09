#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long a, b, x;
    cin >> a >> b >> x;

    long long first = (a + x - 1) / x * x;
    long long last = b / x * x;
    if (first > b)
    {
        cout << 0 << "\n";
    }

    long long n = (last - first) / x + 1;
    long long sum = n * (first + last) / 2;
    cout << sum << "\n";

    return 0;
}
