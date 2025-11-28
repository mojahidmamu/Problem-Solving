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
        long long sum = 0;
        for (int i = L; i <= R; i++)
        {
            sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}
