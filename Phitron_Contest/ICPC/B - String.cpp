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
        string s;
        cin >> s;
        int n = s.length();
        if (n > 10)
        {
            cout << s[0] << n - 2 << s[n - 1] << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }
    return 0;
}
