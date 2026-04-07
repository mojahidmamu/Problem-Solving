#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll x, ll y) {
    while (y != 0) {
        ll t = y;
        y = x % y;
        x = t;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        
        ll ga = __gcd(a, n);
        ll gb = __gcd(b, m);
        
        if (ga != 1 || gb != 1) {
            cout << "NO\n";
            continue;
        }
        
        ll d = gcd(n, m);
        if (d == 1 || d == 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}