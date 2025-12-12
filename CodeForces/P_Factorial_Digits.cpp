#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 2; i <= n; ++i)
    {
        fact *= i;
    }
    int digit_count = 0;
    while (fact > 0)
    {
        fact /= 10;
        digit_count++;
    }
    cout << "Number of digits of " << n << "! is " << digit_count << "\n";

    return 0;
}
