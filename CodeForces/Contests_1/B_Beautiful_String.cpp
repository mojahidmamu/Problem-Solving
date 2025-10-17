#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

bool isNonDecreasing(string &s)
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool is_beautiful = false;
        vector<int> best;
        int bestLen = -1;

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
                    idx.push_back(i + 1);
                }
                else
                {
                    x += s[i];
                }
            }

            if (isPalindrome(x) && isNonDecreasing(p))
            {
                if ((int)idx.size() > bestLen)
                {
                    best = idx;
                    bestLen = idx.size();
                }
            }
        }

        cout << bestLen << "\n";
        for (int i = 0; i < (int)best.size(); i++)
        {
            cout << best[i] << (i + 1 == (int)best.size() ? '\n' : ' ');
        }
    }
    return 0;
}
