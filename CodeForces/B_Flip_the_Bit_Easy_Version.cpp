#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int p;
        cin >> p;
        p--;
        int x = a[p];
        
        int left = 0, right = 0;
        int flip = 0;
        for (int i = p-1; i >= 0; i--) {
            if (a[i] != x) {
                if (flip == 0) left++;
                flip ^= 1;
            } else {
                flip = 0;
            }
        }
        flip = 0;
        for (int i = p+1; i < n; i++) {
            if (a[i] != x) {
                if (flip == 0) right++;
                flip ^= 1;
            } else {
                flip = 0;
            }
        }
        
        cout << left + right << "\n";
    }
    return 0;
}     