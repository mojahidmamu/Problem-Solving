#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n, m, k;
    cin >> n >> m >> k;

    long long type3 = min(n, m);

    long long remain_eye = n - type3;

    long long type1 = remain_eye / 2;

    long long total = type3 + type1;

    cout << min(total, k) << "\n";

    return 0;
}
