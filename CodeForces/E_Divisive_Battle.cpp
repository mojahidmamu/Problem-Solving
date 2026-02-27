#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Find first position where array is not non-decreasing
        int first_bad = -1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                first_bad = i;
                break;
            }
        }

        if (first_bad == -1) {
            // Already non-decreasing
            cout << "Bob\n";
        } else {
            // Alice wins if first_bad is even, Bob wins if odd
            if (first_bad % 2 == 0) {
                cout << "Alice\n";
            } else {
                cout << "Bob\n";
            }
        }
    }

    return 0;
}