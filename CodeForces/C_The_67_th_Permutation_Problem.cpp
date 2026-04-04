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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        for (int  i = 1; i <= n; i++)
        {
            cout << i << " " << n + i << " " << 2 * n + i << '\n';
        }
        cout << '\n';
        
    }

    return 0;
}
