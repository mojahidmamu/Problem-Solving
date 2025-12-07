#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maximum = *max_element(arr, arr + n);
    int minimum = *min_element(arr, arr + n);
    cout << minimum << " " << maximum << "\n";
    return 0;
}
