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

    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<vector<bool>> pal(N, vector<bool>(N, false));

    for (int i = 0; i < N; i++)
    {
        pal[i][i] = true;
    }

    for (int i = 0; i + 1 < N; i++)
    {
        pal[i][i + 1] = (A[i] == A[i + 1]);
    }

    for (int len = 3; len <= N; len++)
    {
        for (int l = 0; l + len - 1 < N; l++)
        {
            int r = l + len - 1;
            pal[l][r] = (A[l] == A[r]) && pal[l + 1][r - 1];
        }
    }

    const int INF = 1e9;
    vector<int> dp(N + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (pal[j][i - 1])
            {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }

    cout << dp[N] << '\n';

    return 0;
}
