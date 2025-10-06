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
        string s;
        cin >> s;
        int len = s.size();
        if (len > 10)
        {
            cout << s[0] << len - 2 << s[s.size() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}
