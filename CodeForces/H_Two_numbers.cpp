#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int A, B;
    cin >> A >> B;

    int floor_div = A / B;
    int ceil_div = (A + B - 1) / B;
    int round_div = (A + B / 2) / B;

    cout << "floor " << A << " / " << B << " = " << floor(floor_div) << endl;
    cout << "ceil " << A << " / " << B << " = " << floor(ceil_div) << endl;
    cout << "round " << A << " / " << B << " = " << floor(round_div) << endl;
    return 0;
}
