#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long a, b;
    cin >> a >> b;
    int GCD = __gcd(a, b);
    int LCM = (a / GCD) * b;
    cout << GCD << " " << LCM << "\n";

    return 0;
}
