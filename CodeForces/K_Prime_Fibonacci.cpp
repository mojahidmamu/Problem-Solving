#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isPrime(ll n)
{
    if (n < 2)
    {
        return false;
    }
    if (n % 2 == 0)
    {
        return n == 2;
    }

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> fib(51);
    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i <= 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    vector<bool> primeFib(51);
    for (int i = 1; i <= 50; i++)
    {
        primeFib[i] = isPrime(fib[i]);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << (primeFib[n] ? "prime\n" : "not prime\n");
    }

    return 0;
}
