#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int power = 1;
    while (power < n)
    {
        power *= 2;
    }
    cout << power << "\n";
    // ---- end of your code ----
    return 0;
}
