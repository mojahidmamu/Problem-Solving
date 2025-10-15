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
        string s;
        cin >> s;
        string new_s = s;
        sort(s.begin(), s.end());

        int need_operations = 0;
        for (int i = 0; i < new_s.size(); i++)
        {
            if (s[i] != new_s[i])
            {
                need_operations++;
            }
        }
        // cout << (need_operations + 1) / 2 << "\n";
        cout << ceil(need_operations / 2) << "\n";
    }
    return 0;
}
