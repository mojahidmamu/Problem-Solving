#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        long long d = 0, temp = n;
        while (temp > 1)
        {
            temp /= 2;
            d++;
        }

        if (k >= d)
        {
            cout << 0 << "\n";
        }
        else
        {
            long long safe = n - ((1LL << k) - 1);
            cout << safe << "\n";
        }
    }

    return 0;
}
