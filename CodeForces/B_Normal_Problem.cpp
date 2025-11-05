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

        reverse(s.begin(), s.end());
        for (char &c : s)
        {
            if (c == 'p')
            {
                c = 'q';
            }
            else if (c == 'q')
            {
                c = 'p';
            }
            else if (c == 'w')
            {
                c = 'w';
            }
        }
        cout << s << "\n";
    }
    return 0;
}
