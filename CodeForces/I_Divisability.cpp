#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long a, b, x;
    cin >> a >> b >> x;

    long long sum = 0;
    for (long long i = a; i <= b; i++)
    {
        if (i % x == 0)
        {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}
