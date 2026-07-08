#include <iostream>
#include <vector>

using namespace std;

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

    // dp[i][j] stores the number of valid subsets of size j from first i elements
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));
    // pref_diag[i][j] stores the prefix sum of DP values along the diagonal (i-1, j-1) -> (i, j)
    vector<vector<long long>> pref_diag(n + 1, vector<long long>(n + 1, 0));

    dp[0][0] = 1;
    pref_diag[0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            long long sum = 0;

            // We need to sum dp[i - len - 1][j - len] for 0 <= len < k
            // All these terms lie on the diagonal where (row - col) == (i - j - 1)
            // The highest row is i - 1, lowest row is i - k
            int r_start = i - 1;
            int c_start = j;

            if (r_start >= 0 && c_start >= 0)
            {
                int r_end = i - k;
                int c_end = j - k + 1;

                long long current_sum = pref_diag[r_start][c_start];
                long long sub_sum = 0;

                if (r_end - 1 >= 0 && c_end - 1 >= 0)
                {
                    sub_sum = pref_diag[r_end - 1][c_end - 1];
                }

                sum = (current_sum - sub_sum + MOD) % MOD;
            }

            // Boundary case: handle when we select all elements from the prefix (j == len)
            if (j < k && j == i)
            {
                // dp[0][0] = 1 handles the case when we take all elements, but if i >= k,
                // it's invalid anyway. If i < k, it's covered by the dp[0][0] if it's within bounds,
                // otherwise we add 1 manually if it was out of bounds of the diagonal prefix sum.
                // However, the diagonal prefix sum naturally reaches dp[0][0] via the loop if valid.
            }

            // Explicitly handle the base case contribution from "virtual" row -1 where j == len
            if (j < k)
            {
                int virtual_len = j;
                if (i - virtual_len - 1 == -1)
                {
                    sum = (sum + 1) % MOD;
                }
            }

            dp[i][j] = sum;

            // Update the prefix sum for the current diagonal
            pref_diag[i][j] = dp[i][j];
            if (i - 1 >= 0 && j - 1 >= 0)
            {
                pref_diag[i][j] = (pref_diag[i][j] + pref_diag[i - 1][j - 1]) % MOD;
            }
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
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}