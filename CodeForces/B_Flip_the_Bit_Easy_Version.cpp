#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int n, k;
        cin >> n >> k;
        // k==1 always
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        int p;
        cin >> p;  // 1-based
        p--;       // make 0-based
        int x = a[p];
        
        // count left runs: 0 to p-1
        int left_runs = 0;
        for(int i=0; i<p; i++) {
            if(a[i] != x) {
                if(i==0 || a[i-1] == x) {
                    left_runs++;
                }
            }
        }
        
        // count right runs: p+1 to n-1
        int right_runs = 0;
        for(int i=p+1; i<n; i++) {
            if(a[i] != x) {
                if(i==p+1 || a[i-1] == x) {
                    right_runs++;
                }
            }
        }
        
        int ans = 2 * max(left_runs, right_runs);
        cout << ans << '\n';
    }
    return 0;
}