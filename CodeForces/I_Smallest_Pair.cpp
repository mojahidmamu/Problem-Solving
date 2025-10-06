#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int minimum_sum = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int sum = arr[i] + arr[j] + j - i;
                if (sum < minimum_sum)
                {
                    minimum_sum = sum;
                }
            }
        }
        cout << minimum_sum << endl;
    }

    return 0;
}
