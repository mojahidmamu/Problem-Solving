#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int x, p;
    cin >> x >> p;
    double final_price = p / (1 - (x / 100.0));
    cout << fixed << setprecision(2) << final_price << "\n";

    return 0;
}
