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

    int count = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
         
        int deff = abs(p - q);
        if (deff > 2)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
