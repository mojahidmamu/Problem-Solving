#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int a, b;
    cin >> a >> b;
    long long res = 1;
    // Print NCR and NPR of A and B separated by a space.
    for (int i = 0; i < b; i++)
    {
        res = res * (a - i) / (i + 1);
    }
    cout << res << " ";
    long long res2 = 1;
    for (int i = 0; i < b; i++)
    {
        res2 = res2 * (a - i);
    }
    cout << res2 << "\n";

    return 0;
}
