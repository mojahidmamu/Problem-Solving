#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--) {   
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int length = 0;
        int freq[n + 1];
        // count frequency of each number: 1 to n
        for (int i = 1; i <= n; i++) {
            freq[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        





        cout << length << "\n";

    }
    return 0;
}
