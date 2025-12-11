#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n, m, k;
    cin >> n >> m >> k;
    // First match as many eye-mouth pairs (1 eye + 1 mouth)
    long long type3 = min(n, m);

    // Remaining eyes
    long long remain_eye = n - type3;

    // Each 2 remaining eyes makes a type1 doll
    long long type1 = remain_eye / 2;

    long long total = type3 + type1;

    // But limited by bodies
    cout << min(total, k) << "\n";

    return 0;
}
