
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long total = 0;
        for (int i = 0; i + 1 < n; i++)
        {
            total += abs(arr[i] - arr[i - 1]);
        }

        long long best_gain = 0;
        best_gain = max(best_gain, (long long)abs(arr[0] - arr[1]));
        best_gain = max(best_gain, (long long)abs(arr[n - 2] - arr[n - 1]));

        for (int i = 1; i + 1 < n; i++)
        {
            long long gain = abs(arr[i - 1] - arr[i]) + abs(arr[i] - arr[i + 1]) - abs(arr[i - 1] - arr[i + 1]);
            best_gain = max(best_gain, gain);
        }
        cout << total - best_gain << endl;
    }

    return 0;
}
