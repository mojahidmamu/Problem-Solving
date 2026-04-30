#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> typeA, typeB, typeC, typeD;
        for (int x : a) {
            bool div2 = (x % 2 == 0);
            bool div3 = (x % 3 == 0);
            if (div2 && div3) typeA.push_back(x);
            else if (div2 && !div3) typeB.push_back(x);
            else if (!div2 && div3) typeC.push_back(x);
            else typeD.push_back(x);
        }

        // Output in order: TypeA, TypeD, TypeB, TypeC
        // This matches all given samples
        for (int x : typeA) cout << x << " ";
        for (int x : typeD) cout << x << " ";
        for (int x : typeB) cout << x << " ";
        for (int x : typeC) cout << x << " ";
        cout << "\n";
    }
    return 0;
}