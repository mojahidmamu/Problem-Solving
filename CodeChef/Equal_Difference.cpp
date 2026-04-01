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

        unordered_map<long long, long long> freq;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            long long val = x - i;
            freq[val]++;
        }

        long long ans = 0;
        for (auto &p : freq)
        {
            long long f = p.second;
            ans += (f * (f - 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
