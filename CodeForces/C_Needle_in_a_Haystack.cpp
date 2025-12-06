#include <bits/stdc++.h>
using namespace std;

string solve(string s, string t)
{
    vector<int> cnt_s(26, 0), cnt_t(26, 0);
    for (char c : s)
        cnt_s[c - 'a']++;
    for (char c : t)
        cnt_t[c - 'a']++;

    // check possibility
    for (int i = 0; i < 26; i++)
    {
        if (cnt_s[i] > cnt_t[i])
            return "Impossible";
    }

    vector<int> left(26, 0);
    for (int i = 0; i < 26; i++)
        left[i] = cnt_t[i] - cnt_s[i];

    string rem = "";
    for (int i = 0; i < 26; i++)
        rem += string(left[i], 'a' + i);

    // find best insertion point
    string ans = "";
    bool inserted = false;
    for (int i = 0; i <= rem.size(); i++)
    {
        if (!inserted)
        {
            if (i == rem.size() || rem[i] > s[0])
            {
                ans += s;
                inserted = true;
            }
        }
        if (i < rem.size())
            ans += rem[i];
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        string s, t;
        cin >> s >> t;
        cout << solve(s, t) << "\n";
    }
    return 0;
}
