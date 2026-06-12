#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

const int MAXA = 500000;
const long long MOD = 1000000007;

int spf[MAXA + 1];

void build_spf()
{
    for (int i = 0; i <= MAXA; i++)
        spf[i] = i;

    for (int i = 2; i * i <= MAXA; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= MAXA; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    build_spf();

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        unordered_map<int, long long> totalExp;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            while (val > 1)
            {
                int p = spf[val];
                int cnt = 0;

                while (val % p == 0)
                {
                    val /= p;
                    cnt++;
                }

                totalExp[p] += cnt;
            }
        }

        long long ans = 1;

        for (auto &it : totalExp)
        {
            long long sumExp = it.second;
            ans = ans * (sumExp + 1) % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}
