#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    reverse(prefixSum, prefixSum + n);
    for (int i = 0; i < n; i++)
    {
        cout << prefixSum[i] << " ";
    }
    return 0;
}
