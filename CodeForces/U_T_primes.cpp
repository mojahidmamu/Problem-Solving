#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

const int N = 1e6 + 5;
bool isPrime[N];

void seive()
{
    fill(isPrime, isPrime + N, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i *i < N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    seive();

    int n;
    cin >> n;

    while (n--)
    {
        ll x;
        cin >> x;

        ll root = sqrt(x);

        if (root * root == x && isPrime[root])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
