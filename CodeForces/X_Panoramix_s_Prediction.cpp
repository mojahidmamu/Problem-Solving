#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

bool isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int nextPrime = n + 1;
    while (true)
    {
        if (isPrime(nextPrime))
        {
            break;
        }
        nextPrime++;
    }

    if (nextPrime == m)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
