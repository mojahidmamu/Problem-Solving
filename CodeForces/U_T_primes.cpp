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

    int n;
    cin >> n;
    bool tPrime = false;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (n--)
    {
        if (tPrime == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << enld;
        }
    }

    return 0;
}
