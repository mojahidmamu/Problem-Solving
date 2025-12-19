#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int R, C;
    cin >> R >> C;
    int A[R][C];
    int B[R][C];
    int sum[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> B[i][j];
        }
    }
    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         sum[i][j] = A[i][j] + B[i][j];
    //     }
    // }
    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         cout << sum[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}
