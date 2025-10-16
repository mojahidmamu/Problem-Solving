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
        int n;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        int maxDiff = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > arr2[i])
            {
                maxDiff = max(maxDiff, arr1[i] - arr2[i]);
            }
        }
        cout << maxDiff + 1 << "\n";
    }
    return 0;
}
