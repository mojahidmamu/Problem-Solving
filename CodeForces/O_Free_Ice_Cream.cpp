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

    int n, x;
    cin >> n >> x;
    int distressed = 0;
    while (n--)
    {
        char c;
        ll d;
        cin >> c >> d;
        if (c == '+')
        {
            x += d;
        }
        else
        {
            if (x >= d)
            {
                x -= d;
            }
            else
            {
                distressed++;
            }
        }
    }

    cout << x << " " << distressed << endl;
    return 0;
}
