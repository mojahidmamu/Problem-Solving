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
        int n;
        cin >> n;
        int cnt = 0;
        int a = 1;
        int b;
        while (a < n)
        {
            if (b = n - a)
            {
                cnt++;
            }
            a++;
        }

        cout << cnt << "\n";
    }
    return 0;
}
