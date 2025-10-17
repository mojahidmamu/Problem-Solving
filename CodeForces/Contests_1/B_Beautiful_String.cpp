#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

bool isNonDecreasing(string s)
{
    for (int i = 1; i < (int)s.size(); i++)
    {
        if (s[i] < s[i - 1])
            return false;
    }
    return true;
}

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

        bool is_beautiful = false;

        for (int mask = 0; mask < (1 << n); mask++)
        {
            string p = "";
            string x = "";
            vector<int> idx;
            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    p += s[i];
                    idx.push_back(i);
                }
                else
                {
                    x += s[i];
                }
            }

            if (isPalindrome(p) && isNonDecreasing(x))
            {
                cout << (int)idx.size() << "\n";
                if (!idx.empty())
                {
                    for (int i = 0; i < (int)idx.size(); i++)
                    {
                        cout << idx[i] + 1 << (i + 1 == (int)idx.size() ? "\n" : " ");
                    }
                }
                is_beautiful = true;
                break;
            }
        }
        if (!is_beautiful)
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}
