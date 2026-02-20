#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    int max_val = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        max_val = max(max_val, arr[i]);
    }

    int q;
    cin >> q;

    // Size freq array: max_val + q + 5
    vector<int> freq(max_val + q + 5, 0);
    for(int i = 0; i < n; i++) freq[arr[i]]++;

    // Initial Mex
    int mex = 0;
    while(freq[mex] > 0) mex++;

    while(q--) {
        int x;
        cin >> x;
        if(freq[x] == 0) {
            cout << -1 << "\n";
        } else {
            // Remove one occurrence
            freq[x]--;

            int curr_mex = mex;
            if(x == mex) {
                while(freq[curr_mex] > 0) curr_mex++;
            }
            cout << curr_mex << "\n";

            // Restore
            freq[x]++;
        }
    }

    return 0;
}