#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int l, r, m;
    cin >> l >> r >> m;
    //  Print the product of all numbers from L to R (inclusive) module M
    int product = 1;
    for (int i = l; i <= r; i++)
    {
        product = (1LL * product * i) % m;
    }
    cout << product << "\n";

    return 0;
}
