#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, ll k) {
    ll res = 0;
    ll moves = 0;
    ll cur = 1;
    while (cur <= n && moves < k) {
        if (cur % 2 == 1) {
            cur = cur * 2;
        } else {
            cur = cur * 2 - 1;
        }
        moves++;
    }
    res = n - cur + 1;
    if (res < 0) res = 0;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ans = n;

        ll low = 1, high = n;
        while (low <= high) {
            ll mid = (low + high) / 2;
            ll x = mid, moves = 0;
            while (x) {
                if (x % 2 == 0) x /= 2;
                else x--;
                moves++;
            }
            if (moves > k) high = mid - 1;
            else low = mid + 1;
        }
        cout << n - high << endl;
    }

    return 0;
}
