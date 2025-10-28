#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
