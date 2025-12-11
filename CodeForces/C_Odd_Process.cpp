#include <bits/stdc++.h>
using namespace std;

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
        vector<long long> coins(n);
        for (int i = 0; i < n; i++)
            cin >> coins[i];

        sort(coins.rbegin(), coins.rend()); // sort descending

        vector<long long> result(n);
        long long curr_sum = 0;

        for (int k = 0; k < n; k++)
        {
            curr_sum += coins[k];
            if (curr_sum % 2 == 0)
                curr_sum = 0; // bag empties
            result[k] = curr_sum;
        }

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
