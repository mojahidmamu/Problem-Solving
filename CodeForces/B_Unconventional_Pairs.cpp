#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);

        int maxDiff = 0;
        for (int i = 0; i < a - 1; i += 2)
        {
            int Diff = abs(arr[i] - arr[i + 1]);
            maxDiff = max(maxDiff, Diff);
        }

        cout << maxDiff << "\n";
    }
    return 0;
}
