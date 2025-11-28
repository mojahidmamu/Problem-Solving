#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int L, R;
        cin >> L >> R;
        long long sumR = R * (R + 1) / 2;
        long long sumL = (L - 1) * L / 2;
        long long sum = sumR - sumL;
        cout << sum << endl;
    }

    return 0;
}
