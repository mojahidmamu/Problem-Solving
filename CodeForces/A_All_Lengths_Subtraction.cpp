#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n + 1), pos(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        bool ok = true;
        int currentLen = 1;
        for (int i = 2; i <= n; i++) {
            if (pos[i] > pos[i - 1]) currentLen++;
            else currentLen = 1;
            if (currentLen > 1 && pos[i] != pos[i - 1] + 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
