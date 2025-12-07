#include <bits/stdc++.h>
using namespace std;

long long power(int base, int exponent)
{
    long long result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}

int calculateSum(int a, int b)
{
    long long sum = power(a, 0) - 1;
    for (int i = 2; i <= b; i += 2)
    {
        sum += power(a, i);
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int a, b;
    cin >> a >> b;
    cout << calculateSum(a, b) << "\n";

    return 0;
}
