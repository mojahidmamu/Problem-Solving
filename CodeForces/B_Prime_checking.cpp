#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
    cin >> n;
    //   Determine whether N is prime or not.
    if (n <= 1)
    {
        cout << "NO\n";
    }
    else
    {
        bool is_prime = true;
        for (long long i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
