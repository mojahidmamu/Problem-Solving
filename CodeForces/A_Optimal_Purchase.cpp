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
        ll n, a, b;
        cin >> n >> a >> b;
        long long full_groups = n / 3;
        long long remainder = n % 3;

        // Option 1: all individual keys
        long long cost_all_individual = n * a;

        // Option 2: use as many group keys as possible, then handle remainder
        long long cost_group_mix = full_groups * b + min(remainder * a, b);

        // Answer is the minimum of the two
        long long ans = min(cost_all_individual, cost_group_mix);

        cout << ans << endl;
    }

    return 0;
}
