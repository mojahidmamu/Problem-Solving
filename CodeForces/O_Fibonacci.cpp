#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 1)
    {
       return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
    cin >> n;

    cout << fibo(n) << endl;

    // long long prev2 = 0;
    // long long prev1 = 1;
    // long long cur = 0;
    // for (long long i = 3; i <= n; i++)
    // {
    //     cur = prev2 + prev1;
    //     prev2 = prev1;
    //     prev1 = cur;
    // }
    // cout << cur << endl;

    return 0;
}
