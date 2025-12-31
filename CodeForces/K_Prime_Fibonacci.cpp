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
    for (int i = 2; i * i <= n; i++)
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (isPrime(fib[n]) == true)
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "not prime" << endl;
        }
    }

    return 0;
}
