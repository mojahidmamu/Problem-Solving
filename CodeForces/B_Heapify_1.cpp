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
        cin >> n;

        vector<int> arr(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        vector<int> vis(n + 1, 0);
        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i])
            {
                continue;
            }

            vector<int> idx, val;
            int x = i;
            while (x <= n && !vis[x])
            {
                vis[x] = 1;
                idx.push_back(x);
                val.push_back(arr[x]);
                x *= 2;
            }

            sort(idx.begin(), idx.end());
            sort(val.begin(), val.end());

            if (idx != val)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
