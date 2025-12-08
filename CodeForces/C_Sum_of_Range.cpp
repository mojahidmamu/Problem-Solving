#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long a, b;
    cin >> a >> b;
    long long sum = 0;
    long long evenSum = 0;
    long long oddSum = 0;
    for (long long i = a; i <= b; i++)
    {
        sum += i;
        if (i % 2 == 0)
        {
            evenSum += i;
        }
        else
        {
            oddSum += i;
        }
    }
    cout << sum << "\n";
    cout << evenSum << "\n";
    cout << oddSum << "\n";

    return 0;
}
