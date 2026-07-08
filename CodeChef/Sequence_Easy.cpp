#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

const int MOD = 998244353;
 
const int MAXN = 2005;
long long fact[MAXN];

void precompute()
{
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;

    
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));

    dp[0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            long long sum = 0;
            for (int len = 0; len < k && len <= j; len++)
            {
                if (i - len - 1 >= 0)
                {
                    sum = (sum + dp[i - len - 1][j - len]) % MOD;
                }
                else if (j == len)
                { 
                    sum = (sum + 1) % MOD;
                }
            }
            dp[i][j] = sum;
        }
    }

    long long total_sum = 0;

    
    for (int i = 0; i <= n; i++)
    {
        long long valid_subsets = dp[n][i];
        long long permutations = (valid_subsets * fact[i]) % MOD;
        permutations = (permutations * fact[n - i]) % MOD;

        
        if (i < n)
        {
            total_sum = (total_sum + permutations) % MOD;
        }
    }

    cout << total_sum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
