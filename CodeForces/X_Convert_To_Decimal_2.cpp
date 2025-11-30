#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        int ones = 0;
        int temp = n;

        while (temp)
        {
            if (temp & 1)
            {
                ones++;
            }
            temp >>= 1;
        }
        unsigned int result = (1U << ones) - 1;

        cout << result << "\n";
    }

    return 0;
}
