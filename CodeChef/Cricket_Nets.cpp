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
        int x;
        cin >> x;
        int ans = 0;
        if (x <= 20)
        {
            ans = x * 10;
        }
        else
        {
            ans = 200 + ((x - 20) / 2) * 5;
        }
        cout << ans << endl;
    }

    return 0;
}
