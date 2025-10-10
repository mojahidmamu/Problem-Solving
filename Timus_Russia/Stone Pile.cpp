#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    vector<int> a(n);
    long long int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    long long int minDiff = LLONG_MAX;
    for (int i = 0; i < (1 << n); i++) {
        long long int sum1= 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum1 += a[j];
            }
        }
         long long int sum2 = total - sum1;
        minDiff = min(minDiff, abs(sum1 - sum2));
    }   
    cout << minDiff << "\n";
    // ---
    
    return 0;
}
