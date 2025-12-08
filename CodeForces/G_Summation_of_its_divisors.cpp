#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
    cin >> n;
    long long divisor_sum = 0;
    for (long long i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            divisor_sum += i;
            if (i != n / i)
            {
                divisor_sum += n / i;
            }
        }
    }
    cout << divisor_sum << "\n";

    return 0;
}
