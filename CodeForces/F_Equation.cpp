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

int caluculateSum(int a, int b)
{
    return a + b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int a, b;
    cin >> a >> b;
    cout << caluculateSum(a, b) << "\n";

    return 0;
}
