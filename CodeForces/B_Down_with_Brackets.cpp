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

        int balance = 0;
        int split_cnt = 0;
        for (char ch : s)
        {
            if (ch == '(')
            {
                balance++;
            }
            else if (ch == ')')
            {
                balance--;
            }

            if (balance == 0)
            {
                split_cnt++;
            }
        }

        if (split_cnt >= 2)
        {
            cout << "YES" << endl;
        }
        else if (split_cnt == 1)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
