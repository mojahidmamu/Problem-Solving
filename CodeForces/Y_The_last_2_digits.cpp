#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long result = 1;
    result = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;

    cout << setw(2) << setfill('0') << result << endl;
    return 0;
}
