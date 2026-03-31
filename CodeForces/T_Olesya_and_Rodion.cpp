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

    int n, t;
    cin >> n >> t;

    if (t == 10)
    {
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1;
            for (int i = 0; i < n - 1; i++)
            {
                cout << 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }

    return 0;
}
