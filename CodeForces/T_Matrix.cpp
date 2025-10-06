#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal += arr[i][j];
            }
            else if (i + j == n - 1)
            {
                secondary_diagonal += arr[i][j];
            }
        }
    }

    cout << abs(primary_diagonal - secondary_diagonal) << endl;

    return 0;
}
