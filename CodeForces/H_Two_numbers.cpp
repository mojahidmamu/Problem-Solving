#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int A, B;
    cin >> A >> B;

    int divide = A / B;

    cout << "floor " << A << " / " << B << " = " << floor(divide) << endl;
    cout << "ceil " << A << " / " << B << " = " << floor(divide) << endl;
    cout << "round " << A << " / " << B << " = " << floor(divide) << endl;
    return 0;
}
