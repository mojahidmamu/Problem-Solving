#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    cin >> s;
    string original = s;
    reverse(s.begin(), s.end());

    while (s.size() > 1 && s[0] == '0')
    {
        s.erase(s.begin());
    }

    cout << s << endl;

    if (s == original)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
