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
        vector<ll> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        long long max_c = 0;
        long long big_sum = 0;
        long long cap_multi = 0;
        long long num_big = 0;
        long long num_ones = 0;
        for (long long i = 0; i < n; i++)
        {
            if (c[i] == 1)
            {
                num_ones++;
            }
            else
            {
                num_big++;
                big_sum += c[i];
                if (c[i] > max_c)
                    max_c = c[i];
                cap_multi += (c[i] - 2) / 2;
            }
        }
        long long ans = 0;
        if (big_sum >= 3)
        {
            ans = big_sum;
        }
        long long single = 0;
        long long add_single = min(num_ones, max_c / 2);
        if (max_c + add_single >= 3)
        {
            single = max_c + add_single;
        }
        ans = max(ans, single);
        long long multi_with = 0;
        if (num_big >= 1)
        {
            long long add_m = min(num_ones, cap_multi);
            multi_with = big_sum + add_m;
            if (multi_with >= 3)
                ans = max(ans, multi_with);
        }
        cout << ans << endl;
    }

    return 0;
}
