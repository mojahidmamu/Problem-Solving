#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    int maxSum = 0;
    for (int i = 0; i < k; i++)
    {
         maxSum += arr[i];
    }
    cout << maxSum << endl;

    return 0;
}
