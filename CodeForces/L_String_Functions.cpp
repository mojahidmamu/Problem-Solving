#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        string sub = s.substr(l, r - l + 1);
        cout << sub << endl;
    }
    return 0;
}
