#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    
    vector<int> left(n);
    left[0] = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1])
            left[i] = left[i - 1];
        else
            left[i] = i;
    }

   
    vector<int> right(n);
    right[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[i + 1])
            right[i] = right[i + 1];
        else
            right[i] = i;
    }

   
    int K = 20; 
    vector<vector<ll>> st(n, vector<ll>(K));
    for (int i = 0; i < n; i++) st[i][0] = arr[i];
    for (int j = 1; j < K; j++) {
        for (int i = 0; i + (1 << j) <= n; i++)
            st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
    }

    auto query_max = [&](int l, int r) -> ll {
        int len = r - l + 1;
        int k = 31 - __builtin_clz(len);
        return max(st[l][k], st[r - (1 << k) + 1][k]);
    };

  
    unordered_map<ll, vector<int>> pos;
    for (int i = 0; i < n; i++) pos[arr[i]].push_back(i);

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--; 

        ll mx = query_max(l, r);

       
        auto &v = pos[mx];
        int count = upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin(), v.end(), l);
        if (count > 1) {
            cout << "NO\n";
            continue;
        }

       
        int idx = *lower_bound(v.begin(), v.end(), l);

        if (left[idx] <= l && right[idx] >= r)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
