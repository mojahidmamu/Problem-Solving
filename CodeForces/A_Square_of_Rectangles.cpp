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
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        bool canFormSquare = false;
        //  int allSum = l1 + b1 + l2 + b2 + l3 + b3;
        int sum1 = l1 + l2 + l3;
        int sum2 = b1 + b2 + b3;
        if (sum1 == sum2)
        {
            canFormSquare = true;
        }

        cout << (canFormSquare ? "YES" : "NO") << "\n";
    }
    return 0;
}
