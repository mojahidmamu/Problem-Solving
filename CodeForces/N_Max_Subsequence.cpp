#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    char last = '#';  
    for (int i = 0; i < n; i++)
    {
        if (s[i] != last)
        {
            ans++;
            last = s[i];
        }
    }

    cout << ans << "\n";
    return 0;
}
