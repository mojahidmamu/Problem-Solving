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
        if (n % 3 == 0)
        {
            cout << 0 << "\n";
        }
        else if (n % 3 == 1)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    return 0;
}
