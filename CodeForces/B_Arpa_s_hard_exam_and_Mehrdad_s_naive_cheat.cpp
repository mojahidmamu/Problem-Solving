#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    ll r = n % 4;
    if (r == 1)
    {
        cout << 8 << endl;
    }
    else if(   r == 2)
    {
        cout << 4 << endl;
    }
    else if(r == 3)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 6 << endl;
    }

    return 0;
}
