#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

// GCD
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// LCM
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

// Power (a^b)
ll power(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

// Check Prime
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

// Print vector (debug)
void printVector(vector<ll> &v)
{
    for (ll x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int score = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[(i + 1) % n])
            {
                score++;
            }
        }

        if (score == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << score << endl;
        }

        // if (s[0] == s[n - 1])
        // {
        //     cout << score + 1 << endl;
        // }
        // else
        // {
        //     cout << score << endl;
        // }
    }

    return 0;
}
