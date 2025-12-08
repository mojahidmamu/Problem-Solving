#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long a, b;
    cin >> a >> b;
    // Compute GCD of a and b
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    cout << a << "\n";


    return 0;
}
