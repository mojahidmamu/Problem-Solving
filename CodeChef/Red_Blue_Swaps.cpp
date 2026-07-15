#include <bits/stdc++.h>
using namespace std;

// Author: Abdullah all Mojahid 

const int MOD = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int &x : A)
            cin >> x;

        vector<int> red_val, red_pos, blue_val, blue_pos;
        for (int i = 0; i < N; i++)
        {
            int col;
            cin >> col;
            if (col == 0)
            {
                red_val.push_back(A[i]);
                red_pos.push_back(i);
            }
            else
            {
                blue_val.push_back(A[i]);
                blue_pos.push_back(i);
            }
        }

        int r = red_val.size();
        int b = blue_val.size();

        vector<int> maxBlueBeforeRed(r, -1);
        vector<int> minBlueAfterRed(r, b);  

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (red_val[i] < blue_val[j])
                {
                    if (red_pos[i] < blue_pos[j])
                    { 
                        minBlueAfterRed[i] = min(minBlueAfterRed[i], j);
                    }
                    else
                    { 
                        maxBlueBeforeRed[i] = max(maxBlueBeforeRed[i], j);
                    }
                }
            }
        }

        vector<int> maxRedBeforeBlue(b, -1);
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < r; i++)
            {
                if (red_val[i] < blue_val[j] && red_pos[i] < blue_pos[j])
                { 
                    maxRedBeforeBlue[j] = max(maxRedBeforeBlue[j], i);
                }
            }
        }

        vector<vector<int>> dp(r + 1, vector<int>(b + 1, 0));
        dp[0][0] = 1;

        for (int i = 0; i <= r; i++)
        {
            for (int j = 0; j <= b; j++)
            {
                if (dp[i][j] == 0)
                    continue;

                 
                if (i < r)
                {
                    if (maxBlueBeforeRed[i] < j && j <= minBlueAfterRed[i])
                    {
                        dp[i + 1][j] += dp[i][j];
                        if (dp[i + 1][j] >= MOD)
                            dp[i + 1][j] -= MOD;
                    }
                }

                 
                if (j < b)
                {
                    if (i > maxRedBeforeBlue[j])
                    {
                        dp[i][j + 1] += dp[i][j];
                        if (dp[i][j + 1] >= MOD)
                            dp[i][j + 1] -= MOD;
                    }
                }
            }
        }

        cout << dp[r][b] << '\n';
    }

    return 0;
}